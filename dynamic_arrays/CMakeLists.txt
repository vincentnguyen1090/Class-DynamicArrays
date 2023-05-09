cmake_minimum_required(VERSION 3.24)
project(dynamic_arrays)

set(CMAKE_CXX_STANDARD 17)

add_executable(dynamic_arrays main.cpp Vector.cpp Vector.h Shallow.cpp Shallow.h Deep.cpp Deep.h)
