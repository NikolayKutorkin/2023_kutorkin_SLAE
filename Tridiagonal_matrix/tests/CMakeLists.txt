add_subdirectory(googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

file(GLOB_RECURSE TEST_SOURCES test_*.cpp)


# foreach(TEST_FILE IN LISTS TEST_SOURCES)
#     get_filename_component(TEST_FILE_NAME ${TEST_FILE} NAME_WE)
#     set(EXECUTABLE_NAME run_${TEST_FILE_NAME})
#     add_executable(${EXECUTABLE_NAME} ${TEST_FILE})
#     target_link_libraries(
#             ${EXECUTABLE_NAME}
#             2023_kutorkin_SLAU	# Подключаем проект
#             gtest		# Подключаем библиотеку gtest
#             gtest_main	# Подключаем библиотеку gtest
#             pthread
#     )
#     message("TEST_FILE: ${TEST_FILE}")
#     add_test(NAME ${EXECUTABLE_NAME} COMMAND ${EXECUTABLE_NAME})
# endforeach()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(test_1 test_1.cpp)
add_test(test_1 COMMAND test_1.cpp)
target_link_libraries(test_1 gtest gtest_main pthread)