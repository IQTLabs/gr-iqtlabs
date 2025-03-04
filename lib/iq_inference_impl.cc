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

iq_inference::sptr iq_inference::make(
    const std::string &tag, COUNT_T vlen, COUNT_T n_vlen, COUNT_T sample_buffer,
    double min_peak_points, const std::string &model_server,
    const std::string &model_names, double confidence, COUNT_T n_inference,
    int samp_rate, bool power_inference, bool background, COUNT_T batch) {
  return gnuradio::make_block_sptr<iq_inference_impl>(
      tag, vlen, n_vlen, sample_buffer, min_peak_points, model_server,
      model_names, confidence, n_inference, samp_rate, power_inference,
      background, batch);
}

/*
 * The private constructor
 */
iq_inference_impl::iq_inference_impl(
    const std::string &tag, COUNT_T vlen, COUNT_T n_vlen, COUNT_T sample_buffer,
    double min_peak_points, const std::string &model_server,
    const std::string &model_names, double confidence, COUNT_T n_inference,
    int samp_rate, bool power_inference, bool background, COUNT_T batch)
    : gr::block("iq_inference",
                gr::io_signature::makev(
                    2 /* min inputs */, 2 /* min inputs */,
                    std::vector<int>{(int)(vlen * sizeof(gr_complex)),
                                     (int)(vlen * sizeof(float))}),
                gr::io_signature::make(0, 0, 0)),
      tag_(pmt::intern(tag)), vlen_(vlen), n_vlen_(n_vlen),
      batch_(vlen_ * n_vlen_), sample_buffer_(sample_buffer), sample_clock_(0),
      last_rx_freq_sample_clock_(0), n_inference_(n_inference),
      inference_count_(n_inference), samples_since_tag_(0), predictions_(0),
      batch_inference_(batch), serial_(0), samp_rate_(samp_rate),
      last_full_time_(0), min_peak_points_(min_peak_points),
      confidence_(confidence), power_inference_(power_inference),
      background_(background), running_(true), last_rx_time_(0),
      last_rx_freq_(0) {
  samples_lookback_.reset(new gr_complex[batch_ * sample_buffer]);
  unsigned int alignment = volk_get_alignment();
  samples_total_.reset((float *)volk_malloc(sizeof(float), alignment));
  power_total_.reset((float *)volk_malloc(sizeof(float), alignment));
  parse_models(model_server, model_names);
  io_service_ = boost::make_shared<boost::asio::io_service>();
  work_ = boost::make_shared<boost::asio::io_service::work>(*io_service_);
  for (COUNT_T i = 0; i < std::min(batch_inference_, MAX_INFERENCE); ++i) {
    threadpool_.create_thread(
        boost::bind(&boost::asio::io_service::run, io_service_));
    io_service_->post(
        boost::bind(&iq_inference_impl::background_run_inference_, this));
  }
  message_port_register_out(INFERENCE_KEY);
  set_output_multiple(n_vlen_);
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
  boost::scoped_ptr<torchserve_client> client(
      new torchserve_client(host_, port_));
  while (running_) {
    run_inference_(client.get());
    sleep(0.001);
  }
}

bool iq_inference_impl::stop() {
  d_logger->info("stopping");
  while (!inference_q_.empty()) {
    sleep(0.001);
  }
  pub_json_();
  running_ = false;
  io_service_->stop();
  threadpool_.join_all();
  d_logger->info("iq_inference sent {} predictions", predictions_);
  return true;
}

void iq_inference_impl::run_inference_(torchserve_client *client) {
  boost::beast::error_code ec;
  output_item_type output_item;
  while (inference_q_.pop(output_item)) {
    nlohmann::json metadata_json;
    metadata_json["ts"] = host_now_str_(output_item.rx_time);
    metadata_json["sample_clock"] = std::to_string(output_item.sample_clock);
    metadata_json["sample_count"] = std::to_string(output_item.sample_count);
    metadata_json["rx_freq"] = std::to_string(output_item.rx_freq);
    metadata_json["sample_rate"] = std::to_string(samp_rate_);
    metadata_json["rx_freq_sample_clock"] =
        std::to_string(output_item.rx_freq_sample_clock);
    metadata_json["serial"] = std::to_string(output_item.serial);
    nlohmann::json output_json, results_json;
    COUNT_T signal_predictions = 0;
    std::string error;

    for (const std::string &model_name : model_names_) {
      const std::string_view body(
          reinterpret_cast<char const *>(output_item.samples),
          output_item.sample_count * sizeof(gr_complex));
      const std::string_view power_body(
          reinterpret_cast<char const *>(output_item.power),
          output_item.sample_count * sizeof(float));
      if (power_inference_) {
        const std::string samples_power_body =
            std::string(body) + std::string(power_body);
        client->make_inference_request(model_name, samples_power_body,
                                       "application/octet-stream");
      } else {
        client->make_inference_request(model_name, body,
                                       "application/octet-stream");
      }
      nlohmann::json original_results_json;
      // TODO: troubleshoot test flask server hang after one request.
      if (client->send_inference_request(original_results_json, error)) {
        try {
          for (auto &prediction_class : original_results_json.items()) {
            if (!results_json.contains(prediction_class.key())) {
              results_json[prediction_class.key()] = nlohmann::json::array();
            }
            for (auto &prediction_ref : prediction_class.value().items()) {
              auto prediction = prediction_ref.value();
              prediction["model"] = model_name;
              // TODO: estimate actual frequency.
              prediction["freq"] = std::to_string(output_item.rx_freq);
              // TODO: gate on minimum confidence.
              // float conf = prediction["conf"];
              results_json[prediction_class.key()].emplace_back(prediction);
              if (prediction_class.key() != INFERENCE_NO_SIGNAL) {
                ++signal_predictions;
              }
            }
          }
        } catch (std::exception &ex) {
          error = "invalid json (missing/invalid fields): " +
                  std::string(ex.what());
        }
      }

      if (error.size()) {
        d_logger->error(error);
        output_json["error"] = error;
      }
    }

    output_json["predictions"] = results_json;
    output_json["metadata"] = metadata_json;
    std::string *output_json_str = new std::string(output_json.dump());
    json_q_.push(output_json_str);
    delete_output_item_(output_item);
  }
}

