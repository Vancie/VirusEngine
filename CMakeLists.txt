cmake_minimum_required(VERSION 3.9)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

project(VirusEngine)

add_subdirectory(Sandbox)
add_subdirectory(Virus)
