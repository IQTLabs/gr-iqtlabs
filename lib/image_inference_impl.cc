/* -*- c++ -*- */
/*                                  Apache License
 *                            Version 2.0, January 2004
 *                         http://www.apache.org/licenses/
 *
 *    TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION
 *
 *    1. Definitions.
 *
 *       "License" shall mean the terms and conditions for use, reproduction,
 *       and distribution as defined by Sections 1 through 9 of this document.
 *
 *       "Licensor" shall mean the copyright owner or entity authorized by
 *       the copyright owner that is granting the License.
 *
 *       "Legal Entity" shall mean the union of the acting entity and all
 *       other entities that control, are controlled by, or are under common
 *       control with that entity. For the purposes of this definition,
 *       "control" means (i) the power, direct or indirect, to cause the
 *       direction or management of such entity, whether by contract or
 *       otherwise, or (ii) ownership of fifty percent (50%) or more of the
 *       outstanding shares, or (iii) beneficial ownership of such entity.
 *
 *       "You" (or "Your") shall mean an individual or Legal Entity
 *       exercising permissions granted by this License.
 *
 *       "Source" form shall mean the preferred form for making modifications,
 *       including but not limited to software source code, documentation
 *       source, and configuration files.
 *
 *       "Object" form shall mean any form resulting from mechanical
 *       transformation or translation of a Source form, including but
 *       not limited to compiled object code, generated documentation,
 *       and conversions to other media types.
 *
 *       "Work" shall mean the work of authorship, whether in Source or
 *       Object form, made available under the License, as indicated by a
 *       copyright notice that is included in or attached to the work
 *       (an example is provided in the Appendix below).
 *
 *       "Derivative Works" shall mean any work, whether in Source or Object
 *       form, that is based on (or derived from) the Work and for which the
 *       editorial revisions, annotations, elaborations, or other modifications
 *       represent, as a whole, an original work of authorship. For the purposes
 *       of this License, Derivative Works shall not include works that remain
 *       separable from, or merely link (or bind by name) to the interfaces of,
 *       the Work and Derivative Works thereof.
 *
 *       "Contribution" shall mean any work of authorship, including
 *       the original version of the Work and any modifications or additions
 *       to that Work or Derivative Works thereof, that is intentionally
 *       submitted to Licensor for inclusion in the Work by the copyright owner
 *       or by an individual or Legal Entity authorized to submit on behalf of
 *       the copyright owner. For the purposes of this definition, "submitted"
 *       means any form of electronic, verbal, or written communication sent
 *       to the Licensor or its representatives, including but not limited to
 *       communication on electronic mailing lists, source code control systems,
 *       and issue tracking systems that are managed by, or on behalf of, the
 *       Licensor for the purpose of discussing and improving the Work, but
 *       excluding communication that is conspicuously marked or otherwise
 *       designated in writing by the copyright owner as "Not a Contribution."
 *
 *       "Contributor" shall mean Licensor and any individual or Legal Entity
 *       on behalf of whom a Contribution has been received by Licensor and
 *       subsequently incorporated within the Work.
 *
 *    2. Grant of Copyright License. Subject to the terms and conditions of
 *       this License, each Contributor hereby grants to You a perpetual,
 *       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
 *       copyright license to reproduce, prepare Derivative Works of,
 *       publicly display, publicly perform, sublicense, and distribute the
 *       Work and such Derivative Works in Source or Object form.
 *
 *    3. Grant of Patent License. Subject to the terms and conditions of
 *       this License, each Contributor hereby grants to You a perpetual,
 *       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
 *       (except as stated in this section) patent license to make, have made,
 *       use, offer to sell, sell, import, and otherwise transfer the Work,
 *       where such license applies only to those patent claims licensable
 *       by such Contributor that are necessarily infringed by their
 *       Contribution(s) alone or by combination of their Contribution(s)
 *       with the Work to which such Contribution(s) was submitted. If You
 *       institute patent litigation against any entity (including a
 *       cross-claim or counterclaim in a lawsuit) alleging that the Work
 *       or a Contribution incorporated within the Work constitutes direct
 *       or contributory patent infringement, then any patent licenses
 *       granted to You under this License for that Work shall terminate
 *       as of the date such litigation is filed.
 *
 *    4. Redistribution. You may reproduce and distribute copies of the
 *       Work or Derivative Works thereof in any medium, with or without
 *       modifications, and in Source or Object form, provided that You
 *       meet the following conditions:
 *
 *       (a) You must give any other recipients of the Work or
 *           Derivative Works a copy of this License; and
 *
 *       (b) You must cause any modified files to carry prominent notices
 *           stating that You changed the files; and
 *
 *       (c) You must retain, in the Source form of any Derivative Works
 *           that You distribute, all copyright, patent, trademark, and
 *           attribution notices from the Source form of the Work,
 *           excluding those notices that do not pertain to any part of
 *           the Derivative Works; and
 *
 *       (d) If the Work includes a "NOTICE" text file as part of its
 *           distribution, then any Derivative Works that You distribute must
 *           include a readable copy of the attribution notices contained
 *           within such NOTICE file, excluding those notices that do not
 *           pertain to any part of the Derivative Works, in at least one
 *           of the following places: within a NOTICE text file distributed
 *           as part of the Derivative Works; within the Source form or
 *           documentation, if provided along with the Derivative Works; or,
 *           within a display generated by the Derivative Works, if and
 *           wherever such third-party notices normally appear. The contents
 *           of the NOTICE file are for informational purposes only and
 *           do not modify the License. You may add Your own attribution
 *           notices within Derivative Works that You distribute, alongside
 *           or as an addendum to the NOTICE text from the Work, provided
 *           that such additional attribution notices cannot be construed
 *           as modifying the License.
 *
 *       You may add Your own copyright statement to Your modifications and
 *       may provide additional or different license terms and conditions
 *       for use, reproduction, or distribution of Your modifications, or
 *       for any such Derivative Works as a whole, provided Your use,
 *       reproduction, and distribution of the Work otherwise complies with
 *       the conditions stated in this License.
 *
 *    5. Submission of Contributions. Unless You explicitly state otherwise,
 *       any Contribution intentionally submitted for inclusion in the Work
 *       by You to the Licensor shall be under the terms and conditions of
 *       this License, without any additional terms or conditions.
 *       Notwithstanding the above, nothing herein shall supersede or modify
 *       the terms of any separate license agreement you may have executed
 *       with Licensor regarding such Contributions.
 *
 *    6. Trademarks. This License does not grant permission to use the trade
 *       names, trademarks, service marks, or product names of the Licensor,
 *       except as required for reasonable and customary use in describing the
 *       origin of the Work and reproducing the content of the NOTICE file.
 *
 *    7. Disclaimer of Warranty. Unless required by applicable law or
 *       agreed to in writing, Licensor provides the Work (and each
 *       Contributor provides its Contributions) on an "AS IS" BASIS,
 *       WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 *       implied, including, without limitation, any warranties or conditions
 *       of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
 *       PARTICULAR PURPOSE. You are solely responsible for determining the
 *       appropriateness of using or redistributing the Work and assume any
 *       risks associated with Your exercise of permissions under this License.
 *
 *    8. Limitation of Liability. In no event and under no legal theory,
 *       whether in tort (including negligence), contract, or otherwise,
 *       unless required by applicable law (such as deliberate and grossly
 *       negligent acts) or agreed to in writing, shall any Contributor be
 *       liable to You for damages, including any direct, indirect, special,
 *       incidental, or consequential damages of any character arising as a
 *       result of this License or out of the use or inability to use the
 *       Work (including but not limited to damages for loss of goodwill,
 *       work stoppage, computer failure or malfunction, or any and all
 *       other commercial damages or losses), even if such Contributor
 *       has been advised of the possibility of such damages.
 *
 *    9. Accepting Warranty or Additional Liability. While redistributing
 *       the Work or Derivative Works thereof, You may choose to offer,
 *       and charge a fee for, acceptance of support, warranty, indemnity,
 *       or other liability obligations and/or rights consistent with this
 *       License. However, in accepting such obligations, You may act only
 *       on Your own behalf and on Your sole responsibility, not on behalf
 *       of any other Contributor, and only if You agree to indemnify,
 *       defend, and hold each Contributor harmless for any liability
 *       incurred by, or claims asserted against, such Contributor by reason
 *       of your accepting any such warranty or additional liability.
 *
 *    END OF TERMS AND CONDITIONS
 *
 *    APPENDIX: How to apply the Apache License to your work.
 *
 *       To apply the Apache License to your work, attach the following
 *       boilerplate notice, with the fields enclosed by brackets "[]"
 *       replaced with your own identifying information. (Don't include
 *       the brackets!)  The text should be enclosed in the appropriate
 *       comment syntax for the file format. We also recommend that a
 *       file or class name and description of purpose be included on the
 *       same "printed page" as the copyright notice for easier
 *       identification within third-party archives.
 *
 *    Copyright [yyyy] [name of copyright owner]
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include "image_inference_impl.h"
#include "../json.hpp"
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <fstream>
#include <gnuradio/io_signature.h>
#include <ios>
#include <iostream>

namespace gr {
namespace iqtlabs {

image_inference::sptr
image_inference::make(const std::string &tag, int vlen, int x, int y,
                      const std::string &image_dir, double convert_alpha,
                      double norm_alpha, double norm_beta, int norm_type,
                      int colormap, int interpolation, int flip,
                      double min_peak_points, const std::string &model_server,
                      const std::string &model_name) {
  return gnuradio::make_block_sptr<image_inference_impl>(
      tag, vlen, x, y, image_dir, convert_alpha, norm_alpha, norm_beta,
      norm_type, colormap, interpolation, flip, min_peak_points, model_server,
      model_name);
}

image_inference_impl::image_inference_impl(
    const std::string &tag, int vlen, int x, int y,
    const std::string &image_dir, double convert_alpha, double norm_alpha,
    double norm_beta, int norm_type, int colormap, int interpolation, int flip,
    double min_peak_points, const std::string &model_server,
    const std::string &model_name)
    : gr::block("image_inference",
                gr::io_signature::make(1 /* min inputs */, 1 /* max inputs */,
                                       vlen * sizeof(input_type)),
                gr::io_signature::make(1 /* min outputs */, 1 /*max outputs */,
                                       sizeof(output_type))),
      tag_(pmt::intern(tag)), x_(x), y_(y), vlen_(vlen), last_rx_freq_(0),
      last_rx_time_(0), image_dir_(image_dir), convert_alpha_(convert_alpha),
      norm_alpha_(norm_alpha), norm_beta_(norm_beta), norm_type_(norm_type),
      colormap_(colormap), interpolation_(interpolation), flip_(flip),
      min_peak_points_(min_peak_points), model_name_(model_name),
      running_(true), inference_connected_(false) {
  points_buffer_.reset(
      new cv::Mat(cv::Size(vlen, 0), CV_32F, cv::Scalar::all(0)));
  cmapped_buffer_.reset(
      new cv::Mat(cv::Size(vlen, 0), CV_8UC3, cv::Scalar::all(0)));
  resized_buffer_.reset(
      new cv::Mat(cv::Size(x_, y_), CV_8UC3, cv::Scalar::all(0)));
  // we will output our own metadata tags.
  set_tag_propagation_policy(TPP_DONT);
  // TODO: IPv6 IP addresses
  std::vector<std::string> model_server_parts_;
  boost::split(model_server_parts_, model_server, boost::is_any_of(":"),
               boost::token_compress_on);
  if (model_server_parts_.size() == 2) {
    host_ = model_server_parts_[0];
    port_ = model_server_parts_[1];
  }
  stream_.reset(new boost::beast::tcp_stream(ioc_));
  inference_thread_.reset(
      new std::thread(&image_inference_impl::get_inference_, this));
}

