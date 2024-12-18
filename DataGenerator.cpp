#include "DataGenerator.h"
#include <fstream>
#include <random>

void DataGenerator::generateBigDataFile(const std::string& filename, size_t num_elements) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "error: " << filename << std::endl;
        return;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 1000.0);

    for (size_t i = 0; i < num_elements; ++i) {
        file << dis(gen) << "\n";
    }

    file.close();
}