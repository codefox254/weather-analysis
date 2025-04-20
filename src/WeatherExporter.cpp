#include "WeatherExporter.h"
#include <fstream>
#include <iostream>
#include <iomanip>

void WeatherExporter::exportToTxt(const std::vector<WeatherRecord>& records, const std::string& filename) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "❌ Failed to open output file: " << filename << std::endl;
        return;
    }

    file << "Date\t\tMinTemp\tMaxTemp\tRainfall\n";
    for (const auto& record : records) {
        file << record.getDate() << "\t"
             << record.getMinTemp() << "\t"
             << record.getMaxTemp() << "\t"
             << record.getRainfall() << "\n";
    }

    std::cout << "✅ Exported TXT to: " << filename << std::endl;
    file.close();
}

void WeatherExporter::exportToCsv(const std::vector<WeatherRecord>& records, const std::string& filename) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "❌ Failed to open output file: " << filename << std::endl;
        return;
    }

    file << "Date,MinTemp,MaxTemp,Rainfall\n";
    for (const auto& record : records) {
        file << record.getDate() << ","
             << record.getMinTemp() << ","
             << record.getMaxTemp() << ","
             << record.getRainfall() << "\n";
    }

    std::cout << "✅ Exported CSV to: " << filename << std::endl;
    file.close();
}

void WeatherExporter::displaySummary(const std::vector<WeatherRecord>& records) {
    if (records.empty()) {
        std::cout << "⚠️ No records available to summarize.\n";
        return;
    }

    float totalMin = 0.0f, totalMax = 0.0f, totalRain = 0.0f;
    float minOfMin = records[0].getMinTemp();
    float maxOfMax = records[0].getMaxTemp();

    for (const auto& record : records) {
        float minT = record.getMinTemp();
        float maxT = record.getMaxTemp();
        float rain = record.getRainfall();

        totalMin += minT;
        totalMax += maxT;
        totalRain += rain;

        if (minT < minOfMin) minOfMin = minT;
        if (maxT > maxOfMax) maxOfMax = maxT;
    }

    int count = records.size();
    std::cout << "📊 Weather Summary:\n";
    std::cout << "Average MinTemp: " << (totalMin / count) << "\n";
    std::cout << "Average MaxTemp: " << (totalMax / count) << "\n";
    std::cout << "Total Rainfall: " << totalRain << "\n";
    std::cout << "Lowest MinTemp: " << minOfMin << "\n";
    std::cout << "Highest MaxTemp: " << maxOfMax << "\n";
}
