cmake_minimum_required(VERSION 3.0)

project(prettytables)

option(BUILD_TEST "building test binaries" ON)

set ( MAIN_TEST
    ./example/test.cpp
)

set ( HEADERS
    ${CMAKE_SOURCE_DIR}/include/prettytables.hpp
)

set ( SOURCES
    ${CMAKE_SOURCE_DIR}/sources/prettytables.cpp
)

add_library( ${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})

if(BUILD_TEST)

    add_executable(execut ${MAIN_TEST})

    target_include_directories( 
        execut
        PRIVATE
            ${CMAKE_SOURCE_DIR}/include
    )

    target_link_libraries(execut ${PROJECT_NAME})

endif()