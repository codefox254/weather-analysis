#include "WeatherRecord.h"
#include <iostream>

WeatherRecord::WeatherRecord(const std::string& date, float minT, float maxT, float rain)
    : date(date), minTemp(minT), maxTemp(maxT), rainfall(rain) {}

std::string WeatherRecord::getDate() const { return date; }
float WeatherRecord::getMinTemp() const { return minTemp; }
float WeatherRecord::getMaxTemp() const { return maxTemp; }
float WeatherRecord::getRainfall() const { return rainfall; }

void WeatherRecord::display() const {
    std::cout << "Date: " << date
              << ", MinTemp: " << minTemp
              << ", MaxTemp: " << maxTemp
              << ", Rainfall: " << rainfall << std::endl;
}
