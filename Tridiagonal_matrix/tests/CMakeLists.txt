include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_subdirectory(Google_tests/lib)

add_executable(test_1 test.cpp)
add_test(test_1 COMMAND test.cpp)
target_link_libraries(test_1 gtest gtest_main)