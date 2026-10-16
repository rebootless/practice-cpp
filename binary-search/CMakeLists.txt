cmake_minimum_required(VERSION 3.0)

project(binary-search)

add_executable(binary-search main.cpp)

install(TARGETS binary-search RUNTIME DESTINATION bin)
