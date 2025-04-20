#ifndef WEATHER_RECORD_H
#define WEATHER_RECORD_H

#include <string>

class WeatherRecord {
private:
    std::string date;
    float minTemp;
    float maxTemp;
    float rainfall;

public:
    WeatherRecord(const std::string& date, float minT, float maxT, float rain);

    std::string getDate() const;
    float getMinTemp() const;
    float getMaxTemp() const;
    float getRainfall() const;

    void display() const;
};

#endif // WEATHER_RECORD_H
