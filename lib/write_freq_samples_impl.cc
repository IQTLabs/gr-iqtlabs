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

using namespace sigmf;

namespace gr {
namespace iqtlabs {

write_freq_samples::sptr write_freq_samples::make(
    const std::string &tag, COUNT_T itemsize, const std::string &datatype,
    COUNT_T vlen, const std::string &sdir, const std::string &prefix,
    COUNT_T write_step_samples, COUNT_T skip_tune_step_samples,
    COUNT_T samp_rate, COUNT_T rotate_secs, double gain, bool sigmf, bool use_zst) {
  return gnuradio::make_block_sptr<write_freq_samples_impl>(
      tag, itemsize, datatype, vlen, sdir, prefix, write_step_samples,
      skip_tune_step_samples, samp_rate, rotate_secs, gain, sigmf, use_zst);
}

write_freq_samples_impl::write_freq_samples_impl(
    const std::string &tag, COUNT_T itemsize, const std::string &datatype,
    COUNT_T vlen, const std::string &sdir, const std::string &prefix,
    COUNT_T write_step_samples, COUNT_T skip_tune_step_samples,
    COUNT_T samp_rate, COUNT_T rotate_secs, double gain, bool sigmf, bool use_zst)
    : gr::block("write_freq_samples",
                gr::io_signature::make(1 /* min inputs */, 1 /* max inputs */,
                                       vlen * itemsize),
                gr::io_signature::make(0, 0, 0)),
      tag_(pmt::intern(tag)), itemsize_(itemsize), datatype_(datatype),
      vlen_(vlen), sdir_(sdir), prefix_(prefix),
      write_step_samples_(write_step_samples),
      skip_tune_step_samples_(skip_tune_step_samples), samp_rate_(samp_rate),
      write_step_samples_count_(0), skip_tune_step_samples_count_(0),
      last_rx_freq_(0), rotate_secs_(rotate_secs), gain_(gain), sigmf_(sigmf), use_zst_(use_zst) {
  outbuf_p.reset(new boost::iostreams::filtering_ostream());
  message_port_register_in(pmt::mp("annotation"));
  set_msg_handler(pmt::mp("annotation"),
     [this](const pmt::pmt_t& msg) { handle_annotation_(msg); });
}

write_freq_samples_impl::~write_freq_samples_impl() {}

bool write_freq_samples_impl::stop() {
  close_();
  return true;
}

void write_freq_samples_impl::write_(const char *data, COUNT_T len) {
  if (!outbuf_p->empty()) {
    outbuf_p->write(data, len);
  }
}

void write_freq_samples_impl::open_sigmf_(const std::string &source_file, double timestamp,
                            const std::string &datatype, double sample_rate,
                            double frequency, double gain) {
  // sigmf_record = sigmf::SigMF<sigmf::Global<core::DescrT, antenna::DescrT>,
  //           sigmf::Capture<core::DescrT>,
  //           sigmf::Annotation<core::DescrT, antenna::DescrT, capture_details::DescrT, signal::DescrT> >();

  sigmf_record = sigmf::SigMF<
      sigmf::Global<sigmf::core::DescrT>,
      sigmf::Capture<sigmf::core::DescrT, sigmf::capture_details::DescrT>,
      sigmf::Annotation<sigmf::core::DescrT>>();
  sigmf_record.global.access<sigmf::core::GlobalT>().datatype = datatype;
  sigmf_record.global.access<sigmf::core::GlobalT>().sample_rate = sample_rate;
  auto capture =
      sigmf::Capture<sigmf::core::DescrT, sigmf::capture_details::DescrT>();
  capture.get<sigmf::core::DescrT>().sample_start = 0;
  capture.get<sigmf::core::DescrT>().global_index = 0;
  capture.get<sigmf::core::DescrT>().frequency = frequency;
  std::ostringstream ts_ss;
  time_t timestamp_t = static_cast<time_t>(timestamp);
  ts_ss << std::put_time(gmtime(&timestamp_t), "%FT%TZ");
  capture.get<sigmf::core::DescrT>().datetime = ts_ss.str();
  capture.get<sigmf::capture_details::DescrT>().source_file =
      basename(source_file.c_str());
  capture.get<sigmf::capture_details::DescrT>().gain = gain;
  sigmf_record.captures.emplace_back(capture);


}

std::string write_freq_samples_impl::sigmf_datetime()
{
    using namespace std::chrono;

    // get current time
    auto now = system_clock::now();

    // get number of milliseconds for the current second
    // (remainder after division into seconds)
    auto ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;

    // convert to std::time_t in order to convert to std::tm (broken time)
    auto timer = system_clock::to_time_t(now);

    // convert to broken time
    std::tm bt = *std::localtime(&timer);

    std::ostringstream oss;

    oss << std::put_time(&bt, "%FT%T"); // HH:MM:SS
    oss << '.' << std::setfill('0') << std::setw(7) << "Z" << ms.count();

    return oss.str();
}

void write_freq_samples_impl::start_new_sigmf_capture_(double frequency) {
  auto capture =
    sigmf::Capture<sigmf::core::DescrT, sigmf::capture_details::DescrT>();
  capture.get<sigmf::core::DescrT>().sample_start = samples_written_;
  capture.get<sigmf::core::DescrT>().frequency = frequency;
  std::ostringstream ts_ss;
  time_t timestamp_t = static_cast<time_t>(host_now_());

  // ts_ss << std::put_time(gmtime(&timestamp_t), "%FT%TZ");
  // capture.get<sigmf::core::DescrT>().datetime = ts_ss.str();
  capture.get<sigmf::core::DescrT>().datetime = sigmf_datetime();
  sigmf_record.captures.emplace_back(capture);
  write_sigmf_();
}

void write_freq_samples_impl::handle_annotation_(const pmt::pmt_t& msg)
 {
   std::cout << "***** MESSAGE DEBUG PRINT ********\n";
   pmt::print(msg);
   std::cout << "**********************************\n";
   std::string msg_str = pmt::symbol_to_string(msg);


  std::replace(msg_str.begin(), msg_str.end(), '\'', '\"');

double sample_clock = 0.0;
try {
      nlohmann::json inference_results = nlohmann::json::parse(msg_str);
      std::cout << "Inference results: " << inference_results.dump(4) << "\n";
      if (inference_results.contains("metadata")) {
        auto metadata = inference_results["metadata"];
        std::cout << "metadata: " << metadata.dump(4) << "\n";
        if (metadata.contains("sample_clock")) {
            std::string sample_clock_str = metadata["sample_clock"];
            sample_clock = std::stod(sample_clock_str);
            std::cout << "Sample Clock: " << sample_clock << "\n";
        } else {
            std::cout << "No sample clock found in metadata\n";
        }
      } else {
        std::cout << "No metadata found in message\n";
      }  
      if (inference_results.contains("predictions")) {
          auto predictions = inference_results["predictions"];
          for (auto &prediction_class : predictions.items()) {
            if (prediction_class.key() == "No signal") {
              std::cout << "No signal detected\n";
              continue;
            }
            for (auto &prediction : prediction_class.value()) {
              float confidence = prediction["confidence"];
              std::string model = prediction["model"];
              std::cout << "Prediction - class " << prediction_class.key() << "\t confidence " << confidence << "\n";
              add_sigmf_annotation_(sample_clock, 1024, -100, 100, prediction_class.key());
            }
          }
          write_sigmf_();
        } else {
          std::cout << "No predictions found in message\n";
        } 
  } catch (std::exception &ex) {
    std::string error = "invalid json: " + std::string(ex.what());
    std::cout << error << "\n";
      }
 }

void write_freq_samples_impl::add_sigmf_annotation_(COUNT_T sample_start, COUNT_T sample_count, double freq_lower_edge, double freq_upper_edge, std::string label) {
    auto anno = sigmf::Annotation<core::DescrT>();
    std::cout << "Adding annotation: " << label << "\n";
    anno.access<core::AnnotationT>().sample_start = sample_start;
    anno.access<core::AnnotationT>().sample_count = sample_count;
    anno.access<core::AnnotationT>().description = label;
    anno.access<core::AnnotationT>().label = label;
    anno.access<core::AnnotationT>().generator = "GamutRF";
    sigmf_record.annotations.emplace_back(anno);
    std::cout << "Total annotations: " << sigmf_record.annotations.size() << "\n";

} 

void write_freq_samples_impl::write_sigmf_() {
  if (!sigmf_) {
    return;
  }
  std::string dotfilename = get_dotfile_(sigmffile_);
  std::ofstream jsonfile(dotfilename);
  jsonfile << sigmf_record.to_json();
  jsonfile.close();
  rename(dotfilename.c_str(), sigmffile_.c_str());                        
}

void write_freq_samples_impl::open_(COUNT_T zlevel) {
  close_();
  double now = host_now_();
  samples_written_ = 0;
  std::string samples_path = secs_dir(sdir_, rotate_secs_) + prefix_ + "_" +
                             std::to_string(now) + "_" +
                             std::to_string(FREQ_T(last_rx_freq_)) + "Hz_" +
                             std::to_string(COUNT_T(samp_rate_)) + "sps.raw";
  if (use_zst_) {                           
    datafile_ = samples_path + ".zst";
    outbuf_p->push(
    boost::iostreams::zstd_compressor(boost::iostreams::zstd_params(zlevel)));
  } else if (sigmf_) {
    datafile_ = samples_path + ".sigmf-data";
  } else {
    datafile_ = samples_path;
  }

  if (sigmf_) {
    open_sigmf_( datafile_, open_time_, datatype_, samp_rate_,
                  last_rx_freq_, gain_);
  }

  sigmffile_ = samples_path + ".sigmf-meta";
  open_time_ = now;

  outbuf_p->push(boost::iostreams::file_sink(datafile_));
}

void write_freq_samples_impl::close_() {
  if (!outbuf_p->empty()) {
    outbuf_p->reset();
    if (sigmf_) {
      write_sigmf_();
    }
    std::string dotfile = get_dotfile_(datafile_);
    rename(dotfile.c_str(), datafile_.c_str());
  }
}

void write_freq_samples_impl::write_samples_(COUNT_T c, const char *&in) {
  for (COUNT_T i = 0; i < c; ++i) {
    if (skip_tune_step_samples_count_) {
      in += itemsize_ * vlen_;
      --skip_tune_step_samples_count_;
      continue;
    }

    if (sigmf_) {
      write_(in, itemsize_ * vlen_);
    } else {
      if (write_step_samples_count_) {
        write_(in, itemsize_ * vlen_);
        if (!--write_step_samples_count_) {
          close_();
        }
      }
    }
    samples_written_ += vlen_;
    in += vlen_;
  }
}

int write_freq_samples_impl::general_work(
    int noutput_items, gr_vector_int &ninput_items,
    gr_vector_const_void_star &input_items, gr_vector_void_star &output_items) {
  auto in = static_cast<const char *>(input_items[0]);
  const COUNT_T in_count = ninput_items[0];
  COUNT_T in_first = nitems_read(0);

  std::vector<tag_t> tags;
  get_tags_in_window(tags, 0, 0, in_count, tag_);

  if (tags.empty()) {
    write_samples_(in_count, in);
  } else {
    for (COUNT_T t = 0; t < tags.size(); ++t) {
      const auto &tag = tags[t];
      const auto rel = tag.offset - in_first;
      in_first += rel;

      if (rel > 0) {
        write_samples_(rel, in);
      }

      const FREQ_T rx_freq = GET_FREQ(tag);
      d_logger->debug("new rx_freq tag: {}, last {}", rx_freq, last_rx_freq_);
      last_rx_freq_ = rx_freq;
      skip_tune_step_samples_count_ = skip_tune_step_samples_;
      write_step_samples_count_ = write_step_samples_;
      if (sigmf_) {
        if (outbuf_p->empty()) {  // Check if the files have been opened by looking at the output filter pipeline
          open_(1); 
        } else {
          start_new_sigmf_capture_(rx_freq); // we switched freq so start a new SigMF Capture
        }
      } else {
        open_(1);
      }
    }
  }

  consume_each(in_count);
  return 0;
}

} /* namespace iqtlabs */
} /* namespace gr */
