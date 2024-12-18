#include "DataProcessor.h"
#include <fstream>
#include <vector>
#include <numeric>
#include <execution>

double DataProcessor::calculateAverage(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "error read: " << filename << std::endl;
        return 0.0;
    }

    std::vector<double> data;
    double value;

    while (file >> value) {
        data.push_back(value);
    }

    file.close();

    if (data.empty()) {
        std::cerr << "no found: " << filename << std::endl;
        return 0.0;
    }

    double sum = std::accumulate(std::execution::par, data.begin(), data.end(), 0.0);
    return sum / data.size();
}