void image_inference_impl::delete_inference_() {
  output_item_type output_item;
  inference_q_.pop(output_item);
  delete output_item.image_buffer;
}

image_inference_impl::~image_inference_impl() {
  running_ = false;
  inference_thread_->join();
  while (!inference_q_.empty()) {
    delete_inference_();
  }
}

void image_inference_impl::process_items_(size_t c, const input_type *&in) {
  cv::Mat new_rows(cv::Size(vlen_, c), CV_32F, (void *)in);
  points_buffer_->push_back(new_rows);
  in += (vlen_ * c);
}

void image_inference_impl::create_image_() {
  if (!points_buffer_->empty()) {
    double points_min, points_max;
    cv::minMaxLoc(*points_buffer_, &points_min, &points_max);
    if (points_max > min_peak_points_) {
      output_item_type output_item;
      output_item.rx_freq = last_rx_freq_;
      output_item.ts = last_rx_time_;
      output_item.image_buffer = new std::vector<unsigned char>();
      output_item.orig_rows = points_buffer_->rows;
      this->d_logger->debug("rx_freq {} rx_time {} rows {}", last_rx_freq_,
                            last_rx_time_, points_buffer_->rows);
      cv::normalize(*points_buffer_, *points_buffer_, norm_alpha_, norm_beta_,
                    norm_type_);
      points_buffer_->convertTo(*cmapped_buffer_, CV_8UC3, convert_alpha_, 0);
      cv::applyColorMap(*cmapped_buffer_, *cmapped_buffer_, colormap_);
      cv::cvtColor(*cmapped_buffer_, *cmapped_buffer_, cv::COLOR_BGR2RGB);
      cv::resize(*cmapped_buffer_, *resized_buffer_, cv::Size(x_, y_),
                 interpolation_);
      if (flip_ == -1 || flip_ == 0 || flip_ == 1) {
        cv::flip(*resized_buffer_, *resized_buffer_, flip_);
      }
      cv::cvtColor(*resized_buffer_, *resized_buffer_, cv::COLOR_RGB2BGR);
      cv::imencode(IMAGE_EXT, *resized_buffer_, *output_item.image_buffer);
      // write image file
      std::string image_file_base =
          "image_" + host_now_str_(output_item.ts) + "_" +
          std::to_string(uint64_t(x_)) + "x" + std::to_string(uint64_t(y_)) +
          "_" + std::to_string(uint64_t(output_item.rx_freq)) + "Hz";
      std::string image_file_png = image_file_base + IMAGE_EXT;
      std::string dot_image_file_png = image_dir_ + "/." + image_file_png;
      std::string full_image_file_png = image_dir_ + "/" + image_file_png;
      std::ofstream image_out;
      image_out.open(dot_image_file_png, std::ios::binary | std::ios::out);
      image_out.write((const char *)output_item.image_buffer->data(),
                      output_item.image_buffer->size());
      image_out.close();
      rename(dot_image_file_png.c_str(), full_image_file_png.c_str());
      output_item.image_path = full_image_file_png;
      if (!inference_q_.push(output_item)) {
        d_logger->error("inference request queue full, size {}", MAX_INFERENCE);
      }
    }
    points_buffer_->resize(0);
  }
}

