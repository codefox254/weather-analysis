#ifndef GRAPH_IMPLOT_H
#define GRAPH_IMPLOT_H

#include <vector>
class WeatherRecord;

class GraphImPlot {
public:
    static void renderGraph(const std::vector<WeatherRecord>& records);
};

#endif // GRAPH_IMPLOT_H
