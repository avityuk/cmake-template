cmake_minimum_required(VERSION 3.15)
project(cmake_template)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(vendor/googletest)
add_subdirectory(test)