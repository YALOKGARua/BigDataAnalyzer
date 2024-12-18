#ifndef DATAGENERATOR_H
#define DATAGENERATOR_H

#include <string>

class DataGenerator {
public:
    void generateBigDataFile(const std::string& filename, size_t num_elements);
};

#endif