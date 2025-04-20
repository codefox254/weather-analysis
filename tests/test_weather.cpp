#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cassert>
#include "../include/WeatherRecord.h"

// Reusable function to load CSV data
std::vector<WeatherRecord> loadCSV(const std::string& path) {
    std::ifstream file(path);
    std::vector<WeatherRecord> records;

    if (!file.is_open()) {
        std::cerr << "❌ File not found: " << path << std::endl;
        return records;
    }

    std::string line;
    std::getline(file, line); // Skip header

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, minStr, maxStr, rainStr;

        std::getline(ss, date, ',');
        std::getline(ss, minStr, ',');
        std::getline(ss, maxStr, ',');
        std::getline(ss, rainStr, ',');

        try {
            float minT = std::stof(minStr);
            float maxT = std::stof(maxStr);
            float rain = std::stof(rainStr);

            records.emplace_back(date, minT, maxT, rain);
        } catch (...) {
            std::cerr << "⚠️ Skipping invalid row: " << line << std::endl;
        }
    }

    return records;
}

int main() {
    std::cout << "🧪 Running WeatherRecord CSV Load Test..." << std::endl;

    std::vector<WeatherRecord> testData = loadCSV("../data/sample.csv");

    // Basic checks
    assert(!testData.empty() && "CSV should not be empty");

    // Sample test record checks - adjust these values to match your sample.csv
    WeatherRecord r = testData[0];
    std::cout << "Checking first record: " << r.getDate() << " | Min: " << r.getMinTemp()
              << " | Max: " << r.getMaxTemp() << " | Rainfall: " << r.getRainfall() << std::endl;

              assert(r.getDate() == "2024-01-01");
              assert(std::abs(r.getMinTemp() - 22.5f) < 0.01f);  // ✅ correct
              assert(std::abs(r.getMaxTemp() - 65.0f) < 0.01f);  // ✅ correct
              assert(std::abs(r.getRainfall() - 2.3f) < 0.01f);  // ✅ correct              

    std::cout << "✅ Test passed: Weather data loaded and verified." << std::endl;
    return 0;
}
