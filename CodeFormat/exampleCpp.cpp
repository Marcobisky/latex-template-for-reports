#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// A function to demonstrate lambdas and algorithms
std::vector<double> generateValues(int n, std::function<double(int)> func) {
    std::vector<double> values(n);
    for (int i = 0; i < n; ++i) {
        values[i] = func(i);
    }
    return values;
}

// A function to demonstrate pointers and dynamic memory
double* computeSquares(int n) {
    double* squares = new double[n];
    for (int i = 0; i < n; ++i) {
        squares[i] = i * i; // Compute square of i
    }
    return squares;
}

int main() {
    // Demonstrating lambdas and STL
    auto values = generateValues(10, [](int x) { return x * 2.5; });
    std::cout << "Generated Values: ";
    for (const auto& val : values) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Demonstrating dynamic memory and pointers
    int n = 5;
    double* squares = computeSquares(n);
    std::cout << "Squares: ";
    for (int i = 0; i < n; ++i) {
        std::cout << squares[i] << " ";
    }
    std::cout << std::endl;

    delete[] squares; // Free dynamically allocated memory

    return 0;
}