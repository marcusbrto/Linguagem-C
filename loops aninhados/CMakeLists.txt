cmake_minimum_required(VERSION 4.1)
project(loops_aninhados C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(loops_aninhados
        loopaninhado.c)
