cmake_minimum_required(VERSION 3.31)
project(ProblemSolving)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProblemSolving main.cpp
        Problems/Problem1.cpp
        Problems/Problem2.cpp
        Problems/Problem3.cpp
        Problems/Problem4.cpp
        Problems/Problem5.cpp
        Problems/Problem6.cpp)
