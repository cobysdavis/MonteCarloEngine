//
// Created by Coby Davis on 2023-11-12.
//
#include <vector>
#include "MonteCarloGenerator.h"
#include <random>
#include <iostream>


MonteCarloGenerator::MonteCarloGenerator(int n_paths)
{
    this->n_pathfs= n_paths;
    }

std::vector<float> MonteCarloGenerator::get_paths() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::normal_distribution<> d(0.0, 1.0);
        std::vector<float> paths = {};
        for (auto n=0; n < this->n_paths; n++){
            paths.push_back(d(gen));
        }
        std::cout << "Path size" << std::endl;
        std::cout << paths.size() << std::endl;
        return paths;
    }
