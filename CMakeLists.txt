cmake_minimum_required(VERSION 3.25)
project(912_clion)

set(CMAKE_CXX_STANDARD 14)

include_directories(Vector)

add_executable(912_clion
        Vector/vector.cpp
        Vector/vector.h)
