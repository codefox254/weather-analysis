#include "../include/WeatherAPIClient.h"
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t totalSize = size * nmemb;
    output->append((char*)contents, totalSize);
    return totalSize;
}

std::string WeatherAPIClient::fetchCurrentWeather(const std::string& city) {
    const char* apiKey = std::getenv("OPENWEATHER_API_KEY");
    if (!apiKey) {
        return "❌ API key not set in environment (OPENWEATHER_API_KEY)";
    }

    std::ostringstream url;
    url << "https://api.openweathermap.org/data/2.5/weather?q="
        << city << "&appid=" << apiKey << "&units=metric";

    CURL* curl = curl_easy_init();
    std::string response;

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.str().c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            curl_easy_cleanup(curl);
            return std::string("❌ cURL error: ") + curl_easy_strerror(res);
        }
        curl_easy_cleanup(curl);
    } else {
        return "❌ cURL initialization failed.";
    }

    // Parse and format JSON response
    try {
        auto j = json::parse(response);

        if (j.contains("main") && j.contains("weather")) {
            float temp = j["main"]["temp"];
            float feels_like = j["main"]["feels_like"];
            int humidity = j["main"]["humidity"];
            std::string desc = j["weather"][0]["description"];

            std::ostringstream output;
            output << "📍 " << city << " | "
                   << "🌡️ Temp: " << temp << "°C, "
                   << "🥵 Feels like: " << feels_like << "°C, "
                   << "💧 Humidity: " << humidity << "%, "
                   << "☁️ Condition: " << desc;
            return output.str();
        } else if (j.contains("message")) {
            return "❌ Error: " + j["message"].get<std::string>();
        } else {
            return "❌ Unexpected response format.";
        }
    } catch (...) {
        return "❌ Failed to parse API response.";
    }
}
