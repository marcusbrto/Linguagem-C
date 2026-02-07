cmake_minimum_required(VERSION 4.1)
project(operadores_matematicos C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(operadores_matematicos
        operadoresmatematicos.c)
