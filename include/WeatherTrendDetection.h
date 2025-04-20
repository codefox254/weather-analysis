#ifndef WEATHER_TREND_DETECTION_H
#define WEATHER_TREND_DETECTION_H

#include <vector>
#include "WeatherRecord.h"

class WeatherTrendDetection {
public:
    static std::string detectTrend(const std::vector<WeatherRecord>& records);
private:
    static float calculateLinearRegressionSlope(const std::vector<WeatherRecord>& records);
};

#endif // WEATHER_TREND_DETECTION_H
