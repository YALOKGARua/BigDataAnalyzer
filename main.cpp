#include <iostream>
#include "DataGenerator.h"
#include "DataProcessor.h"

int main() {
    const std::string filename = "big_data.txt";
    const size_t num_elements = 1000000;

    DataGenerator generator;
    generator.generateBigDataFile(filename, num_elements);

    DataProcessor processor;
    double average = processor.calculateAverage(filename);
    std::cout << "value: " << average << std::endl;

    return 0;
}