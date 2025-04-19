cmake_minimum_required(VERSION 3.10)
project(WeatherAnalysisSystem)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Sources
file(GLOB SOURCES "src/*.cpp")

# Executable
add_executable(weather_analysis ${SOURCES})
