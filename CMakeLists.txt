cmake_minimum_required(VERSION 3.7)

project(ElvesGoneRouge)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(ElvesGoneRouge main.c)
target_link_libraries(ElvesGoneRouge ${SDL2_LIBRARIES})
