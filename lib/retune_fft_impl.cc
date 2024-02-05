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

#include "retune_fft_impl.h"
#include <boost/iostreams/copy.hpp>
#include <cstdint>
#include <fstream>
#include <gnuradio/io_signature.h>
#include <ios>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <volk/volk.h>

namespace gr {
namespace iqtlabs {
const pmt::pmt_t JSON_KEY = pmt::mp("json");
const boost::iostreams::zstd_params zstd_params =
    boost::iostreams::zstd_params(boost::iostreams::zstd::default_compression);

retune_fft::sptr retune_fft::make(
    const std::string &tag, size_t nfft, uint64_t samp_rate,
    uint64_t freq_start, uint64_t freq_end, uint64_t tune_step_hz,
    uint64_t tune_step_fft, uint64_t skip_tune_step_fft, double fft_min,
    double fft_max, const std::string &sdir, uint64_t write_step_fft,
    double bucket_range, const std::string &tuning_ranges,
    const std::string &description, uint64_t rotate_secs, bool pre_fft,
    bool tag_now, bool low_power_hold_down, size_t peak_fft_range) {
  return gnuradio::make_block_sptr<retune_fft_impl>(
      tag, nfft, samp_rate, freq_start, freq_end, tune_step_hz, tune_step_fft,
      skip_tune_step_fft, fft_min, fft_max, sdir, write_step_fft, bucket_range,
      tuning_ranges, description, rotate_secs, pre_fft, tag_now,
      low_power_hold_down, peak_fft_range);
}

retune_fft_impl::retune_fft_impl(
    const std::string &tag, size_t nfft, uint64_t samp_rate,
    uint64_t freq_start, uint64_t freq_end, uint64_t tune_step_hz,
    uint64_t tune_step_fft, uint64_t skip_tune_step_fft, double fft_min,
    double fft_max, const std::string &sdir, uint64_t write_step_fft,
    double bucket_range, const std::string &tuning_ranges,
    const std::string &description, uint64_t rotate_secs, bool pre_fft,
    bool tag_now, bool low_power_hold_down, size_t peak_fft_range)
    : gr::block("retune_fft",
                gr::io_signature::make(1 /* min inputs */, 1 /* max inputs */,
                                       nfft * sizeof(input_type)),
                gr::io_signature::makev(
                    2 /* min outputs */, 2 /* max outputs */,
                    std::vector<int>{(int)sizeof(output_type),
                                     (int)(nfft * sizeof(input_type))})),
      retuner_impl(freq_start, freq_end, tune_step_hz, tune_step_fft,
                   skip_tune_step_fft, tuning_ranges),
      tag_(pmt::intern(tag)), nfft_(nfft), samp_rate_(samp_rate),
      fft_min_(fft_min), fft_max_(fft_max), sample_count_(0), sdir_(sdir),
      write_step_fft_(write_step_fft), write_step_fft_count_(write_step_fft),
      bucket_range_(bucket_range), description_(description),
      rotate_secs_(rotate_secs), pre_fft_(pre_fft), tag_now_(tag_now),
      low_power_hold_down_(low_power_hold_down),
      peak_fft_range_(peak_fft_range), in_hold_down_(false) {
  bucket_offset_ = round(float((nfft_ - round(bucket_range_ * nfft_)) / 2));
  unsigned int alignment = volk_get_alignment();
  sample_.reset((float *)volk_malloc(sizeof(float) * nfft_, alignment));
  mean_.reset((float *)volk_malloc(sizeof(float) * nfft_, alignment));
  peak_.reset((float *)volk_malloc(sizeof(float) * nfft_, alignment));
  in_max_pos_.reset((uint16_t *)volk_malloc(sizeof(uint16_t), alignment));
  outbuf_p.reset(new boost::iostreams::filtering_ostream());
  message_port_register_out(TUNE_KEY);
  message_port_register_out(JSON_KEY);
  message_port_register_in(CMD_KEY);
  set_msg_handler(CMD_KEY,
                  [this](const pmt::pmt_t &msg) { next_retune_(host_now_()); });
  set_tag_propagation_policy(TPP_DONT);
  reset_items_();
}

void retune_fft_impl::reset_items_() {
  for (size_t i = 0; i < nfft_; ++i) {
    sample_[i] = 0;
    peak_[i] = fft_min_;
  }
  sample_count_ = 0;
  fft_count_ = 0;
}

void retune_fft_impl::calc_peaks_() {
  if (sample_count_) {
    volk_32f_s32f_multiply_32f(mean_.get(), (const float *)sample_.get(),
                               1 / float(sample_count_), nfft_);
    for (size_t k = 0; k < nfft_; ++k) {
      float mean = std::min(std::max(mean_[k], fft_min_), fft_max_);
      peak_[k] = std::max(mean, peak_[k]);
      sample_[k] = 0;
    }

    sample_count_ = 0;
  }
}

retune_fft_impl::~retune_fft_impl() { close_(); }

void retune_fft_impl::write_(const char *data, size_t len) {
  if (!outbuf_p->empty()) {
    outbuf_p->write(data, len);
  }
}

void retune_fft_impl::open_(const std::string &file) {
  close_();
  file_ = file;
  outbuf_p->push(boost::iostreams::zstd_compressor(zstd_params));
  outbuf_p->push(boost::iostreams::file_sink(file_));
}

void retune_fft_impl::close_() {
  if (!outbuf_p->empty()) {
    outbuf_p->reset();
    if (boost::filesystem::exists(file_)) {
      std::string dotfile = get_dotfile_(file_);
      rename(dotfile.c_str(), file_.c_str());
    }
  }
}

void retune_fft_impl::send_retune_(uint64_t tune_freq) {
  d_logger->debug("retuning to {}", tune_freq);
  message_port_pub(TUNE_KEY, tune_rx_msg(tune_freq, tag_now_));
}

void retune_fft_impl::retune_now_() {
  const double host_now = host_now_();
  send_retune_(tune_freq_);
  next_retune_(host_now);
  if (low_power_hold_down_ && !stare_mode_) {
    in_hold_down_ = true;
  }
}

void retune_fft_impl::write_items_(const input_type *in) {
  if (write_step_fft_count_) {
    write_((const char *)in, sizeof(input_type) * nfft_);
    --write_step_fft_count_;
  }
}

void retune_fft_impl::sum_items_(const input_type *in) {
  volk_32f_x2_add_32f(sample_.get(), (const float *)sample_.get(), in, nfft_);
  ++sample_count_;
  if (peak_fft_range_ && sample_count_ == peak_fft_range_) {
    calc_peaks_();
  }
}

void retune_fft_impl::add_output_tags_(double rx_time, double rx_freq,
                                       size_t rel) {
  std::stringstream str;
  str << name() << unique_id();
  pmt::pmt_t _id = pmt::string_to_symbol(str.str());
  this->add_item_tag(1, nitems_written(1) + rel, RX_TIME_KEY,
                     make_rx_time_key_(rx_time), _id);
  this->add_item_tag(1, nitems_written(1) + rel, RX_FREQ_KEY,
                     pmt::from_double(rx_freq), _id);
}

void retune_fft_impl::process_items_(size_t c, const input_type *&in,
                                     const input_type *&fft_output,
                                     size_t &produced) {
  for (size_t i = 0; i < c; ++i, in += nfft_) {
    if (skip_fft_count_) {
      --skip_fft_count_;
      continue;
    }
    // Discard windows where max power, is less than requested minimum.
    // Ettus radios periodically output low power after retuning. This
    // avoids having to use a static skip_fft_count setting.
    volk_32f_index_max_16u(in_max_pos_.get(), in, nfft_);
    float in_max = in[*in_max_pos_];
    if (in_max < fft_min_) {
      if (in_hold_down_) {
        in_hold_down_ = false;
        add_output_tags_(last_rx_time_, last_rx_freq_, produced);
      }
      continue;
    }
    if (in_hold_down_ && total_tune_count_ > 1) {
      continue;
    }
    std::memcpy((void *)fft_output, (const void *)in,
                nfft_ * sizeof(input_type));
    fft_output += nfft_;
    write_items_(in);
    sum_items_(in);
    ++fft_count_;
    ++produced;
    if (need_retune_(1)) {
      if (!pre_fft_) {
        retune_now_();
      }
    }
  }
}

void retune_fft_impl::forecast(int noutput_items,
                               gr_vector_int &ninput_items_required) {
  ninput_items_required[0] = 1;
  ninput_items_required[1] = noutput_items * nfft_;
}

void retune_fft_impl::output_buckets_(
    const std::string &name,
    const std::list<std::pair<double, double>> &buckets,
    std::stringstream &ss) {
  ss << "\"" << name << "\": {";
  for (std::list<std::pair<double, double>>::const_iterator it =
           buckets.begin();
       it != buckets.end(); ++it) {
    if (it != buckets.begin()) {
      ss << ", ";
    }
    const std::pair<double, double> s = *it;
    ss << "\"" << uint64_t(s.first) << "\": " << s.second;
  }
  ss << "}";
}

void retune_fft_impl::reopen_(double host_now, uint64_t rx_freq) {
  if (sdir_.length()) {
    std::string bucket_path =
        secs_dir(sdir_, rotate_secs_) + "fft_" + host_now_str_(host_now) + "_" +
        std::to_string(uint64_t(nfft_)) + "points_" +
        std::to_string(uint64_t(rx_freq)) + "Hz_" +
        std::to_string(uint64_t(samp_rate_)) + "sps.raw.zst";
    open_(bucket_path);
  }
}

void retune_fft_impl::write_buckets_(double host_now, uint64_t rx_freq) {
  std::list<std::pair<double, double>> buckets;
  const double bucket_size = samp_rate_ / nfft_;
  const double bucket_freq_start = last_rx_freq_ - (samp_rate_ / 2);
  const tuning_range_t &last_range = tuning_ranges_[last_tuning_range_];
  for (size_t i = bucket_offset_; i < (nfft_ - bucket_offset_); ++i) {
    double bucket_freq = bucket_freq_start + (i * bucket_size);
    if (bucket_freq < last_range.freq_start ||
        bucket_freq > last_range.freq_end) {
      continue;
    }
    buckets.push_back(std::pair<double, double>(bucket_freq, peak_[i]));
  }
  if (buckets.size() == 0) {
    return;
  }
  std::stringstream ss("", std::ios_base::app | std::ios_base::out);
  ss << "{"
     << "\"ts\": " << host_now_str_(host_now)
     << ", \"sweep_start\": " << host_now_str_(last_sweep_start_)
     << ", \"total_tune_count\": " << total_tune_count_ << ", \"config\": {"
     << "\"description\": \"" << description_ << "\""
     << ", \"tuning_range\": " << last_tuning_range_
     << ", \"tuning_range_freq_start\": " << last_range.freq_start
     << ", \"tuning_range_freq_end\": " << last_range.freq_end
     << ", \"freq_start\": " << freq_start_ << ", \"freq_end\": " << freq_end_
     << ", \"sample_rate\": " << samp_rate_ << ", \"nfft\": " << nfft_
     << ", \"tune_step_fft\": " << tune_step_fft_
     << ", \"tune_step_hz\": " << tune_step_hz_ << "}, ";
  output_buckets_("buckets", buckets, ss);
  ss << "}" << std::endl;
  const std::string s = ss.str();
  out_buf_.insert(out_buf_.end(), s.begin(), s.end());
  // TODO: migrate to PMT if/when PMT supports compressed payloads.
  // TODO: compressing multiple messages together if latency not a concern.
  std::stringstream uncompressed_ss(s);
  std::stringstream compressed_ss;
  boost::iostreams::filtering_streambuf<boost::iostreams::input> zstd_out;
  zstd_out.push(boost::iostreams::zstd_compressor(zstd_params));
  zstd_out.push(uncompressed_ss);
  uncompressed_ss.flush();
  boost::iostreams::copy(zstd_out, compressed_ss);
  const std::string compressed_s = compressed_ss.str();
  auto pdu =
      pmt::cons(pmt::make_dict(),
                pmt::init_u8vector(compressed_s.length(),
                                   (const uint8_t *)compressed_s.c_str()));
  message_port_pub(JSON_KEY, pdu);
}

void retune_fft_impl::process_buckets_(uint64_t rx_freq, double rx_time) {
  if (last_rx_freq_ && fft_count_) {
    reopen_(rx_time, rx_freq);
    if (!peak_fft_range_) {
      calc_peaks_();
    }
    write_buckets_(rx_time, rx_freq);
  }
  reset_items_();
  skip_fft_count_ = skip_tune_step_fft_;
  write_step_fft_count_ = write_step_fft_;
  last_rx_freq_ = rx_freq;
  last_rx_time_ = rx_time;
}

void retune_fft_impl::process_tags_(const input_type *in, size_t in_count,
                                    size_t in_first,
                                    const input_type *fft_output) {
  std::vector<tag_t> all_tags, rx_freq_tags;
  std::vector<double> rx_times;
  size_t produced = 0;
  get_tags_in_window(all_tags, 0, 0, in_count);
  get_tags(tag_, all_tags, rx_freq_tags, rx_times, in_count);

  if (rx_freq_tags.empty()) {
    process_items_(in_count, in, fft_output, produced);
  } else {
    for (size_t t = 0; t < rx_freq_tags.size(); ++t) {
      const auto &tag = rx_freq_tags[t];
      const double rx_time = rx_times[t];
      const auto rel = tag.offset - in_first;
      in_first += rel;

      // TODO: process leftover untagged items.
      if (rel > 0) {
        process_items_(rel, in, fft_output, produced);
      }

      const uint64_t rx_freq = (uint64_t)pmt::to_double(tag.value);
      if (!low_power_hold_down_ || stare_mode_) {
        add_output_tags_(rx_time, rx_freq, produced);
      }

      d_logger->debug("new rx_freq tag: {}, last {}", rx_freq, last_rx_freq_);
      if (pending_retune_) {
        --pending_retune_;
      }
      process_buckets_(rx_freq, rx_time);
    }
  }
  produce(1, produced);
}

int retune_fft_impl::general_work(int noutput_items,
                                  gr_vector_int &ninput_items,
                                  gr_vector_const_void_star &input_items,
                                  gr_vector_void_star &output_items) {
  if (!out_buf_.empty()) {
    auto out = static_cast<output_type *>(output_items[0]);
    const size_t leftover = std::min(out_buf_.size(), (size_t)noutput_items);
    auto from = out_buf_.begin();
    auto to = from + leftover;
    std::copy(from, to, out);
    out_buf_.erase(from, to);
    produce(0, leftover);
    return WORK_CALLED_PRODUCE;
  }

  const input_type *fft_output =
      static_cast<const input_type *>(output_items[1]);
  const input_type *in = static_cast<const input_type *>(input_items[0]);

  float max_input_items = noutput_items;
  size_t in_count = std::min(ninput_items[0], int(max_input_items));
  size_t in_first = nitems_read(0);
  process_tags_(in, in_count, in_first, fft_output);
  consume_each(in_count);

  return WORK_CALLED_PRODUCE;
}
} /* namespace iqtlabs */
} /* namespace gr */
