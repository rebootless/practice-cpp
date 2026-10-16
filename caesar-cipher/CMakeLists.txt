cmake_minimum_required(VERSION 3.0)

project(caesar-cipher)

add_executable(caesar-cipher main.cpp)

install(TARGETS caesar-cipher RUNTIME DESTINATION bin)
