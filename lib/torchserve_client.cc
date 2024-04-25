#include "torchserve_client.h"

namespace gr {
namespace iqtlabs {

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
