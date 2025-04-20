#ifndef WEATHER_EXPORTER_H
#define WEATHER_EXPORTER_H

#include <vector>
#include <string>
#include "WeatherRecord.h" // Just include, do NOT define

class WeatherExporter {
public:
    void exportToTxt(const std::vector<WeatherRecord>& records, const std::string& filename);
    void exportToCsv(const std::vector<WeatherRecord>& records, const std::string& filename);
    void displaySummary(const std::vector<WeatherRecord>& records);
};

#endif // WEATHER_EXPORTER_H
