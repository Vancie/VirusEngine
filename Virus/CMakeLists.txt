cmake_minimum_required(VERSION 3.9)
project(Virus)

set(
    ENGINE_SOURCES
    src/Virus/Application.cpp
)

add_library(Virus SHARED ${ENGINE_SOURCES})

target_include_directories(Virus PUBLIC ${CMAKE_CURRENT_LIST_DIR}/src)
