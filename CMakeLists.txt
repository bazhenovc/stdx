
project(stdx)

add_subdirectory(external/fmt)

file(GLOB SOURCES code/*.cc code/*.hh
    code/stdx/*.cc code/stdx/*.hh)

foreach(source IN LISTS SOURCES)
    get_filename_component(source_path "${source}" PATH)
    string(REPLACE "/" "\\" source_path_msvc "${source_path}")
    source_group("${source_path_msvc}" FILES "${source}")
endforeach()

add_library(stdx STATIC ${SOURCES})
target_link_libraries(stdx fmt)
