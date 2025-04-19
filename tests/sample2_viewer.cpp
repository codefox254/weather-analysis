#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>

// Function to safely convert string to float
float safe_stof(const std::string& str) {
    try {
        return std::stof(str);  // Convert to float
    } catch (const std::invalid_argument&) {
        return 0.0f;  // Return 0.0 if conversion fails
    }
}

// Struct to hold the weather record
struct WeatherRecord {
    std::string date;
    float minTemp;
    float maxTemp;
    float rainfall;
    float evaporation;
    float sunshine;
    std::string windGustDir;
    float windGustSpeed;
    std::string windDir9am;
    std::string windDir3pm;
    float windSpeed9am;
    float windSpeed3pm;
    float humidity9am;
    float humidity3pm;
    float pressure9am;
    float pressure3pm;
    float cloud9am;
    float cloud3pm;
    float temp9am;
    float temp3pm;
    std::string rainToday;
    float riskMm;
    std::string rainTomorrow;
};

// Function to display a WeatherRecord
void displayWeatherRecord(const WeatherRecord& record) {
    std::cout << "Date: " << record.date
              << ", MinTemp: " << record.minTemp
              << ", MaxTemp: " << record.maxTemp
              << ", Rainfall: " << record.rainfall
              << ", Evaporation: " << record.evaporation
              << ", Sunshine: " << record.sunshine
              << ", WindGustDir: " << record.windGustDir
              << ", WindGustSpeed: " << record.windGustSpeed
              << ", WindDir9am: " << record.windDir9am
              << ", WindDir3pm: " << record.windDir3pm
              << ", WindSpeed9am: " << record.windSpeed9am
              << ", WindSpeed3pm: " << record.windSpeed3pm
              << ", Humidity9am: " << record.humidity9am
              << ", Humidity3pm: " << record.humidity3pm
              << ", Pressure9am: " << record.pressure9am
              << ", Pressure3pm: " << record.pressure3pm
              << ", Cloud9am: " << record.cloud9am
              << ", Cloud3pm: " << record.cloud3pm
              << ", Temp9am: " << record.temp9am
              << ", Temp3pm: " << record.temp3pm
              << ", RainToday: " << record.rainToday
              << ", RiskMm: " << record.riskMm
              << ", RainTomorrow: " << record.rainTomorrow
              << std::endl;
}

// Function to read the CSV file and populate WeatherRecord objects
void readCSV(const std::string& filename) {
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Error opening the file: " << filename << std::endl;
        return;
    }

    std::string line;
    bool firstLine = true; // To skip the header line

    // Read the file line by line
    while (std::getline(file, line)) {
        if (firstLine) {
            firstLine = false;
            continue; // Skip header line
        }

        std::stringstream ss(line);
        std::string cell;
        WeatherRecord record;

        // Read the CSV fields
        std::getline(ss, record.date, ',');
        std::getline(ss, cell, ','); record.minTemp = safe_stof(cell);
        std::getline(ss, cell, ','); record.maxTemp = safe_stof(cell);
        std::getline(ss, cell, ','); record.rainfall = safe_stof(cell);
        std::getline(ss, cell, ','); record.evaporation = safe_stof(cell);
        std::getline(ss, cell, ','); record.sunshine = safe_stof(cell);
        std::getline(ss, record.windGustDir, ',');
        std::getline(ss, cell, ','); record.windGustSpeed = safe_stof(cell);
        std::getline(ss, record.windDir9am, ',');
        std::getline(ss, record.windDir3pm, ',');
        std::getline(ss, cell, ','); record.windSpeed9am = safe_stof(cell);
        std::getline(ss, cell, ','); record.windSpeed3pm = safe_stof(cell);
        std::getline(ss, cell, ','); record.humidity9am = safe_stof(cell);
        std::getline(ss, cell, ','); record.humidity3pm = safe_stof(cell);
        std::getline(ss, cell, ','); record.pressure9am = safe_stof(cell);
        std::getline(ss, cell, ','); record.pressure3pm = safe_stof(cell);
        std::getline(ss, cell, ','); record.cloud9am = safe_stof(cell);
        std::getline(ss, cell, ','); record.cloud3pm = safe_stof(cell);
        std::getline(ss, cell, ','); record.temp9am = safe_stof(cell);
        std::getline(ss, cell, ','); record.temp3pm = safe_stof(cell);
        std::getline(ss, record.rainToday, ',');
        std::getline(ss, cell, ','); record.riskMm = safe_stof(cell);
        std::getline(ss, record.rainTomorrow);

        // Display the weather record
        displayWeatherRecord(record);
    }

    file.close();
}

int main() {
    std::string filename = "../data/sample1.csv";  // Your file path
    std::cout << "Reading weather data from: " << filename << std::endl;
    readCSV(filename);  // Read and display the CSV data
    return 0;
}
