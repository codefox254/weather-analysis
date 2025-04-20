#include "WeatherTrendDetection.h"
#include <sstream>
#include <iomanip>

std::string WeatherTrendDetection::detectTrend(const std::vector<WeatherRecord>& records) {
    if (records.size() < 2) {
        return "⚠️ Not enough data to determine trend.\n";
    }

    float slope = calculateLinearRegressionSlope(records);

    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);

    if (slope > 0.2f) {
        oss << "📈 Warming trend detected (slope: " << slope << "°C/day)\n";
    } else if (slope < -0.2f) {
        oss << "📉 Cooling trend detected (slope: " << slope << "°C/day)\n";
    } else {
        oss << "➖ Stable temperatures (slope: " << slope << "°C/day)\n";
    }

    return oss.str();
}

float WeatherTrendDetection::calculateLinearRegressionSlope(const std::vector<WeatherRecord>& records) {
    int n = records.size();
    if (n < 2) return 0.0f;

    float sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for (int i = 0; i < n; ++i) {
        float x = static_cast<float>(i);
        float y = records[i].getMaxTemp();

        sumX += x;
        sumY += y;
        sumXY += x * y;
        sumX2 += x * x;
    }

    float numerator = n * sumXY - sumX * sumY;
    float denominator = n * sumX2 - sumX * sumX;

    return (denominator != 0) ? (numerator / denominator) : 0.0f;
}
