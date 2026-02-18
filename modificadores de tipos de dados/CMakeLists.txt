cmake_minimum_required(VERSION 4.1)
project(modificadores_de_tipos_de_dados C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(modificadores_de_tipos_de_dados
        modificadores_tipos_dados.c)
