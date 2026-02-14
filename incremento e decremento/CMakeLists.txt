cmake_minimum_required(VERSION 4.1)
project(incremento_e_decremento C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(incremento_e_decremento
        main.c)
