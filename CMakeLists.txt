cmake_minimum_required(VERSION 3.10)
project(WeatherAnalysisSystem)

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

# Main app
file(GLOB SOURCES "src/*.cpp")
add_executable(weather_analysis ${SOURCES})

# Test: WeatherRecord
if(EXISTS "${CMAKE_SOURCE_DIR}/tests/test_weather.cpp")
    add_executable(test_weather tests/test_weather.cpp src/WeatherRecord.cpp)
    target_include_directories(test_weather PRIVATE include)
endif()

# Test: sample2_viewer
if(EXISTS "${CMAKE_SOURCE_DIR}/tests/sample2_viewer.cpp")
    add_executable(sample2_viewer tests/sample2_viewer.cpp)
    target_include_directories(sample2_viewer PRIVATE include)
endif()
