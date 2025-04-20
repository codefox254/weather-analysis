#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "WeatherRecord.h"
#include "WeatherExporter.h"
#include "WeatherTrendDetection.h"
#include "GraphASCII.h"  // ✅ New include

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

    WeatherExporter exporter;

    if (argc == 2) {
        std::string option = argv[1];

        if (option == "--summary") {
            exporter.displaySummary(records);

        } else if (option == "--export-txt") {
            exporter.exportToTxt(records, "output.txt");

            std::string trend = WeatherTrendDetection::detectTrend(records);
            std::ofstream out("output.txt", std::ios::app);
            if (out.is_open()) {
                out << "\n" << trend << std::endl;
                out.close();
            }

        } else if (option == "--export-csv") {
            exporter.exportToCsv(records, "output.csv");

        } else if (option == "--trend") {
            std::string trend = WeatherTrendDetection::detectTrend(records);
            std::cout << "\n📈 Temperature Trend Analysis:\n" << trend << std::endl;

        } else if (option == "--ascii-temp") {
            GraphASCII::displayTemperatureChart(records);

        } else if (option == "--ascii-rain") {
            GraphASCII::displayRainfallChart(records);

        } else {
            std::cerr << "❌ Unknown option: " << option << std::endl;
            std::cerr << "Usage:\n"
                      << "  --summary        Show summary on CLI\n"
                      << "  --export-txt     Export to output.txt (includes trend)\n"
                      << "  --export-csv     Export to output.csv\n"
                      << "  --trend          Analyze and print trend to console\n"
                      << "  --ascii-temp     Show ASCII chart for temperature\n"
                      << "  --ascii-rain     Show ASCII chart for rainfall\n";
        }
    } else {
        std::cout << "\n📊 Loaded Weather Records:\n";
        for (const auto& record : records) {
            record.display();
        }

        std::string trend = WeatherTrendDetection::detectTrend(records);
        std::cout << "\n🧠 Temperature Trend Analysis:\n" << trend << std::endl;
    }

    return 0;
}
