
#include <iostream>
#include <nlohmann/json.hpp>

int main()
{
std::cout << "Hello, World!" << std::endl;
std::string msg_str = "{\"metadata\": {\"rx_freq\": \"2449999999\", \"sample_clock\": \"3964928\", \"ts\": \"1714410255.961\"}, \"predictions\": {\"5\": [{\"confidence\": 9.409838676452637, \"model\": \"torchsig_model\"}]}}";
try {
      nlohmann::json inference_results = nlohmann::json::parse(msg_str);
      std::cout << "Inference results: " << inference_results.dump(4) << "\n";
      if (inference_results.contains("metadata")) {
        auto metadata = inference_results["metadata"];
        std::cout << "metadata: " << metadata.dump(4) << "\n";
        if (metadata.contains("sample_clock")) {
            std::string sample_clock_str = metadata["sample_clock"];
            double sample_clock = std::stod(sample_clock_str);
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
              // Do something with confidence and model
            }
          }
        } else {
          std::cout << "No predictions found in message\n";
        } 
  } catch (std::exception &ex) {
    std::string error = "invalid json: " + std::string(ex.what());
    std::cout << error << "\n";
      }

}