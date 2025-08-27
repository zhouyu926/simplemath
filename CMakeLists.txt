cmake_minimum_required(VERSION 3.10)
project(simplemath)

add_library(simplemath STATIC src/simplemath.cpp)
target_include_directories(simplemath PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# 自动处理Debug/Release输出路径
set_target_properties(simplemath PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/debug/lib"
    ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/release/lib"
)

install(
    TARGETS simplemath
    EXPORT simplemath-targets
    ARCHIVE DESTINATION lib
    INCLUDES DESTINATION include
)

install(DIRECTORY include/ DESTINATION include)
install(EXPORT simplemath-targets FILE simplemath-config.cmake NAMESPACE simplemath:: DESTINATION share/simplemath)
