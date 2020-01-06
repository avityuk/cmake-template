add_library(foo_lib STATIC foo.cc foo.h)

add_executable(mybin main.cc)
target_link_libraries(mybin foo_lib)