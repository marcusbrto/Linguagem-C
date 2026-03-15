cmake_minimum_required(VERSION 4.1)
project(matrizes C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(matrizes
        matrizes.c)
