cmake_minimum_required(VERSION 3.0)

project(vigenere-cipher)

add_executable(vigenere-cipher main.cpp)

install(TARGETS vigenere-cipher RUNTIME DESTINATION bin)
