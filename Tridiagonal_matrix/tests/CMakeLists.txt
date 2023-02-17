cmake_minimum_required(VERSION 3.16)

project(Testing_tridiagonal_matrix)

file(GLOB files "*.cpp")
foreach(filename ${files})
    get_filename_component (TName ${filename} NAME_WE)
    add_executable("${TName}" ${filename})
    add_test(NAME "${TName}" COMMAND ${filename})
    target_link_libraries(${TName} slae gtest gtest_main)
endforeach()