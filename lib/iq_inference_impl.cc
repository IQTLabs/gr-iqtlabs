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

#include "iq_inference_impl.h"
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <gnuradio/io_signature.h>
#include <volk/volk.h>

namespace gr {
namespace iqtlabs {

iq_inference::sptr
iq_inference::make(const std::string &tag, size_t vlen, size_t sample_buffer,
                   double min_peak_points, const std::string &model_server,
                   const std::string &model_names, double confidence,
                   size_t n_inference, int samp_rate) {
  return gnuradio::make_block_sptr<iq_inference_impl>(
      tag, vlen, sample_buffer, min_peak_points, model_server, model_names,
      confidence, n_inference, samp_rate);
}

/*
 * The private constructor
 */
iq_inference_impl::iq_inference_impl(const std::string &tag, size_t vlen,
                                     size_t sample_buffer,
                                     double min_peak_points,
                                     const std::string &model_server,
                                     const std::string &model_names,
                                     double confidence, size_t n_inference,
                                     int samp_rate)
    : gr::block("iq_inference",
                gr::io_signature::makev(
                    2 /* min inputs */, 2 /* min inputs */,
                    std::vector<int>{(int)(vlen * sizeof(gr_complex)),
                                     (int)(vlen * sizeof(float))}),
                gr::io_signature::make(1 /* min outputs */, 1 /*max outputs */,
                                       sizeof(char))),
      tag_(pmt::intern(tag)), vlen_(vlen), sample_buffer_(sample_buffer),
      min_peak_points_(min_peak_points), model_server_(model_server),
      confidence_(confidence), n_inference_(n_inference), samp_rate_(samp_rate),
      inference_count_(0), running_(true), last_rx_freq_(0), last_rx_time_(0),
      inference_connected_(false) {
  samples_lookback_.reset(new gr_complex[vlen * sample_buffer]);
  unsigned int alignment = volk_get_alignment();
  total_.reset((float *)volk_malloc(sizeof(float), alignment));
  max_.reset((uint16_t *)volk_malloc(sizeof(uint16_t), alignment));
  std::vector<std::string> model_server_parts_;
  std::vector<std::string> text_color_parts_;
  boost::split(model_server_parts_, model_server, boost::is_any_of(":"),
               boost::token_compress_on);
  boost::split(model_names_, model_names, boost::is_any_of(","),
               boost::token_compress_on);
  if (model_server_parts_.size() == 2) {
    host_ = model_server_parts_[0];
    port_ = model_server_parts_[1];
    if (model_names_.size() == 0) {
      d_logger->error("missing model name(s)");
    }
  }
  stream_.reset(new boost::beast::tcp_stream(ioc_));
  inference_thread_.reset(
      new std::thread(&iq_inference_impl::background_run_inference_, this));
}

void iq_inference_impl::delete_output_item_(output_item_type &output_item) {
  delete output_item.samples;
  delete output_item.power;
}

void iq_inference_impl::delete_inference_() {
  output_item_type output_item;
  inference_q_.pop(output_item);
  delete_output_item_(output_item);
}

void iq_inference_impl::background_run_inference_() {
  while (running_) {
    run_inference_();
    sleep(0.001);
  }
}

bool iq_inference_impl::stop() {
  d_logger->info("stopping");
  running_ = false;
  inference_thread_->join();
  run_inference_();
  if (inference_connected_) {
    boost::beast::error_code ec;
    stream_->socket().shutdown(boost::asio::ip::tcp::socket::shutdown_both, ec);
  }
  return true;
}

void iq_inference_impl::run_inference_() {
  boost::beast::error_code ec;
  while (!inference_q_.empty()) {
    output_item_type output_item;
    inference_q_.pop(output_item);
    nlohmann::json metadata_json;
    metadata_json["ts"] = host_now_str_(output_item.rx_time);
    metadata_json["rx_freq"] = std::to_string(output_item.rx_freq);
    nlohmann::json output_json;

    if ((host_.size() && port_.size()) && (model_names_.size() > 0)) {
      std::string error;
      nlohmann::json results_json;
      size_t rendered_predictions = 0;

      for (auto model_name : model_names_) {
        const std::string_view body(
            reinterpret_cast<char const *>(output_item.samples),
            output_item.sample_count * sizeof(gr_complex));
        boost::beast::http::request<boost::beast::http::string_body> req{
            boost::beast::http::verb::post, "/predictions/" + model_name, 11};
        req.keep_alive(true);
        req.set(boost::beast::http::field::connection, "keep-alive");
        req.set(boost::beast::http::field::host, host_);
        req.set(boost::beast::http::field::user_agent,
                BOOST_BEAST_VERSION_STRING);
        req.set(boost::beast::http::field::content_type,
                "application/octet-stream");
        req.body() = body;
        req.prepare_payload();
        std::string results;
        // TODO: troubleshoot test flask server hang after one request.
        inference_connected_ = false;
        bool valid_json = true;

        // attempt to re-use existing connection. may fail if an http 1.1 server
        // has dropped the connection to use in the meantime.
        // TODO: handle case where model server is up but blocks us forever.
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
              auto const resolve_results = resolver.resolve(host_, port_);
              stream_->connect(resolve_results);
              inference_connected_ = true;
            }
            boost::beast::flat_buffer buffer;
            boost::beast::http::response<boost::beast::http::string_body> res;
            boost::beast::http::write(*stream_, req);
            boost::beast::http::read(*stream_, buffer, res);
            results = res.body().data();
          } catch (std::exception &ex) {
            error = "inference connection error: " + std::string(ex.what());
          }
        }

        if (error.size() == 0 &&
            (results.size() == 0 || !nlohmann::json::accept(results))) {
          error = "invalid json: " + results;
          valid_json = false;
        }

        if (error.size() == 0) {
          try {
            nlohmann::json original_results_json =
                nlohmann::json::parse(results);
            for (auto &prediction_class : original_results_json.items()) {
              if (!results_json.contains(prediction_class.key())) {
                results_json[prediction_class.key()] = nlohmann::json::array();
              }
              for (auto &prediction_ref : prediction_class.value().items()) {
                auto prediction = prediction_ref.value();
                prediction["model"] = model_name;
                // TODO: gate on minimum confidence.
                // float conf = prediction["conf"];
                results_json[prediction_class.key()].emplace_back(prediction);
              }
            }
          } catch (std::exception &ex) {
            error = "invalid json: " + std::string(ex.what()) + " " + results;
            valid_json = false;
          }
        }

        if (error.size()) {
          d_logger->error(error);
          if (valid_json) {
            output_json["error"] = error;
          } else {
            output_json["error"] = "invalid json";
          }
          inference_connected_ = false;
        }
      }

