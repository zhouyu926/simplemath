if(SIMPLEMATH_BUILD_SHARED)
    add_library(simplemath SHARED "")
    target_compile_definitions(simplemath 
        PRIVATE SIMPLEMATH_EXPORTS
        PUBLIC SIMPLEMATH_API=__declspec(dllimport)
    )
else()
    add_library(simplemath STATIC "")
endif()

# 添加源文件
target_sources(simplemath
    PRIVATE 
        simplemath.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/..
        FILES
            ${CMAKE_CURRENT_SOURCE_DIR}/../include/simplemath.h

)

install(TARGETS simplemath
    EXPORT simplemath-targets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/simplemath
)
