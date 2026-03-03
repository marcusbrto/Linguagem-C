cmake_minimum_required(VERSION 4.1)
project(biblioteca_math_h C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(biblioteca_math_h
        bibliotecamath.c)
