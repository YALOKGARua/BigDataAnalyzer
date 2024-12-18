#include "BigDataUtils.h"
#include <fstream>
#include <vector>

std::vector<double> BigDataUtils::readDataFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "error: " << filename << std::endl;
        return {};
    }

    std::vector<double> data;
    double value;

    while (file >> value) {
        data.push_back(value);
    }

    file.close();

    return data;
}