cmake_minimum_required(VERSION 3.14)
project(simplemath
    VERSION 1.0.0
    LANGUAGES CXX
    DESCRIPTION "A simple math library"
)
include(GNUInstallDirs)
install(
    DIRECTORY include/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
# 添加源文件目录
add_subdirectory(src)


