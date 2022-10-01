cmake_minimum_required(VERSION 3.0)

project(prettytables)

option(BUILD_TEST "building test binaries" ON)

set ( MAIN_TEST
    ./example/test.cpp
)

set ( HEADERS
    ${CMAKE_CURRENT_LIST_DIR}/include/tia/prettytables.hpp
)

set ( SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/sources/prettytables.cpp
)

add_library( ${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})

if(BUILD_TEST)

    add_executable(main_test ${MAIN_TEST})

    target_include_directories( 
        main_test
        PRIVATE
            ${CMAKE_CURRENT_LIST_DIR}/include
    )

    target_link_libraries(main_test ${PROJECT_NAME})
endif()