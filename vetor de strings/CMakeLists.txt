cmake_minimum_required(VERSION 4.1)
project(vetor_de_strings C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(vetor_de_strings
        vetorstrings.c)
