cmake_minimum_required(VERSION 3.16)
project(SLAU_LIB)


set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Werror)

file(GLOB_RECURSE source *.h)
add_library(SLAU_LIB INTERFACE ${source})