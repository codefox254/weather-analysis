#ifndef WEATHER_API_CLIENT_H
#define WEATHER_API_CLIENT_H

#include <string>

class WeatherAPIClient {
public:
    static std::string fetchCurrentWeather(const std::string& city);
};

#endif // WEATHER_API_CLIENT_H
