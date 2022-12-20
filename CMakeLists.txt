cmake_minimum_required(VERSION 3.25)
include(cmake/CPM.cmake)

CPMAddPackage("gh:pszem0c/libA@1.0.0")
CPMAddPackage("gh:pszem0c/libB@1.0.0")

project(consumer)

set(CMAKE_CXX_STANDARD 20)

add_executable(consumer)

target_sources(consumer PRIVATE src/main.cpp)

target_link_libraries(consumer PRIVATE libA libB)
