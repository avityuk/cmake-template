project(tests)

include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(../ ../vendor/googletest/googletest/include ../vendor/googletest/googlemock/include)

add_executable(tests_run foo_test.cc)
target_link_libraries(tests_run foo_lib)
target_link_libraries(tests_run gmock gtest gtest_main)