void iq_inference_impl::process_items_(COUNT_T power_in_count,
                                       COUNT_T &consumed, COUNT_T in_first,
                                       const float *&power_in) {
  for (COUNT_T i = 0; i < power_in_count; i += n_vlen_, consumed += n_vlen_,
               power_in += batch_, samples_since_tag_ += batch_,
               sample_clock_ += batch_) {
    COUNT_T j = (in_first + i) % sample_buffer_;
    // Gate on average power.
    volk_32f_accumulator_s32f(power_total_.get(), power_in, batch_);
    if (*power_total_ / batch_ < min_peak_points_) {
      continue;
    }
    // We might get all zero samples if squelched externally - though
    // we will receive non zero power values.
    const float *in_floats = (const float *)&samples_lookback_[j * batch_];
    volk_32f_accumulator_s32f(samples_total_.get(), in_floats, batch_ * 2);
    if (*samples_total_ == 0) {
      continue;
    }
    if (n_inference_ > 0 && --inference_count_) {
      continue;
    }
    if (!last_rx_freq_) {
      continue;
    }
    inference_count_ = n_inference_;
    if (!model_names_.size()) {
      continue;
    }
    // TODO: we select one slice in time (samples and power),
    // where at least one sample exceeded the minimum. We could
    // potentially select more samples either side for example.
    output_item_type output_item;
    output_item.rx_time =
        last_rx_time_ + (samples_since_tag_ / TIME_T(samp_rate_));
    output_item.sample_clock = sample_clock_;
    output_item.rx_freq = last_rx_freq_;
    output_item.rx_freq_sample_clock = last_rx_freq_sample_clock_;
    output_item.sample_count = batch_;
    output_item.serial = ++serial_;
    output_item.samples = new gr_complex[output_item.sample_count];
    output_item.power = new float[output_item.sample_count];
    memcpy(output_item.samples, (void *)&samples_lookback_[j * batch_],
           batch_ * sizeof(gr_complex));
    memcpy(output_item.power, (void *)power_in, batch_ * sizeof(float));
    if (background_) {
      if (!inference_q_.push(output_item)) {
        delete_output_item_(output_item);
        --serial_;
        if (host_now_() - last_full_time_ > 5) {
          d_logger->error(
              "inference queue full (increase inference dB threshold "
              "to admit fewer signals?)");
          last_full_time_ = host_now_();
        }
      }
    } else {
      d_logger->info("inference attempt at sample_clock {}",
                     output_item.sample_clock);
      while (!inference_q_.push(output_item)) {
        sleep(0.001);
      }
    }
  }
}

void iq_inference_impl::process_tags_(COUNT_T in_first,
                                      COUNT_T samples_in_first,
                                      COUNT_T in_count,
                                      const gr_complex *samples_in,
                                      const float *power_in) {
  for (COUNT_T i = 0; i < in_count; i += n_vlen_, samples_in += batch_) {
    COUNT_T j = (samples_in_first + i) % sample_buffer_;
    memcpy((void *)&samples_lookback_[j * batch_], samples_in,
           sizeof(gr_complex) * batch_);
  }

  PROCESS_TAGS(
      {
        // TODO: in theory we might have a vector with more than one frequency's
        // samples, as the SDR probably isn't vector aligned. In practice this
        // should not happen in the most common Ettus low power workaround
        // state, because tags are delayed until after re-tuning has been
        // verified.
        last_rx_freq_sample_clock_ = sample_clock_;
        samples_since_tag_ = 0;
      },
      in_first, power_in)
}

void iq_inference_impl::pub_json_() {
  std::string *output_json_str;
  while (json_q_.pop(output_json_str)) {
    ++predictions_;
    message_port_pub(INFERENCE_KEY, string_to_pmt(*output_json_str));
    delete output_json_str;
  }
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
int iq_inference_impl::general_work(int noutput_items,
                                    gr_vector_int &ninput_items,
                                    gr_vector_const_void_star &input_items,
                                    gr_vector_void_star &output_items) {
  if (!background_ && !inference_q_.empty()) {
    return 0;
  }

  const gr_complex *samples_in =
      static_cast<const gr_complex *>(input_items[0]);
  const float *power_in = static_cast<const float *>(input_items[1]);
  COUNT_T samples_in_first = nitems_read(0);
  COUNT_T in_first = nitems_read(1);
  // Ensure we stay in power/samples sync.
  COUNT_T in_count =
      int(std::min(ninput_items[0], ninput_items[1]) / n_vlen_) * n_vlen_;

  process_tags_(in_first, samples_in_first, in_count, samples_in, power_in);
  consume_each(in_count);
  pub_json_();
  return 0;
}
#pragma GCC diagnostic pop
} /* namespace iqtlabs */
} /* namespace gr */
