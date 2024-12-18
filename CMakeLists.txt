cmake_minimum_required(VERSION 3.10)
project(BigDataProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(big_data_project
    main.cpp
    DataProcessor.cpp
    DataProcessor.h
    DataGenerator.cpp
    DataGenerator.h
    BigDataUtils.cpp
    BigDataUtils.h
)