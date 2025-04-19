// include/WeatherRecord.h
#ifndef WEATHER_RECORD_H
#define WEATHER_RECORD_H

#include <string>

class WeatherRecord {
private:
    std::string date;
    double temperature;
    double humidity;
    double rainfall;

public:
    WeatherRecord(const std::string& date, double temp, double hum, double rain);

    // Getters
    std::string getDate() const;
    double getTemperature() const;
    double getHumidity() const;
    double getRainfall() const;

    void display() const;
};

#endif
