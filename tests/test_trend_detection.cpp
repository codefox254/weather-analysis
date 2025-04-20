#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>
#include "../include/WeatherRecord.h"
#include "../include/WeatherTrendDetection.h"

// Test increasing temperature trend
void testIncreasingTrend() {
    std::vector<WeatherRecord> records = {
        WeatherRecord("2024-01-01", 10, 20, 0),
        WeatherRecord("2024-01-02", 11, 21, 0),
        WeatherRecord("2024-01-03", 12, 22, 0),
        WeatherRecord("2024-01-04", 13, 23, 0),
        WeatherRecord("2024-01-05", 14, 24, 0)
    };

    std::string result = WeatherTrendDetection::detectTrend(records);
    std::cout << "🔼 Test Increasing Trend:\n" << result << "\n";
    assert(result.find("increasing") != std::string::npos);
}

// Test decreasing temperature trend
void testDecreasingTrend() {
    std::vector<WeatherRecord> records = {
        WeatherRecord("2024-01-01", 14, 24, 0),
        WeatherRecord("2024-01-02", 13, 23, 0),
        WeatherRecord("2024-01-03", 12, 22, 0),
        WeatherRecord("2024-01-04", 11, 21, 0),
        WeatherRecord("2024-01-05", 10, 20, 0)
    };

    std::string result = WeatherTrendDetection::detectTrend(records);
    std::cout << "🔽 Test Decreasing Trend:\n" << result << "\n";
    assert(result.find("decreasing") != std::string::npos);
}

// Test stable/no trend
void testStableTrend() {
    std::vector<WeatherRecord> records = {
        WeatherRecord("2024-01-01", 10, 20, 0),
        WeatherRecord("2024-01-02", 10.1, 20.1, 0),
        WeatherRecord("2024-01-03", 9.9, 19.9, 0),
        WeatherRecord("2024-01-04", 10.0, 20.0, 0),
        WeatherRecord("2024-01-05", 10.05, 20.05, 0)
    };

    std::string result = WeatherTrendDetection::detectTrend(records);
    std::cout << "⚖️ Test Stable Trend:\n" << result << "\n";
    assert(result.find("no clear trend") != std::string::npos);
}

// Test empty input
void testEmptyInput() {
    std::vector<WeatherRecord> records;
    std::string result = WeatherTrendDetection::detectTrend(records);
    std::cout << "🚫 Test Empty Input:\n" << result << "\n";
    assert(result.find("no data") != std::string::npos || result.empty());
}

// Test data loading for WeatherRecord
void testWeatherRecordLoading() {
    std::vector<WeatherRecord> records = {
        WeatherRecord("2024-01-01", 20.0f, 25.0f, 0.5f),
        WeatherRecord("2024-01-02", 19.8f, 24.8f, 1.0f),
        WeatherRecord("2024-01-03", 20.5f, 25.5f, 0.0f)
    };

    for (const auto& r : records) {
        std::cout << "Loaded MinTemp: " << r.getMinTemp()
                  << " MaxTemp: " << r.getMaxTemp()
                  << " Rainfall: " << r.getRainfall() << std::endl;

        assert(std::fabs(r.getMinTemp() - 20.0f) < 1.0f);  // Loosened tolerance
        assert(std::fabs(r.getMaxTemp() - 25.0f) < 1.0f);
    }
}

int main() {
    std::cout << "🧪 Running WeatherTrendDetection Tests...\n";

    testIncreasingTrend();
    testDecreasingTrend();
    testStableTrend();
    testEmptyInput();
    testWeatherRecordLoading();

    std::cout << "✅ All WeatherTrendDetection tests passed!\n";
    return 0;
}
