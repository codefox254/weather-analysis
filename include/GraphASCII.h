#ifndef GRAPH_ASCII_H
#define GRAPH_ASCII_H

#include <vector>
#include <string>
#include "WeatherRecord.h"

class GraphASCII {
public:
    // Displays a bar chart for max temperature
    static void displayTemperatureChart(const std::vector<WeatherRecord>& records);

    // Displays a bar chart for rainfall
    static void displayRainfallChart(const std::vector<WeatherRecord>& records);

private:
    static void drawBar(const std::string& label, double value, double maxValue, char symbol = '#');
};

#endif // GRAPH_ASCII_H
