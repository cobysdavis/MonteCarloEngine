cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_executable(untitled main.cpp
        MonteCarloGenerator.cpp
        MonteCarloGenerator.h)
