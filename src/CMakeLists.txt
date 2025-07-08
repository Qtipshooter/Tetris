# CMake Ver.
cmake_minimum_required(VERSION 3.16)

# Init
set(ProjectName "Tetris")
project(${ProjectName} VERSION 0.0.1)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

# Main Target
add_executable(${ProjectName} main.cpp)

# SDL connection
add_subdirectory(libs/SDL EXCLUDE_FROM_ALL)

# Lib Linkers
target_link_libraries(${ProjectName} PRIVATE SDL3::SDL3)
