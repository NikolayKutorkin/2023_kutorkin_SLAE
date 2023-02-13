cmake_minimum_required(VERSION 3.16)

project(Tridiagonal_matrix)

add_library(Tridiagonal_matrix_algorithm src/Tridiagonal_matrix.cpp src/Tridiagonal_matrix_algorithm.cpp)

add_executable(testing tests/test.cpp)

target_link_libraries(testing PRIVATE Tridiagonal_matrix_algorithm gtest pthread)