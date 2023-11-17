cmake_minimum_required(VERSION 3.10)


project(project1 C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_subdirectory(googletest)

add_library(solution_lib STATIC solution.h solution.cc)

add_executable(solution solution_main.cc)
target_link_libraries(solution solution_lib)

add_executable(solution_test solution_test.cc)
target_link_libraries(solution_test gtest gtest_main solution_lib)

# Ensure the Google Test include directories are available
target_include_directories(solution_test PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/googletest/googletest/include")


