#include <iostream>
#include "MonteCarloGenerator.h"
#include <optional>
#include <algorithm>
#include <numeric>

int main() {
    auto mc = MonteCarloGenerator(10000);
    auto paths = mc.get_paths();
//    for (auto p : paths){
//        std::cout << p << std::endl;
//    }
    double average = std::accumulate(paths.begin(), paths.end(), 0.0) / paths.size();
    double standard_deviation = sqrt(std::accumulate(paths.begin(), paths.end(), 0.0) / (paths.size() - 1));
    std::cout << "The average is " << average << std::endl;
    std::cout << "The standard deviation is " << standard_deviation << std::endl;

    return 0;
}