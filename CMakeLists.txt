cmake_minimum_required(VERSION 3.24)
project(chess)

set(CMAKE_CXX_STANDARD 17)

add_executable(chess main.cpp Display.cpp Display.h Figure.cpp Figure.h)