void image_inference_impl::get_inference_() {
  boost::beast::error_code ec;
  for (;;) {
    if (!running_) {
      if (inference_connected_) {
        stream_->socket().shutdown(boost::asio::ip::tcp::socket::shutdown_both,
                                   ec);
      }
      return;
    }
    if (inference_q_.empty()) {
      sleep(0.001);
      continue;
    }
    output_item_type output_item;
    inference_q_.pop(output_item);
    std::stringstream ss("", std::ios_base::app | std::ios_base::out);
    ss << "{"
       << "\"ts\": " << host_now_str_(output_item.ts)
       << ", \"rx_freq\": " << output_item.rx_freq
       << ", \"orig_rows\": " << output_item.orig_rows << ", \"image_path\": \""
       << output_item.image_path << "\"";
    if (host_.size() && port_.size()) {
      // TODO: reuse resolver/existing connection if possible.
      const std::string_view body(
          reinterpret_cast<char const *>(output_item.image_buffer->data()),
          output_item.image_buffer->size());
      boost::beast::http::request<boost::beast::http::string_body> req{
          boost::beast::http::verb::post, "/predictions/" + model_name_, 11};
      req.keep_alive(true);
      req.set(boost::beast::http::field::connection, "keep-alive");
      req.set(boost::beast::http::field::host, host_);
      req.set(boost::beast::http::field::user_agent,
              BOOST_BEAST_VERSION_STRING);
      req.set(boost::beast::http::field::content_type, "image/" + IMAGE_TYPE);
      req.body() = body;
      req.prepare_payload();
      std::string results;

      // attempt to re-use existing connection. may fail if an http 1.1 server
      // has dropped the connection to use in the meantime.
      if (inference_connected_) {
        try {
          boost::beast::flat_buffer buffer;
          boost::beast::http::response<boost::beast::http::string_body> res;
          boost::beast::http::write(*stream_, req);
          boost::beast::http::read(*stream_, buffer, res);
          results = res.body().data();
        } catch (std::exception &ex) {
          stream_->socket().shutdown(
              boost::asio::ip::tcp::socket::shutdown_both, ec);
          inference_connected_ = false;
        }
      }

      if (results.size() == 0) {
        try {
          if (!inference_connected_) {
            boost::asio::ip::tcp::resolver resolver(ioc_);
            auto const results = resolver.resolve(host_, port_);
            stream_->connect(results);
            inference_connected_ = true;
          }
          boost::beast::flat_buffer buffer;
          boost::beast::http::response<boost::beast::http::string_body> res;
          boost::beast::http::write(*stream_, req);
          boost::beast::http::read(*stream_, buffer, res);
          results = res.body().data();
        } catch (std::exception &ex) {
          ss << ", \"error\": \"" << ex.what() << "\"";
          inference_connected_ = false;
        }
      }

      if (results.size()) {
        ss << ", \"predictions\": " << results;
      }
    }
    // double new line to faciliate json parsing, since prediction may contain
    // new lines.
    ss << "}\n" << std::endl;
    yaml_q_.push(ss.str());
    delete output_item.image_buffer;
  }
}

