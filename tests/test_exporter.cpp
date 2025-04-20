#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cassert>
#include "../include/WeatherExporter.h"

// Utility function to check file existence
bool fileExists(const std::string& filename) {
    std::ifstream file(filename);
    return file.good();
}

// Sample test data
std::vector<WeatherRecord> createSampleData() {
    return {
        WeatherRecord("2024-01-01", 20.0f, 25.0f, 2.3f),
        WeatherRecord("2024-01-02", 19.5f, 26.1f, 0.0f),
        WeatherRecord("2024-01-03", 18.0f, 24.5f, 1.2f)
    };
}

int main() {
    std::cout << "🧪 Running WeatherExporter Tests..." << std::endl;

    WeatherExporter exporter;
    auto records = createSampleData();

    // --- Test TXT Export ---
    std::string txtFile = "test_output.txt";
    exporter.exportToTxt(records, txtFile);
    assert(fileExists(txtFile));

    // Check contents of TXT file for expected data
    std::ifstream txtIn(txtFile);
    std::string txtLine;
    bool foundDate = false;

    while (std::getline(txtIn, txtLine)) {
        if (txtLine.find("2024-01-01") != std::string::npos) {
            foundDate = true;
            break;
        }
    }

    assert(foundDate && "❌ First record not found in TXT export");

    // --- Test CSV Export ---
    std::string csvFile = "test_output.csv";
    exporter.exportToCsv(records, csvFile);
    assert(fileExists(csvFile));

    std::ifstream csvIn(csvFile);
    std::string csvHeader;
    std::getline(csvIn, csvHeader);
    assert(csvHeader == "Date,MinTemp,MaxTemp,Rainfall");

    std::string csvRow;
    std::getline(csvIn, csvRow);
    assert(csvRow.find("2024-01-01") != std::string::npos);

    // --- Test Summary Output ---
    std::cout << "🧾 Displaying Summary (verify manually):" << std::endl;
    exporter.displaySummary(records);

    std::cout << "✅ All WeatherExporter tests passed!" << std::endl;
    return 0;
}