      output_json["predictions"] = results_json;
    }
    // double new line to facilitate json parsing, since prediction may
    // contain new lines.
    output_json["metadata"] = metadata_json;
    json_q_.push(output_json.dump() + "\n\n");
    delete_output_item_(output_item);
  }
}

void iq_inference_impl::forecast(int noutput_items,
                                 gr_vector_int &ninput_items_required) {
  ninput_items_required[0] = 1;
}

void iq_inference_impl::process_items_(size_t power_in_count,
                                       uint64_t &power_read,
                                       const float *&power_in) {
  for (size_t i = 0; i < power_in_count; ++i, power_in += vlen_) {
    size_t j = (power_read + i) % sample_buffer_;
    volk_32f_index_max_16u(max_.get(), power_in, vlen_);
    float power_max = power_in[*max_];
    if (power_max < min_peak_points_) {
      continue;
    }
    if (n_inference_ > 0 && ++inference_count_ % n_inference_) {
      continue;
    }
    if (!last_rx_freq_) {
      continue;
    }
    output_item_type output_item;
    output_item.rx_time = last_rx_time_;
    output_item.rx_freq = last_rx_freq_;
    output_item.sample_count = vlen_;
    output_item.samples = new gr_complex[output_item.sample_count];
    output_item.power = new float[output_item.sample_count];
    memcpy(output_item.samples, (void *)&samples_lookback_[j * vlen_],
           vlen_ * sizeof(gr_complex));
    memcpy(output_item.power, (void *)power_in, vlen_ * sizeof(float));
    if (!inference_q_.push(output_item)) {
      delete_output_item_(output_item);
      d_logger->error("inference queue full");
    }
  }
}

int iq_inference_impl::general_work(int noutput_items,
                                    gr_vector_int &ninput_items,
                                    gr_vector_const_void_star &input_items,
                                    gr_vector_void_star &output_items) {
  size_t samples_in_count = ninput_items[0];
  size_t power_in_count = ninput_items[1];
  size_t in_first = nitems_read(1);
  const gr_complex *samples_in =
      static_cast<const gr_complex *>(input_items[0]);
  const float *power_in = static_cast<const float *>(input_items[1]);
  std::vector<tag_t> all_tags, rx_freq_tags;
  std::vector<double> rx_times;
  size_t leftover = 0;

  while (!json_q_.empty()) {
    std::string json;
    json_q_.pop(json);
    out_buf_.insert(out_buf_.end(), json.begin(), json.end());
  }

  if (!out_buf_.empty()) {
    auto out = static_cast<char *>(output_items[0]);
    leftover = std::min(out_buf_.size(), (size_t)noutput_items);
    auto from = out_buf_.begin();
    auto to = from + leftover;
    std::copy(from, to, out);
    out_buf_.erase(from, to);
  }

  get_tags_in_window(all_tags, 1, 0, power_in_count);
  get_tags(tag_, all_tags, rx_freq_tags, rx_times, power_in_count);

  for (size_t i = 0; i < samples_in_count; ++i, samples_in += vlen_) {
    size_t j = (nitems_read(0) + i) % sample_buffer_;
    memcpy((void *)&samples_lookback_[j * vlen_], samples_in,
           sizeof(gr_complex) * vlen_);
  }

  uint64_t power_read = nitems_read(1);
  if (rx_freq_tags.empty()) {
    process_items_(power_in_count, power_read, power_in);
  } else {
    for (size_t t = 0; t < rx_freq_tags.size(); ++t) {
      const auto &tag = rx_freq_tags[t];
      const double rx_time = rx_times[t];
      const auto rel = tag.offset - in_first;
      in_first += rel;

      // TODO: process leftover untagged items.
      if (rel > 0) {
        process_items_(rel, power_read, power_in);
      }

      const uint64_t rx_freq = (uint64_t)pmt::to_double(tag.value);
      d_logger->debug("new rx_freq tag: {}", rx_freq);
      last_rx_freq_ = rx_freq;
      last_rx_time_ = rx_time;
    }
  }

  consume(0, samples_in_count);
  consume(1, power_in_count);
  return leftover;
}

} /* namespace iqtlabs */
} /* namespace gr */
