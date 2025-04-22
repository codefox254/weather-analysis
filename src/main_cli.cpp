#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "WeatherRecord.h"
#include "WeatherExporter.h"
#include "WeatherTrendDetection.h"
#include "GraphASCII.h"

void loadWeatherData(const std::string& filename, std::vector<WeatherRecord>& records) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "❌ Failed to open CSV file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);  // Skip header

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, minStr, maxStr, rainStr;

        if (!(std::getline(ss, date, ',') && std::getline(ss, minStr, ',') &&
              std::getline(ss, maxStr, ',') && std::getline(ss, rainStr, ','))) {
            continue;
        }

        try {
            double min = std::stod(minStr);
            double max = std::stod(maxStr);
            double rain = std::stod(rainStr);

            records.push_back(WeatherRecord(date, min, max, rain));
        } catch (...) {
            std::cerr << "⚠️ Invalid data format. Skipping line: " << line << std::endl;
        }
    }

    file.close();
}

void handleCommandLineOptions(int argc, char* argv[], const std::vector<WeatherRecord>& records) {
    WeatherExporter exporter;

    if (argc != 2) {
        std::cerr << "❌ Invalid arguments. Usage:\n"
                  << "  --summary        Show summary\n"
                  << "  --export-txt     Export to output.txt\n"
                  << "  --export-csv     Export to output.csv\n"
                  << "  --trend          Show trend\n"
                  << "  --ascii-temp     Show ASCII temperature chart\n"
                  << "  --ascii-rain     Show ASCII rainfall chart\n";
        return;
    }

    std::string option = argv[1];
    if (option == "--summary") {
        exporter.displaySummary(records);
    } else if (option == "--export-txt") {
        exporter.exportToTxt(records, "output.txt");
        std::ofstream out("output.txt", std::ios::app);
        if (out.is_open()) {
            out << "\n" << WeatherTrendDetection::detectTrend(records) << std::endl;
        }
    } else if (option == "--export-csv") {
        exporter.exportToCsv(records, "output.csv");
    } else if (option == "--trend") {
        std::cout << "\n📈 Temperature Trend Analysis:\n" << WeatherTrendDetection::detectTrend(records) << std::endl;
    } else if (option == "--ascii-temp") {
        GraphASCII::displayTemperatureChart(records);
    } else if (option == "--ascii-rain") {
        GraphASCII::displayRainfallChart(records);
    } else {
        std::cerr << "❌ Unknown option: " << option << std::endl;
    }
}

int main(int argc, char* argv[]) {
    std::vector<WeatherRecord> records;
    loadWeatherData("../data/sample.csv", records);

    handleCommandLineOptions(argc, argv, records);

    return 0;
}
