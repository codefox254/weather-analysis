# 🌦️ Weather Analysis System

A modular, testable C++ application for loading, analyzing, and exporting weather data from CSV files. This system is designed with extensibility in mind, allowing integration of features like statistical summaries, data visualization, and climate trend detection.

---

---

## 🚀 Features

✅ Read and parse weather data from CSV files  
✅ Store weather attributes like date, min/max temperature, and rainfall  
✅ Export records to `.txt` and `.csv` formats  
✅ Display summaries such as average temperatures and total rainfall  
✅ Fully tested using assertions for data correctness and file exports  
✅ Error handling for invalid/malformed data rows

---

## 🧪 Sample Weather Record Format

| Date       | Min Temp (°C) | Max Temp (°C) | Rainfall (mm) |
|------------|---------------|----------------|----------------|
| 2024-01-01 | 20.0          | 25.0           | 2.3            |

CSV headers:
```csv
Date,MinTemp,MaxTemp,Rainfall
2024-01-01,20.0,25.0,2.3


 ## Build Instructions
📦 Requirements

    C++17 or higher

    CMake 3.15+

    A C++ compiler like g++ or clang++

🧱 Build & Run

git clone https://github.com/yourusername/weather-analysis.git
cd weather-analysis

# Create build directory
mkdir build && cd build

# Run CMake and build
cmake ..
make


Running Tests

Run the test executables after build:

# Run CSV import and record tests
./test_weather

# Run exporter module tests
./test_exporter

Design Philosophy

This system was built with:

    Modularity – each component (record, exporter, analysis) is standalone

    Testability – easy to verify behavior at every level

    Scalability – ready to integrate charts, machine learning, or GUI

     Author

Your Name
📧 frankode254@gmail.com
🌐 GitHub @codefox254