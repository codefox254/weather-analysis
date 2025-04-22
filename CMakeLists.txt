cmake_minimum_required(VERSION 3.10)
project(WeatherAnalysisSystem)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)

# === Critical PIC Configuration ===
# Force PIC and disable PIE for all targets
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
add_compile_options(-fPIC)
add_link_options(-fPIC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -fno-PIE")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC -fno-PIE")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -no-pie")

# === Qt5 Configuration ===
find_package(Qt5 REQUIRED COMPONENTS Widgets Core)

# Enable Qt's automoc, autouic, and autorcc
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# === Include Directories ===
include_directories(
    include
    includes
    ${Qt5Widgets_INCLUDE_DIRS}
    ${Qt5Core_INCLUDE_DIRS}
)

# === Find Required Packages ===
find_package(CURL REQUIRED)

# === Source Files ===
# === CLI Sources ===
set(CLI_SOURCES
    src/main_cli.cpp  # Use the separate CLI main file
    src/WeatherAPIClient.cpp
    src/WeatherRecord.cpp
    src/WeatherExporter.cpp
    src/WeatherTrendDetection.cpp
    src/GraphASCII.cpp
)

# === GUI Sources ===
set(GUI_SOURCES
    src/main_gui.cpp  # Use the separate GUI main file
    src/MainWindow.cpp
)

# === CLI Executable ===
add_executable(weather_analysis ${CLI_SOURCES})
target_link_libraries(weather_analysis PRIVATE 
    CURL::libcurl
)

# === GUI Executable ===
add_executable(weather_analysis_gui ${GUI_SOURCES})
target_link_libraries(weather_analysis_gui PRIVATE 
    Qt5::Widgets 
    Qt5::Core
)

# Explicitly set Qt-related properties for GUI target
set_target_properties(weather_analysis_gui PROPERTIES
    AUTOMOC ON
    AUTOUIC ON
    POSITION_INDEPENDENT_CODE ON
)

# === Test Configuration ===
function(add_test_executable TEST_NAME SOURCES)
    add_executable(${TEST_NAME} ${SOURCES})
    target_include_directories(${TEST_NAME} PRIVATE include)
    set_target_properties(${TEST_NAME} PROPERTIES
        POSITION_INDEPENDENT_CODE ON
    )
    target_link_libraries(${TEST_NAME} PRIVATE 
        CURL::libcurl  # Common dependency
    )
endfunction()

# Test: test_weather
if(EXISTS "${CMAKE_SOURCE_DIR}/tests/test_weather.cpp")
    add_test_executable(test_weather
        tests/test_weather.cpp
        src/WeatherRecord.cpp
        src/WeatherExporter.cpp
        src/WeatherTrendDetection.cpp
    )
endif()

# Test: sample2_viewer
if(EXISTS "${CMAKE_SOURCE_DIR}/tests/sample2_viewer.cpp")
    add_test_executable(sample2_viewer
        tests/sample2_viewer.cpp
        src/WeatherRecord.cpp
        src/WeatherExporter.cpp
        src/WeatherTrendDetection.cpp
    )
endif()

# Test: test_exporter
if(EXISTS "${CMAKE_SOURCE_DIR}/tests/test_exporter.cpp")
    add_test_executable(test_exporter
        tests/test_exporter.cpp
        src/WeatherExporter.cpp
        src/WeatherRecord.cpp
        src/WeatherTrendDetection.cpp
    )
endif()

# Weather API Test
if(EXISTS "${CMAKE_SOURCE_DIR}/tests/test_weather_api.cpp")
    add_test_executable(test_weather_api
        tests/test_weather_api.cpp
        src/WeatherAPIClient.cpp
        src/WeatherRecord.cpp
    )
endif()
