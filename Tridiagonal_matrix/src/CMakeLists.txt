cmake_minimum_required(VERSION 3.24)

project(Tridiagonal_matrix)

file(GLOB_RECURSE source *.hpp *.h *.cpp)
add_library(Tridiagonal_matrix INTERFACE ${source})