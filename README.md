### README.md

# BigDataAnalyzer

**BigDataAnalyzer** is a console application project designed for generating and processing large sets of numerical data. The project is written in C++ and utilizes standard libraries for file operations and parallel data processing.

## Features

1. **Data Generation**:
   - Creation of files with random numbers.
   - The number of elements in the file can be specified by the user.

2. **Data Reading**:
   - Reading numerical data from files.

3. **Data Processing**:
   - Calculation of the average value of the numbers in the file using parallel processing to enhance performance.

## Project Structure

```
BigDataAnalyzer/
├── CMakeLists.txt
├── main.cpp
├── DataProcessor.cpp
├── DataProcessor.h
├── DataGenerator.cpp
├── DataGenerator.h
├── BigDataUtils.cpp
├── BigDataUtils.h
└── README.md
```

## Files

- **CMakeLists.txt**: Configuration file for building the project using CMake.
- **main.cpp**: Main file that generates large data files and calculates the average value.
- **DataGenerator.h**: Header file for the `DataGenerator` class.
- **DataGenerator.cpp**: Implementation file for the `DataGenerator` class.
- **DataProcessor.h**: Header file for the `DataProcessor` class.
- **DataProcessor.cpp**: Implementation file for the `DataProcessor` class.
- **BigDataUtils.h**: Header file for the `BigDataUtils` class.
- **BigDataUtils.cpp**: Implementation file for the `BigDataUtils` class.
- **README.md**: This file, providing an overview of the project.

## Compilation and Execution

1. **Clone the Repository**:
   ```sh
   git clone https://github.com/yourusername/BigDataAnalyzer.git
   cd BigDataAnalyzer
   ```

2. **Build the Project**:
   ```sh
   mkdir build
   cd build
   cmake ..
   make
   ```

3. **Run the Application**:
   ```sh
   ./big_data_analyzer
   ```

   This will generate a file `big_data.txt` with 1 million random numbers and calculate their average value.

## Dependencies

- CMake (version 3.10 or higher)
- C++17 compatible compiler (e.g., GCC, Clang)

## Contributing

Contributions to the project are welcome! Please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Commit your changes and push to your branch.
4. Open a pull request explaining your changes.
