cmake_minimum_required(VERSION 3.0)

project(caesar-decrypt)

add_executable(caesar-decrypt main.cpp)

install(TARGETS caesar-decrypt RUNTIME DESTINATION bin)
