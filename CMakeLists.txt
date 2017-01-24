
project(stdx)

add_subdirectory(external/fmt)

add_library(stdx STATIC code/stdx.cc)
target_link_libraries(stdx fmt)
