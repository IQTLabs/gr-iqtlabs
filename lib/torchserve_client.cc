#include "torchserve_client.h"

#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <nlohmann/json.hpp>

namespace gr {
namespace iqtlabs {

torchserve_client::torchserve_client(std::string &host, std::string &port)
    : host_(host), port_(port), inference_connected_(false) {
  stream_.reset(new boost::beast::tcp_stream(ioc_));
}

void torchserve_client::connect() {
  if (!inference_connected_) {
    boost::asio::ip::tcp::resolver resolver(ioc_);
    auto const resolve_results = resolver.resolve(host_, port_);
    stream_->connect(resolve_results);
    inference_connected_ = true;
  }
}

void torchserve_client::disconnect() {
  if (inference_connected_) {
    boost::beast::error_code ec;
    stream_->socket().shutdown(boost::asio::ip::tcp::socket::shutdown_both, ec);
    inference_connected_ = false;
  }
}

void torchserve_client::make_inference_request(
    const std::string &model_name, const std::string_view &body,
    const std::string &content_type) {
  req_.reset(new boost::beast::http::request<boost::beast::http::string_body>(
      {boost::beast::http::verb::post, "/predictions/" + model_name, 11}));
  req_->keep_alive(true);
  req_->set(boost::beast::http::field::connection, "keep-alive");
  req_->set(boost::beast::http::field::host, host_);
  req_->set(boost::beast::http::field::user_agent, BOOST_BEAST_VERSION_STRING);
  req_->set(boost::beast::http::field::content_type, content_type);
  req_->body() = body;
  req_->prepare_payload();
}

std::string torchserve_client::send_inference_request_() {
  boost::beast::flat_buffer buffer;
  boost::beast::http::response<boost::beast::http::string_body> res;
  boost::beast::http::write(*stream_, *req_);
  boost::beast::http::read(*stream_, buffer, res);
  return res.body().data();
}

void torchserve_client::send_inference_request(std::string &results,
                                               std::string &error) {
  // attempt to re-use existing connection. may fail if an http 1.1 server
  // has dropped the connection to use in the meantime.
  // TODO: handle case where model server is up but blocks us forever.
  if (inference_connected_) {
    try {
      results = send_inference_request_();
    } catch (std::exception &ex) {
      disconnect();
    }
  }

  if (results.size() == 0) {
    try {
      connect();
      results = send_inference_request_();
    } catch (std::exception &ex) {
      error = "inference connection error: " + std::string(ex.what());
    }
  }

  if (error.size() == 0 &&
      (results.size() == 0 || !nlohmann::json::accept(results))) {
    error = "invalid json: " + results;
  }

  if (error.size()) {
    disconnect();
  }
}

} // namespace iqtlabs
} // namespace gr
