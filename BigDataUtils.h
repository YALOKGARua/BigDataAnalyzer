#ifndef BIGDATAUTILS_H
#define BIGDATAUTILS_H

#include <string>
#include <vector>

class BigDataUtils {
public:
    static std::vector<double> readDataFromFile(const std::string& filename);
};

#endif