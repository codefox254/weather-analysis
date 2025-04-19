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
        std::string date, tempStr, humStr, rainStr;

        std::getline(ss, date, ',');
        std::getline(ss, tempStr, ',');
        std::getline(ss, humStr, ',');
        std::getline(ss, rainStr, ',');

        try {
            double temp = std::stod(tempStr);
            double hum = std::stod(humStr);
            double rain = std::stod(rainStr);

            records.emplace_back(date, temp, hum, rain);
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

    // Sample test record checks
    WeatherRecord r = testData[0];
    assert(r.getDate() == "2024-01-01");
    assert(r.getTemperature() == 22.5);
    assert(r.getHumidity() == 65);
    assert(r.getRainfall() == 2.3);

    std::cout << "✅ Test passed: Weather data loaded and verified." << std::endl;
    return 0;
}
