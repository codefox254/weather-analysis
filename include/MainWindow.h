#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QString>
#include <QTextEdit>
#include <QFileDialog>
#include <vector>
#include "WeatherRecord.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void loadCSV();
    void displaySummary();
    void showTrend();
    void showTempChart();
    void showRainChart();

private:
    QWidget *central;
    QPushButton *btnLoadCSV;
    QPushButton *btnSummary;
    QPushButton *btnTrend;
    QPushButton *btnTempChart;
    QPushButton *btnRainChart;
    QTextEdit *outputArea;

    std::vector<WeatherRecord> records;
};

#endif // MAINWINDOW_H
