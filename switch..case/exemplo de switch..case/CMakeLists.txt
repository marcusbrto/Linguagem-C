cmake_minimum_required(VERSION 4.1)
project(exemplo_de_switch__case C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(exemplo_de_switch__case
        switchcase.c)
