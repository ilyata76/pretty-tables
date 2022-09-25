cmake_minimum_required(VERSION 3.0)

project(prettytables_demo)

option(BUILD_TEST "building test binaries" ON)

set ( ENTRYPOINT
    ./example/test.cpp
)

set ( HEADERS
    ${CMAKE_SOURCE_DIR}/include/prettytables.hpp
)

set ( SOURCES
    ${CMAKE_SOURCE_DIR}/sources/prettytables.cpp
)

if(BUILD_TEST)
    add_executable(execut ${ENTRYPOINT} ${HEADERS} ${SOURCES})

    target_include_directories( 
        execut
        PRIVATE
            ${CMAKE_SOURCE_DIR}/include
    )
endif()