cmake_minimum_required(VERSION 3.16)
project(2023_kutorkin_SLAU)


set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Werror)

file(GLOB_RECURSE source *.cpp *.h *.hpp)
add_library(2023_KUTORKIN_SLAE INTERFACE ${source})