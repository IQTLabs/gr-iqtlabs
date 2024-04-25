#include "torchserve_client.h"

namespace gr {
namespace iqtlabs {

boost::beast::http::request<boost::beast::http::string_body>
make_inference_request(const std::string &model_name, const std::string &host,
                       const std::string_view &body,
                       const std::string &content_type) {
  boost::beast::http::request<boost::beast::http::string_body> req{
      boost::beast::http::verb::post, "/predictions/" + model_name, 11};
  req.keep_alive(true);
  req.set(boost::beast::http::field::connection, "keep-alive");
  req.set(boost::beast::http::field::host, host);
  req.set(boost::beast::http::field::user_agent, BOOST_BEAST_VERSION_STRING);
  req.set(boost::beast::http::field::content_type, content_type);
  req.body() = body;
  return req;
}

std::string send_inference_request(
    boost::beast::tcp_stream *stream,
    boost::beast::http::request<boost::beast::http::string_body> &req) {
  boost::beast::flat_buffer buffer;
  boost::beast::http::response<boost::beast::http::string_body> res;
  boost::beast::http::write(*stream, req);
  boost::beast::http::read(*stream, buffer, res);
  return res.body().data();
}

} // namespace iqtlabs
} // namespace gr
