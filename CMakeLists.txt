cmake_minimum_required(VERSION 3.10)
project(WeatherAnalysisSystem)

set(CMAKE_CXX_STANDARD 17)

# ==== Include Directories ====
include_directories(include)

# ==== Source Files ====
file(GLOB SOURCES "src/*.cpp")

# ==== Main Executable ====
add_executable(weather_analysis ${SOURCES})
target_include_directories(weather_analysis PRIVATE include)

# ==== Test Executable: test_weather ====
if(EXISTS "${CMAKE_SOURCE_DIR}/tests/test_weather.cpp")
    add_executable(test_weather
        tests/test_weather.cpp
        src/WeatherRecord.cpp
        src/WeatherExporter.cpp
    )
    target_include_directories(test_weather PRIVATE include)
endif()

# ==== Test Executable: sample2_viewer ====
if(EXISTS "${CMAKE_SOURCE_DIR}/tests/sample2_viewer.cpp")
    add_executable(sample2_viewer
        tests/sample2_viewer.cpp
        src/WeatherRecord.cpp
        src/WeatherExporter.cpp
    )
    target_include_directories(sample2_viewer PRIVATE include)
endif()

# Test: test_exporter
if(EXISTS "${CMAKE_SOURCE_DIR}/tests/test_exporter.cpp")
    add_executable(test_exporter 
        tests/test_exporter.cpp 
        src/WeatherExporter.cpp 
        src/WeatherRecord.cpp)
    target_include_directories(test_exporter PRIVATE include)
endif()
