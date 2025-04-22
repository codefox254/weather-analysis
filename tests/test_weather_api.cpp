#include <iostream>
#include <cassert>
#include <cstdlib>  // For getenv / unsetenv
#include "../include/WeatherAPIClient.h"

// Test 1: Missing API key
void testMissingApiKey() {
    unsetenv("OPENWEATHER_API_KEY");  // Temporarily remove environment variable

    WeatherAPIClient client;
    std::string result = client.fetchCurrentWeather("Nairobi");

    std::cout << "🔒 Test: Missing API Key\n";
    std::cout << "Received: " << result << "\n";

    assert(result.find("API key") != std::string::npos);  // Relaxed match
    std::cout << "✅ Passed: Missing API key handled correctly.\n\n";
}

// Test 2: Successful fetch from OpenWeatherMap
void testSuccessfulFetch() {
    const char* apiKey = getenv("OPENWEATHER_API_KEY");
    if (!apiKey) {
        std::cout << "⚠️ Skipping successful fetch: No API key set.\n\n";
        return;
    }

    WeatherAPIClient client;
    std::string result = client.fetchCurrentWeather("Nairobi");

    std::cout << "🌤️ Test: Successful API Fetch\n";
    std::cout << result << "\n";

    assert(result.find("Temperature") != std::string::npos);
    std::cout << "✅ Passed: Weather data fetched and parsed.\n\n";
}

// Test 3: Invalid city name
void testInvalidCity() {
    const char* apiKey = getenv("OPENWEATHER_API_KEY");
    if (!apiKey) {
        std::cout << "⚠️ Skipping invalid city test: No API key set.\n\n";
        return;
    }

    WeatherAPIClient client;
    std::string result = client.fetchCurrentWeather("CityThatDoesNotExist123");

    std::cout << "❓ Test: Invalid City Name\n";
    std::cout << result << "\n";

    assert(result.find("not found") != std::string::npos || result.find("Error") != std::string::npos);
    std::cout << "✅ Passed: Invalid city handled gracefully.\n\n";
}

int main() {
    std::cout << "🧪 Running WeatherAPIClient Integration Tests...\n\n";

    testMissingApiKey();
    testSuccessfulFetch();
    testInvalidCity();

    std::cout << "✅ All applicable tests completed.\n";
    return 0;
}
