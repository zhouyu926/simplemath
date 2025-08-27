cmake_minimum_required(VERSION 3.14)
project(simplemath
    VERSION 1.0.0
    LANGUAGES CXX
    DESCRIPTION "A simple math library"
)
include(GNUInstallDirs)

# 添加源文件目录
add_subdirectory(src)

# 添加导出目标配置
install(EXPORT simplemath-targets
    FILE simplemath-targets.cmake
    NAMESPACE simplemath::
    DESTINATION lib/cmake/simplemath
)

# 添加配置文件包生成
include(CMakePackageConfigHelpers)
configure_package_config_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake/simplemath-config.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/simplemath-config.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/simplemath
)

# 安装配置文件
install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/simplemath-config.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/simplemath
)
