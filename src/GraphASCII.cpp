#include "GraphASCII.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

void GraphASCII::displayTemperatureChart(const std::vector<WeatherRecord>& records) {
    std::cout << "\n🌡️  ASCII Temperature Chart (Max Temperature):\n";
    
    double maxTemp = 0.0;
    for (const auto& r : records) {
        if (r.getMaxTemp() > maxTemp) {
            maxTemp = r.getMaxTemp();
        }
    }

    for (const auto& r : records) {
        std::string label = r.getDate();
        double value = r.getMaxTemp();
        drawBar(label, value, maxTemp, '=');
    }
}

void GraphASCII::displayRainfallChart(const std::vector<WeatherRecord>& records) {
    std::cout << "\n🌧️  ASCII Rainfall Chart:\n";

    double maxRain = 0.0;
    for (const auto& r : records) {
        if (r.getRainfall() > maxRain) {
            maxRain = r.getRainfall();
        }
    }

    for (const auto& r : records) {
        std::string label = r.getDate();
        double value = r.getRainfall();
        drawBar(label, value, maxRain, '*');
    }
}

void GraphASCII::drawBar(const std::string& label, double value, double maxValue, char symbol) {
    const int maxBarWidth = 50;
    int barLength = (maxValue > 0) ? static_cast<int>((value / maxValue) * maxBarWidth) : 0;

    std::cout << std::setw(12) << label << " | ";
    for (int i = 0; i < barLength; ++i) {
        std::cout << symbol;
    }
    std::cout << " (" << value << ")" << std::endl;
}
