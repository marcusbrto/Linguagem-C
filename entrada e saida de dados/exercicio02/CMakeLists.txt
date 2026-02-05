cmake_minimum_required(VERSION 4.1)
project(projeto02 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(projeto02
        entradaesaidadedados.c)
