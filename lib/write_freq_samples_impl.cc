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

#include <fstream>
#include <ios>
#include <iostream>
#include <sstream>

#include "write_freq_samples_impl.h"
#include <gnuradio/io_signature.h>

namespace gr {
namespace iqtlabs {

write_freq_samples::sptr write_freq_samples::make(
    const std::string &tag, COUNT_T itemsize, const std::string &datatype,
    COUNT_T vlen, const std::string &sdir, const std::string &prefix,
    COUNT_T write_step_samples, COUNT_T skip_tune_step_samples,
    COUNT_T samp_rate, COUNT_T rotate_secs, double gain, bool sigmf, bool zstd,
    bool rotate) {
  return gnuradio::make_block_sptr<write_freq_samples_impl>(
      tag, itemsize, datatype, vlen, sdir, prefix, write_step_samples,
      skip_tune_step_samples, samp_rate, rotate_secs, gain, sigmf, zstd,
      rotate);
}

write_freq_samples_impl::write_freq_samples_impl(
    const std::string &tag, COUNT_T itemsize, const std::string &datatype,
    COUNT_T vlen, const std::string &sdir, const std::string &prefix,
    COUNT_T write_step_samples, COUNT_T skip_tune_step_samples,
    COUNT_T samp_rate, COUNT_T rotate_secs, double gain, bool sigmf, bool zstd,
    bool rotate)
    : gr::block("write_freq_samples",
                gr::io_signature::make(1 /* min inputs */, 1 /* max inputs */,
                                       vlen * itemsize),
                gr::io_signature::make(0, 0, 0)),
      tag_(pmt::intern(tag)), itemsize_(itemsize), datatype_(datatype),
      vlen_(vlen), sdir_(sdir), prefix_(prefix),
      write_step_samples_(write_step_samples),
      skip_tune_step_samples_(skip_tune_step_samples), samp_rate_(samp_rate),
      write_step_samples_count_(0), skip_tune_step_samples_count_(0),
      last_rx_freq_(0), rotate_secs_(rotate_secs), gain_(gain), sigmf_(sigmf),
      zstd_(zstd), rotate_(rotate) {
  outbuf_p.reset(new boost::iostreams::filtering_ostream());
  open_(1);
  message_port_register_in(INFERENCE_KEY);
  set_msg_handler(INFERENCE_KEY,
                  [this](const pmt::pmt_t &msg) { recv_inference_(msg); });
}

write_freq_samples_impl::~write_freq_samples_impl() {}

void write_freq_samples_impl::recv_inference_(const pmt::pmt_t msg) {
  // TODO: non-rotate not supported.
  // Among other things, need to delineate inference results for current
  // window and adjust sample clock.
  if (rotate_) {
    return;
  }
  const std::string msg_str = pmt_to_string(msg);
  d_logger->info("inference results: {}", msg_str);
  try {
    nlohmann::json inference_results = nlohmann::json::parse(msg_str);
    const auto metadata = inference_results["metadata"];
    const TIME_T sample_clock =
        std::stod((std::string)metadata["sample_clock"]);
    const int sample_count = std::stoi((std::string)metadata["sample_count"]);
    const FREQ_T sample_rate = std::stod((std::string)metadata["sample_rate"]);
    if (inference_results.contains("predictions")) {
      auto predictions = inference_results["predictions"];
      for (auto &prediction_class : predictions.items()) {
        // TODO: make configurable.
        if (prediction_class.key() == INFERENCE_NO_SIGNAL) {
          continue;
        }
        for (auto &prediction : prediction_class.value()) {
          boost::lock_guard<boost::mutex> guard(queue_lock_);
          // TODO: add confidence and model to description.
          inference_item_type inference_item;
          inference_item.sample_start = sample_clock;
          inference_item.sample_count = sample_count;
          inference_item.freq_lower_edge = last_rx_freq_ - (sample_rate / 2);
          inference_item.freq_upper_edge = last_rx_freq_ + (sample_rate / 2);
          inference_item.description = prediction_class.key();
          inference_item.label = inference_item.description;
          inference_q_.push(inference_item);
        }
      }
    }
  } catch (std::exception &ex) {
    std::string error = "invalid json: " + std::string(ex.what());
  }
}

bool write_freq_samples_impl::stop() {
  close_();
  return true;
}

void write_freq_samples_impl::write_(const char *data, COUNT_T len) {
  if (!outbuf_p->empty()) {
    outbuf_p->write(data, len);
  }
}

void write_freq_samples_impl::open_(COUNT_T zlevel) {
  close_();
  skip_tune_step_samples_count_ = skip_tune_step_samples_;
  write_step_samples_count_ = write_step_samples_;
  double now = host_now_();
  outfile_ = secs_dir(sdir_, rotate_secs_) + "." + prefix_ + "_" +
             std::to_string(now) + "_" + std::to_string(COUNT_T(samp_rate_)) +
             "sps.raw";
  open_time_ = now;
  if (zstd_) {
    outbuf_p->push(boost::iostreams::zstd_compressor(
        boost::iostreams::zstd_params(zlevel)));
  }
  outbuf_p->push(boost::iostreams::file_sink(outfile_));
}

void write_freq_samples_impl::close_() {
  if (!outbuf_p->empty()) {
    outbuf_p->reset();
    std::string final_samples_path_base =
        secs_dir(sdir_, rotate_secs_) + prefix_ + "_" +
        std::to_string(open_time_) + "_" +
        std::to_string(FREQ_T(last_rx_freq_)) + "Hz_" +
        std::to_string(COUNT_T(samp_rate_)) + "sps.raw";
    std::string final_samples_path = final_samples_path_base;
    if (zstd_) {
      final_samples_path += ".zst";
    }
    if (sigmf_) {
      sigmf_record_t record =
          create_sigmf(final_samples_path, open_time_, datatype_, samp_rate_,
                       last_rx_freq_, gain_);
      // TODO: handle annotations for the rotate case.
      boost::lock_guard<boost::mutex> guard(queue_lock_);
      COUNT_T annotations = 0;
      while (!inference_q_.empty()) {
        inference_item_type inference_item = inference_q_.front();
        inference_q_.pop();
        auto anno = sigmf::Annotation<sigmf::core::DescrT>();
        anno.access<sigmf::core::AnnotationT>().sample_start =
            inference_item.sample_start;
        anno.access<sigmf::core::AnnotationT>().sample_count =
            inference_item.sample_count;
        anno.access<sigmf::core::AnnotationT>().freq_lower_edge =
            inference_item.freq_lower_edge;
        anno.access<sigmf::core::AnnotationT>().freq_upper_edge =
            inference_item.freq_upper_edge;
        anno.access<sigmf::core::AnnotationT>().description =
            inference_item.description;
        anno.access<sigmf::core::AnnotationT>().label = inference_item.label;
        anno.access<sigmf::core::AnnotationT>().generator = "GamutRF";
        record.annotations.emplace_back(anno);
        ++annotations;
      }
      d_logger->info("wrote {} annotations", annotations);
      std::string sigmf_filename = final_samples_path_base + ".sigmf-meta";
      std::string dotfilename = get_dotfile_(sigmf_filename);
      std::ofstream jsonfile(dotfilename);
      nlohmann::json meta_json(record.to_json());
      jsonfile << std::setw(4) << meta_json;
      jsonfile.close();
      rename(dotfilename.c_str(), sigmf_filename.c_str());
    }
    rename(outfile_.c_str(), final_samples_path.c_str());
  }
}

void write_freq_samples_impl::write_samples_(COUNT_T c, const char *&in,
                                             COUNT_T &consumed) {
  for (COUNT_T i = 0; i < c; ++i, in += itemsize_ * vlen_, ++consumed) {
    if (skip_tune_step_samples_count_) {
      --skip_tune_step_samples_count_;
      continue;
    }
    if (write_step_samples_count_) {
      write_(in, itemsize_ * vlen_);
      if (!--write_step_samples_count_) {
        close_();
      }
    }
  }
}

int write_freq_samples_impl::general_work(
    int noutput_items, gr_vector_int &ninput_items,
    gr_vector_const_void_star &input_items, gr_vector_void_star &output_items) {
  auto in = static_cast<const char *>(input_items[0]);
  const COUNT_T in_count = ninput_items[0];
  COUNT_T in_first = nitems_read(0);
  COUNT_T consumed = 0;

  std::vector<tag_t> tags;
  get_tags_in_window(tags, 0, 0, in_count, tag_);

  if (tags.empty()) {
    write_samples_(in_count, in, consumed);
  } else {
    for (COUNT_T t = 0; t < tags.size(); ++t) {
      const auto &tag = tags[t];
      const auto rel = tag.offset - in_first;
      in_first += rel;

      if (rel > 0) {
        write_samples_(rel, in, consumed);
      }

      const FREQ_T rx_freq = GET_FREQ(tag);
      d_logger->debug("new rx_freq tag: {}, last {}", rx_freq, last_rx_freq_);
      if (rotate_) {
        open_(1);
      }
      last_rx_freq_ = rx_freq;
    }
    if (consumed < in_count) {
      write_samples_(in_count - consumed, in, consumed);
    }
  }

  consume_each(in_count);
  return 0;
}

} /* namespace iqtlabs */
} /* namespace gr */
