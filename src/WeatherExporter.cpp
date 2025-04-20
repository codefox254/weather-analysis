#include "WeatherExporter.h"
#include <fstream>
#include <iostream>
#include <iomanip>

// Export to TXT
void WeatherExporter::exportToTxt(const std::vector<WeatherRecord>& records, const std::string& filename) {
    std::ofstream file(filename);  // Opening the file for writing
    if (!file.is_open()) {
        std::cerr << "❌ Failed to open output file: " << filename << std::endl;
        return;
    }

    // Writing header
    file << "Date\t\tMinTemp\tMaxTemp\tRainfall\n";

    // Writing records
    for (const auto& record : records) {
        file << record.getDate() << "\t"
             << record.getMinTemp() << "\t"
             << record.getMaxTemp() << "\t"
             << record.getRainfall() << "\n";
    }

    std::cout << "✅ Exported TXT to: " << filename << std::endl;
    file.close();
}

// Export to CSV
void WeatherExporter::exportToCsv(const std::vector<WeatherRecord>& records, const std::string& filename) {
    std::ofstream file(filename);  // Opening the file for writing
    if (!file.is_open()) {
        std::cerr << "❌ Failed to open output file: " << filename << std::endl;
        return;
    }

    // Writing header
    file << "Date,MinTemp,MaxTemp,Rainfall\n";

    // Writing records
    for (const auto& record : records) {
        file << record.getDate() << ","
             << record.getMinTemp() << ","
             << record.getMaxTemp() << ","
             << record.getRainfall() << "\n";
    }

    std::cout << "✅ Exported CSV to: " << filename << std::endl;
    file.close();
}

// Display summary of records
void WeatherExporter::displaySummary(const std::vector<WeatherRecord>& records) {
    if (records.empty()) {
        std::cout << "⚠️ No records available to summarize.\n";
        return;
    }

    float totalMin = 0.0f, totalMax = 0.0f, totalRain = 0.0f;
    float minOfMin = records[0].getMinTemp();
    float maxOfMax = records[0].getMaxTemp();

    // Summing the data
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

    int count = records.size();  // Correctly tracking the count
    std::cout << "📊 Weather Summary:\n";
    std::cout << "Average MinTemp: " << (totalMin / count) << "\n";
    std::cout << "Average MaxTemp: " << (totalMax / count) << "\n";
    std::cout << "Total Rainfall: " << totalRain << "\n";
    std::cout << "Lowest MinTemp: " << minOfMin << "\n";
    std::cout << "Highest MaxTemp: " << maxOfMax << "\n";
}

// NEW: Export trend summary to TXT (Sprint 4)
void WeatherExporter::exportTrendToTxt(const std::string& trendSummary, const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app); // Append mode to add after data
    if (!outFile.is_open()) {
        std::cerr << "❌ Could not write trend to file: " << filename << std::endl;
        return;
    }

    outFile << "\n🧭 Trend Summary: " << trendSummary << "\n";
    std::cout << "📈 Trend summary added to: " << filename << std::endl;
    outFile.close();
}
