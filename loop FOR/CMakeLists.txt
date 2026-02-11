cmake_minimum_required(VERSION 4.1)
project(loop_FOR C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(loop_FOR
        loop_for.c)
