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
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <fstream>
#include <gnuradio/io_signature.h>
#include <ios>
#include <iostream>
#include <volk/volk.h>

namespace gr {
namespace iqtlabs {

const auto fontFace = cv::FONT_HERSHEY_SIMPLEX;
const auto lineStyle = cv::LINE_AA;
const auto fontScale = 0.5;
const auto thickness = 1;

image_inference::sptr image_inference::make(
    const std::string &tag, int vlen, int x, int y,
    const std::string &image_dir, double convert_alpha, double norm_alpha,
    double norm_beta, int norm_type, int colormap, int interpolation, int flip,
    double min_peak_points, const std::string &model_server,
    const std::string &model_names, double confidence, int max_rows,
    int rotate_secs, int n_image, int n_inference, int samp_rate,
    const std::string &text_color) {
  return gnuradio::make_block_sptr<image_inference_impl>(
      tag, vlen, x, y, image_dir, convert_alpha, norm_alpha, norm_beta,
      norm_type, colormap, interpolation, flip, min_peak_points, model_server,
      model_names, confidence, max_rows, rotate_secs, n_image, n_inference,
      samp_rate, text_color);
}

image_inference_impl::image_inference_impl(
    const std::string &tag, int vlen, int x, int y,
    const std::string &image_dir, double convert_alpha, double norm_alpha,
    double norm_beta, int norm_type, int colormap, int interpolation, int flip,
    double min_peak_points, const std::string &model_server,
    const std::string &model_names, double confidence, int max_rows,
    int rotate_secs, int n_image, int n_inference, int samp_rate,
    const std::string &text_color)
    : gr::block("image_inference",
                gr::io_signature::make(1 /* min inputs */, 1 /* max inputs */,
                                       vlen * sizeof(input_type)),
                gr::io_signature::make(1 /* min outputs */, 1 /*max outputs */,
                                       sizeof(output_type))),
      tag_(pmt::intern(tag)), x_(x), y_(y), vlen_(vlen), last_rx_freq_(0),
      last_rx_time_(0), image_dir_(image_dir), convert_alpha_(convert_alpha),
      norm_alpha_(norm_alpha), norm_beta_(norm_beta), norm_type_(norm_type),
      colormap_(colormap), interpolation_(interpolation), flip_(flip),
      min_peak_points_(min_peak_points), confidence_(confidence),
      max_rows_(max_rows), rotate_secs_(rotate_secs), n_image_(n_image),
      n_inference_(n_inference), samp_rate_(samp_rate), running_(true),
      image_count_(0), inference_count_(0), last_image_start_item_(0) {
  points_buffer_ = NULL;
  normalized_buffer_.reset(
      new cv::Mat(cv::Size(vlen_, 0), CV_32F, cv::Scalar::all(0)));
  cmapped_buffer_.reset(
      new cv::Mat(cv::Size(vlen_, 0), CV_8UC3, cv::Scalar::all(0)));
  resized_buffer_.reset(
      new cv::Mat(cv::Size(x_, y_), CV_8UC3, cv::Scalar::all(0)));
  // we will output our own metadata tags.
  set_tag_propagation_policy(TPP_DONT);
  // TODO: IPv6 IP addresses
  std::vector<std::string> model_server_parts_;
  std::vector<std::string> text_color_parts_;
  boost::split(model_server_parts_, model_server, boost::is_any_of(":"),
               boost::token_compress_on);
  boost::split(model_names_, model_names, boost::is_any_of(","),
               boost::token_compress_on);
  boost::split(text_color_parts_, text_color, boost::is_any_of(","),
               boost::token_compress_on);
  if (model_server_parts_.size() == 2) {
    host_ = model_server_parts_[0];
    port_ = model_server_parts_[1];
    if (model_names_.size() == 0) {
      d_logger->error("missing model name(s)");
    }
  }
  text_color_ = cv::Scalar(255, 255, 255);
  if (text_color_parts_.size() == 3) {
    try {
      text_color_ = cv::Scalar(atoi(text_color_parts_[0].c_str()),
                               atoi(text_color_parts_[1].c_str()),
                               atoi(text_color_parts_[2].c_str()));
      d_logger->info("using text color: {}", text_color);
    } catch (std::exception &ex) {
      d_logger->error("cannot parse text color from {}: {}", ex.what(),
                      text_color);
    }
  }
  inference_thread_.reset(
      new std::thread(&image_inference_impl::background_run_inference_, this));
  torchserve_client_.reset(new torchserve_client(host_, port_));
  message_port_register_out(INFERENCE_KEY);
}

void image_inference_impl::volk_min_max_mean(const cv::Mat &mat, float &min,
                                             float &max, float &mean) {
  COUNT_T mat_size = mat.rows * mat.cols;
  const float *mat_data = (const float *)mat.data;
  unsigned int alignment = volk_get_alignment();
  boost::scoped_ptr<uint32_t> min_pos, max_pos;
  boost::scoped_ptr<float> total;
  min_pos.reset((uint32_t *)volk_malloc(sizeof(uint32_t), alignment));
  max_pos.reset((uint32_t *)volk_malloc(sizeof(uint32_t), alignment));
  total.reset((float *)volk_malloc(sizeof(float), alignment));
  volk_32f_index_min_32u(min_pos.get(), mat_data, mat_size);
  volk_32f_index_max_32u(max_pos.get(), mat_data, mat_size);
  min = mat_data[*min_pos];
  max = mat_data[*max_pos];
  volk_32f_accumulator_s32f(total.get(), mat_data, mat_size);
  mean = *total / mat_size;
}

void image_inference_impl::delete_output_item_(output_item_type &output_item) {
  if (output_item.image_buffer) {
    delete output_item.image_buffer;
  }
  delete output_item.points_buffer;
}

void image_inference_impl::delete_inference_() {
  output_item_type output_item;
  inference_q_.pop(output_item);
  delete_output_item_(output_item);
}

bool image_inference_impl::stop() {
  running_ = false;
  inference_thread_->join();
  run_inference_();
  if (points_buffer_) {
    delete points_buffer_;
  }
  d_logger->info("stopped");
  return true;
}

void image_inference_impl::process_items_(COUNT_T c, COUNT_T &consumed,
                                          const input_type *&in) {
  while (c) {
    COUNT_T existing_rows = 0;
    if (points_buffer_) {
      existing_rows = points_buffer_->rows;
    }
    COUNT_T new_rows = std::min(std::min(COUNT_T(max_rows_ - existing_rows), c),
                                COUNT_T(max_rows_));
    if (new_rows) {
      cv::Size new_size(vlen_, new_rows);
      if (!points_buffer_) {
        points_buffer_ = new cv::Mat(new_size, CV_32F, (void *)in);
        last_image_start_item_ = nitems_read(0) + consumed;
      } else {
        cv::Mat new_rows(new_size, CV_32F, (void *)in);
        points_buffer_->push_back(new_rows);
      }
      c -= new_rows;
      consumed += new_rows;
      in += (vlen_ * new_rows);
    }
    if (points_buffer_ && points_buffer_->rows == max_rows_) {
      create_image_(false);
    }
  }
}

void image_inference_impl::create_image_(bool discard) {
  if (points_buffer_ && !points_buffer_->empty()) {
    if (points_buffer_->rows >= max_rows_ || discard) {
      float points_min, points_max, points_mean;
      volk_min_max_mean(*points_buffer_, points_min, points_max, points_mean);
      if (points_max > min_peak_points_ && last_rx_freq_) {
        output_item_type output_item;
        output_item.rx_freq = last_rx_freq_;
        output_item.ts = last_rx_time_;
        output_item.start_item = last_image_start_item_;
        output_item.points_min = points_min;
        output_item.points_max = points_max;
        output_item.points_buffer = points_buffer_;
        output_item.points_mean = points_mean;
        output_item.image_buffer = NULL;
        if (!inference_q_.push(output_item)) {
          d_logger->error("inference request queue full, size {}",
                          MAX_INFERENCE);
          delete_output_item_(output_item);
        }
      } else {
        delete points_buffer_;
      }
      points_buffer_ = NULL;
    }
  }
}

std::string image_inference_impl::write_image_(
    const std::string &secs_image_dir, const std::string &prefix,
    output_item_type &output_item,
    boost::scoped_ptr<std::vector<unsigned char>> &encoded_buffer) {
  encoded_buffer.reset(new std::vector<unsigned char>());
  cv::imencode(IMAGE_EXT, *output_item.image_buffer, *encoded_buffer);
  std::string image_file_base =
      prefix + "_" + std::to_string(output_item.start_item) + "_" +
      host_now_str_(output_item.ts) + "_" + std::to_string(COUNT_T(x_)) + "x" +
      std::to_string(COUNT_T(y_)) + "_" +
      std::to_string(COUNT_T(output_item.rx_freq)) + "Hz";
  std::string image_file_png = image_file_base + IMAGE_EXT;
  std::string dot_image_file_png = secs_image_dir + "." + image_file_png;
  std::string full_image_file_png = secs_image_dir + image_file_png;
  std::ofstream image_out;
  image_out.open(dot_image_file_png, std::ios::binary | std::ios::out);
  image_out.write((const char *)encoded_buffer->data(), encoded_buffer->size());
  image_out.flush();
  image_out.close();
  rename(dot_image_file_png.c_str(), full_image_file_png.c_str());
  return full_image_file_png;
}

void image_inference_impl::background_run_inference_() {
  while (running_) {
    run_inference_();
    sleep(0.001);
  }
}

void image_inference_impl::transform_image_(output_item_type &output_item) {
  output_item.image_buffer =
      new cv::Mat(cv::Size(x_, y_), CV_8UC3, cv::Scalar::all(0));
  cv::normalize(*output_item.points_buffer, *normalized_buffer_, norm_alpha_,
                norm_beta_, norm_type_);
  normalized_buffer_->convertTo(*cmapped_buffer_, CV_8UC3, convert_alpha_, 0);
  cv::applyColorMap(*cmapped_buffer_, *cmapped_buffer_, colormap_);
  cv::cvtColor(*cmapped_buffer_, *cmapped_buffer_, cv::COLOR_BGR2RGB);
  cv::resize(*cmapped_buffer_, *resized_buffer_, cv::Size(x_, y_),
             interpolation_);
  cv::cvtColor(*resized_buffer_, *output_item.image_buffer, cv::COLOR_RGB2BGR);
  if (flip_ == -1 || flip_ == 0 || flip_ == 1) {
    cv::flip(*output_item.image_buffer, *output_item.image_buffer, flip_);
  }
}

void image_inference_impl::bbox_text(const output_item_type &output_item,
                                     const std::string &text, int pos, int cx,
                                     int cy) {
  int baseLine = 0;
  cv::Size text_size =
      getTextSize(text, fontFace, fontScale, thickness, &baseLine);
  int text_gap = text_size.height * 1.5 * pos;
  cv::putText(*output_item.image_buffer, text,
              cv::Point(cx - 10, cy - text_gap), fontFace, fontScale,
              text_color_, thickness, lineStyle, false);
}

COUNT_T image_inference_impl::parse_inference_(
    const output_item_type &output_item, const std::string &results,
    const std::string &model_name, nlohmann::json &results_json,
    std::string &error) {
  COUNT_T rendered_predictions = 0;
  const float xf = float(output_item.points_buffer->cols) /
                   float(output_item.image_buffer->cols);
  const float yf = float(output_item.points_buffer->rows) /
                   float(output_item.image_buffer->rows);
  try {
    nlohmann::json original_results_json = nlohmann::json::parse(results);
    double min_rx_freq = output_item.rx_freq - (samp_rate_ / 2);
    for (auto &prediction_class : original_results_json.items()) {
      if (!results_json.contains(prediction_class.key())) {
        results_json[prediction_class.key()] = nlohmann::json::array();
      }
      for (auto &prediction_ref : prediction_class.value().items()) {
        auto prediction = prediction_ref.value();
        prediction["model"] = model_name;
        float conf = prediction["conf"];
        if (conf > confidence_) {
          auto &xywh = prediction["xywh"];
          int cx = xywh[0];
          int cy = xywh[1];
          int w = xywh[2];
          int h = xywh[3];
          int tlx = cx - (w / 2);
          int tly = cy - (h / 2);
          double bbox_freq = min_rx_freq + (float(cx) / float(x_) * samp_rate_);
          cv::Rect bbox_rect(tlx, tly, w, h);
          cv::Rect rssi_rect(int(tlx * xf), int(tly * yf), int(w * xf),
                             int(h * yf));
          cv::Mat rssi_points = (*output_item.points_buffer)(rssi_rect);
          float rssi_min, rssi_max, rssi;
          volk_min_max_mean(rssi_points, rssi_min, rssi_max, rssi);
          prediction["rssi"] = rssi;
          prediction["rssi_samples"] = rssi_points.cols * rssi_points.rows;
          prediction["rssi_min"] = rssi_min;
          prediction["rssi_max"] = rssi_max;
          prediction["freq"] = bbox_freq;
          if (rssi >= min_peak_points_) {
            ++rendered_predictions;
            cv::rectangle(*output_item.image_buffer, bbox_rect, text_color_);
            std::stringstream class_label_stream;
            class_label_stream << std::fixed << std::setprecision(2);
            class_label_stream << prediction_class.key() << ": " << conf;
            std::stringstream rssi_label_stream;
            rssi_label_stream << std::fixed << std::setprecision(2);
            rssi_label_stream << "RSSI max: " << rssi_max;
            std::stringstream freq_label_stream;
            freq_label_stream << std::fixed << std::setprecision(2);
            freq_label_stream << "freq: " << bbox_freq / 1e6;
            bbox_text(output_item, class_label_stream.str(), 3, cx, cy);
            bbox_text(output_item, freq_label_stream.str(), 2, cx, cy);
            bbox_text(output_item, rssi_label_stream.str(), 1, cx, cy);
          }
        }
        results_json[prediction_class.key()].emplace_back(prediction);
      }
    }
  } catch (std::exception &ex) {
    d_logger->error("invalid json: " + std::string(ex.what()) + " " + results);
    error = "invalid json: " + std::string(ex.what());
  }
  return rendered_predictions;
}

void image_inference_impl::run_inference_() {
  boost::beast::error_code ec;
  while (!inference_q_.empty()) {
    output_item_type output_item;
    inference_q_.pop(output_item);

    boost::scoped_ptr<std::vector<unsigned char>> encoded_buffer;

    nlohmann::json metadata_json;
    metadata_json["rssi_max"] = std::to_string(output_item.points_max);
    metadata_json["rssi_mean"] = std::to_string(output_item.points_mean);
    metadata_json["rssi_min"] = std::to_string(output_item.points_min);
    metadata_json["ts"] = host_now_str_(output_item.ts);
    metadata_json["rx_freq"] = std::to_string(output_item.rx_freq);
    metadata_json["start_item"] = std::to_string(output_item.start_item);
    // TODO: may not be accurate due to zero suppression in retune_fft.
    metadata_json["sample_clock"] =
        std::to_string(output_item.start_item * vlen_);
    metadata_json["orig_rows"] = output_item.points_buffer->rows;
    metadata_json["sample_rate"] = std::to_string(samp_rate_);

    const std::string secs_image_dir = secs_dir(image_dir_, rotate_secs_);
    ++image_count_;
    if (n_image_ == 0 || image_count_ % n_image_ == 0) {
      transform_image_(output_item);
      metadata_json["image_path"] =
          write_image_(secs_image_dir, "image", output_item, encoded_buffer);
    }

    nlohmann::json output_json;

    if ((host_.size() && port_.size()) && (model_names_.size() > 0) &&
        (n_inference_ == 0 || ++inference_count_ % n_inference_ == 0)) {
      if (flip_ == -1 || flip_ == 0 || flip_ == 1) {
        cv::flip(*output_item.points_buffer, *output_item.points_buffer, flip_);
      }
      if (!metadata_json.contains("image_path")) {
        transform_image_(output_item);
        metadata_json["image_path"] =
            write_image_(secs_image_dir, "image", output_item, encoded_buffer);
      }
      std::string error;
      nlohmann::json results_json;
      COUNT_T rendered_predictions = 0;

      for (auto model_name : model_names_) {
        const std::string_view body(
            reinterpret_cast<char const *>(encoded_buffer->data()),
            encoded_buffer->size());
        torchserve_client_->make_inference_request(model_name, body,
                                                   "image/" + IMAGE_TYPE);
        std::string results;
        torchserve_client_->send_inference_request(results, error);

        if (error.size() == 0) {
          rendered_predictions += parse_inference_(
              output_item, results, model_name, results_json, error);
        }

        if (error.size()) {
          d_logger->error(error);
        }
      }
      output_json["predictions"] = results_json;
      if (rendered_predictions) {
        metadata_json["predictions_image_path"] = write_image_(
            secs_image_dir, "predictions_image", output_item, encoded_buffer);
      }
    }
    // double new line to facilitate json parsing, since prediction may
    // contain new lines.
    output_json["metadata"] = metadata_json;
    const std::string output_json_str = output_json.dump();
    json_q_.push(output_json_str + "\n\n");
    delete_output_item_(output_item);
    message_port_pub(INFERENCE_KEY, string_to_pmt(output_json_str));
  }
}

int image_inference_impl::general_work(int noutput_items,
                                       gr_vector_int &ninput_items,
                                       gr_vector_const_void_star &input_items,
                                       gr_vector_void_star &output_items) {
  const input_type *in = static_cast<const input_type *>(input_items[0]);
  COUNT_T in_count = ninput_items[0];
  COUNT_T in_first = nitems_read(0);
  COUNT_T leftover = 0;
  COUNT_T consumed = 0;

  while (!json_q_.empty()) {
    std::string json;
    json_q_.pop(json);
    out_buf_.insert(out_buf_.end(), json.begin(), json.end());
  }

  if (!out_buf_.empty()) {
    auto out = static_cast<output_type *>(output_items[0]);
    leftover = std::min(out_buf_.size(), (COUNT_T)noutput_items);
    auto from = out_buf_.begin();
    auto to = from + leftover;
    std::copy(from, to, out);
    out_buf_.erase(from, to);
  }

  std::vector<tag_t> all_tags, rx_freq_tags;
  std::vector<TIME_T> rx_times;
  get_tags_in_window(all_tags, 0, 0, in_count);
  get_tags(tag_, all_tags, rx_freq_tags, rx_times, in_count);

  if (rx_freq_tags.empty()) {
    process_items_(in_count, consumed, in);
  } else {
    for (COUNT_T t = 0; t < rx_freq_tags.size(); ++t) {
      const auto &tag = rx_freq_tags[t];
      const TIME_T rx_time = rx_times[t];
      const auto rel = tag.offset - in_first;
      in_first += rel;

      if (rel > 0) {
        process_items_(rel, consumed, in);
      }

      FREQ_T rx_freq = GET_FREQ(tag);
      if (rx_freq != last_rx_freq_) {
        create_image_(true);
      }
      last_rx_freq_ = rx_freq;
      last_rx_time_ = rx_time;
    }
    if (consumed < in_count) {
      process_items_(in_count - consumed, consumed, in);
    }
  }

  consume_each(in_count);
  return leftover;
}

void image_inference_impl::forecast(int noutput_items,
                                    gr_vector_int &ninput_items_required) {
  ninput_items_required[0] = 1;
}

} /* namespace iqtlabs */
} /* namespace gr */
