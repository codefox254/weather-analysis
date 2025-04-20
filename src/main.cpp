#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "WeatherRecord.h"
#include "WeatherExporter.h"

int main(int argc, char* argv[]) {
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
        std::string date, minStr, maxStr, rainStr;

        if (!std::getline(ss, date, ',')) continue;
        if (!std::getline(ss, minStr, ',')) continue;
        if (!std::getline(ss, maxStr, ',')) continue;
        if (!std::getline(ss, rainStr, ',')) continue;

        try {
            double min = std::stod(minStr);
            double max = std::stod(maxStr);
            double rain = std::stod(rainStr);

            WeatherRecord record(date, min, max, rain);
            records.push_back(record);
        } catch (...) {
            std::cerr << "⚠️ Invalid data format. Skipping line: " << line << std::endl;
            continue;
        }
    }

    file.close();

    // ✅ Create an instance of WeatherExporter
    WeatherExporter exporter;

    if (argc == 2) {
        std::string option = argv[1];

        if (option == "--summary") {
            exporter.displaySummary(records);
        } else if (option == "--export-txt") {
            exporter.exportToTxt(records, "output.txt");
        } else if (option == "--export-csv") {
            exporter.exportToCsv(records, "output.csv");
        } else {
            std::cerr << "❌ Unknown option: " << option << std::endl;
            std::cerr << "Usage:\n"
                      << "  --summary       Show summary on CLI\n"
                      << "  --export-txt    Export to output.txt\n"
                      << "  --export-csv    Export to output.csv\n";
        }
    } else {
        std::cout << "\n📊 Loaded Weather Records:\n";
        for (const auto& record : records) {
            record.display();
        }
    }

    return 0;
}
