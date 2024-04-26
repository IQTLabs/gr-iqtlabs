#include "torchserve_client.h"

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

boost::beast::http::request<boost::beast::http::string_body>
torchserve_client::make_inference_request(const std::string &model_name,
                                          const std::string_view &body,
                                          const std::string &content_type) {
  boost::beast::http::request<boost::beast::http::string_body> req{
      boost::beast::http::verb::post, "/predictions/" + model_name, 11};
  req.keep_alive(true);
  req.set(boost::beast::http::field::connection, "keep-alive");
  req.set(boost::beast::http::field::host, host_);
  req.set(boost::beast::http::field::user_agent, BOOST_BEAST_VERSION_STRING);
  req.set(boost::beast::http::field::content_type, content_type);
  req.body() = body;
  return req;
}

std::string torchserve_client::send_inference_request_(
    boost::beast::http::request<boost::beast::http::string_body> &req) {
  boost::beast::flat_buffer buffer;
  boost::beast::http::response<boost::beast::http::string_body> res;
  boost::beast::http::write(*stream_, req);
  boost::beast::http::read(*stream_, buffer, res);
  return res.body().data();
}

void torchserve_client::send_inference_request(
    boost::beast::http::request<boost::beast::http::string_body> &req,
    std::string &results, std::string &error) {
  // attempt to re-use existing connection. may fail if an http 1.1 server
  // has dropped the connection to use in the meantime.
  // TODO: handle case where model server is up but blocks us forever.
  if (inference_connected_) {
    try {
      results = send_inference_request_(req);
    } catch (std::exception &ex) {
      disconnect();
    }
  }

  if (results.size() == 0) {
    try {
      connect();
      results = send_inference_request_(req);
    } catch (std::exception &ex) {
      error = "inference connection error: " + std::string(ex.what());
    }
  }
}

} // namespace iqtlabs
} // namespace gr