int image_inference_impl::general_work(int noutput_items,
                                       gr_vector_int &ninput_items,
                                       gr_vector_const_void_star &input_items,
                                       gr_vector_void_star &output_items) {
  const input_type *in = static_cast<const input_type *>(input_items[0]);
  size_t in_count = ninput_items[0];
  size_t in_first = nitems_read(0);

  while (!yaml_q_.empty()) {
    std::string yaml;
    yaml_q_.pop(yaml);
    out_buf_.insert(out_buf_.end(), yaml.begin(), yaml.end());
  }

  if (!out_buf_.empty()) {
    auto out = static_cast<output_type *>(output_items[0]);
    const size_t leftover = std::min(out_buf_.size(), (size_t)noutput_items);
    auto from = out_buf_.begin();
    auto to = from + leftover;
    std::copy(from, to, out);
    out_buf_.erase(from, to);
    return leftover;
  }

  std::vector<tag_t> all_tags, rx_freq_tags;
  std::vector<double> rx_times;
  get_tags_in_window(all_tags, 0, 0, in_count);
  get_tags(tag_, all_tags, rx_freq_tags, rx_times, in_count);

  if (rx_freq_tags.empty()) {
    process_items_(in_count, in);
  } else {
    for (size_t t = 0; t < rx_freq_tags.size(); ++t) {
      const auto &tag = rx_freq_tags[t];
      const double rx_time = rx_times[t];
      const auto rel = tag.offset - in_first;
      in_first += rel;

      if (rel > 0) {
        process_items_(rel, in);
      }

      uint64_t rx_freq = (uint64_t)pmt::to_double(tag.value);
      create_image_();
      last_rx_freq_ = rx_freq;
      last_rx_time_ = rx_time;
    }
  }

  consume_each(in_count);
  return 0;
}

void image_inference_impl::forecast(int noutput_items,
                                    gr_vector_int &ninput_items_required) {
  ninput_items_required[0] = 1;
}

} /* namespace iqtlabs */
} /* namespace gr */
