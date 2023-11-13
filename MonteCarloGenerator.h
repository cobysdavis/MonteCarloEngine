//
// Created by Coby Davis on 2023-11-12.
//
#include <vector>
#ifndef UNTITLED_MONTECARLOGENERATOR_H
#define UNTITLED_MONTECARLOGENERATOR_H

#endif //UNTITLED_MONTECARLOGENERATOR_H

class MonteCarloGenerator {
public:
    MonteCarloGenerator(int n_paths);

    std::vector<float> get_paths();

private:
    int n_paths;
};