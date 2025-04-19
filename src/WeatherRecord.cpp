// src/WeatherRecord.cpp
#include "WeatherRecord.h"
#include <iostream>

WeatherRecord::WeatherRecord(const std::string& date, double temp, double hum, double rain)
    : date(date), temperature(temp), humidity(hum), rainfall(rain) {}

std::string WeatherRecord::getDate() const { return date; }
double WeatherRecord::getTemperature() const { return temperature; }
double WeatherRecord::getHumidity() const { return humidity; }
double WeatherRecord::getRainfall() const { return rainfall; }

void WeatherRecord::display() const {
    std::cout << "Date: " << date
              << " | Temp: " << temperature << "°C"
              << " | Humidity: " << humidity << "%"
              << " | Rainfall: " << rainfall << "mm" << std::endl;
}
