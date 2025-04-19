// src/main.cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "WeatherRecord.h"

int main() {
    std::ifstream file("../data/sample.csv");
    if (!file.is_open()) {
        std::cerr << "❌ Failed to open CSV file." << std::endl;
        return 1;
    }

    std::vector<WeatherRecord> records;
    std::string line;

    // Skip header
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, tempStr, humStr, rainStr;

        if (!std::getline(ss, date, ',')) continue;
        if (!std::getline(ss, tempStr, ',')) continue;
        if (!std::getline(ss, humStr, ',')) continue;
        if (!std::getline(ss, rainStr, ',')) continue;

        try {
            double temp = std::stod(tempStr);
            double hum = std::stod(humStr);
            double rain = std::stod(rainStr);

            WeatherRecord record(date, temp, hum, rain);
            records.push_back(record);
        } catch (...) {
            std::cerr << "⚠️ Invalid data format. Skipping line: " << line << std::endl;
            continue;
        }
    }

    file.close();

    std::cout << "\n📊 Loaded Weather Records:\n";
    for (const auto& record : records) {
        record.display();
    }

    return 0;
}
