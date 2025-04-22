#include "MainWindow.h"
#include <QMessageBox>
#include <sstream>
#include <fstream>
#include <iostream>
#include "WeatherTrendDetection.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), central(new QWidget(this)) {
    
    btnLoadCSV = new QPushButton("📂 Load CSV");
    btnSummary = new QPushButton("📊 Display Summary");
    btnTrend = new QPushButton("📈 Show Trend");
    btnTempChart = new QPushButton("🌡️ Temperature Chart");
    btnRainChart = new QPushButton("🌧️ Rainfall Chart");
    outputArea = new QTextEdit();
    outputArea->setReadOnly(true);

    auto *layout = new QVBoxLayout();
    layout->addWidget(btnLoadCSV);
    layout->addWidget(btnSummary);
    layout->addWidget(btnTrend);
    layout->addWidget(btnTempChart);
    layout->addWidget(btnRainChart);
    layout->addWidget(outputArea);

    central->setLayout(layout);
    setCentralWidget(central);
    setWindowTitle("Weather Analysis System");

    connect(btnLoadCSV, &QPushButton::clicked, this, &MainWindow::loadCSV);
    connect(btnSummary, &QPushButton::clicked, this, &MainWindow::displaySummary);
    connect(btnTrend, &QPushButton::clicked, this, &MainWindow::showTrend);
    connect(btnTempChart, &QPushButton::clicked, this, &MainWindow::showTempChart);
    connect(btnRainChart, &QPushButton::clicked, this, &MainWindow::showRainChart);
}

MainWindow::~MainWindow() {}

void MainWindow::loadCSV() {
    QString filename = QFileDialog::getOpenFileName(this, "Open CSV", "", "*.csv");
    if (filename.isEmpty()) return;

    records.clear();
    std::ifstream file(filename.toStdString());
    std::string line;
    std::getline(file, line); // skip header

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, minStr, maxStr, rainStr;
        if (!std::getline(ss, date, ',')) continue;
        if (!std::getline(ss, minStr, ',')) continue;
        if (!std::getline(ss, maxStr, ',')) continue;
        if (!std::getline(ss, rainStr, ',')) continue;

        try {
            double min = std::stod(minStr);
            double max = std::stod(maxStr);
            double rain = std::stod(rainStr);
            records.emplace_back(date, min, max, rain);
        } catch (...) {
            std::cerr << "Invalid line: " << line << "\n";
        }
    }

    outputArea->setText("✅ CSV Loaded: " + QString::number(records.size()) + " records.");
}

void MainWindow::displaySummary() {
    if (records.empty()) {
        QMessageBox::warning(this, "Warning", "Please load CSV first.");
        return;
    }

    double totalMin = 0, totalMax = 0, totalRain = 0;
    for (const auto &r : records) {
        totalMin += r.getMinTemp();
        totalMax += r.getMaxTemp();
        totalRain += r.getRainfall();
    }

    int n = records.size();
    std::stringstream ss;
    ss << "📊 Weather Summary:\n";
    ss << "Avg Min Temp: " << totalMin / n << "\n";
    ss << "Avg Max Temp: " << totalMax / n << "\n";
    ss << "Total Rainfall: " << totalRain << "\n";

    outputArea->setText(QString::fromStdString(ss.str()));
}

void MainWindow::showTrend() {
    if (records.empty()) {
        QMessageBox::warning(this, "Warning", "Load CSV first.");
        return;
    }

    std::string trend = WeatherTrendDetection::detectTrend(records);
    outputArea->setText(QString::fromStdString("📈 Trend:\n" + trend));
}

void MainWindow::showTempChart() {
    outputArea->setText("🌡️ Temperature Chart coming soon...");
}

void MainWindow::showRainChart() {
    outputArea->setText("🌧️ Rainfall Chart coming soon...");
}
