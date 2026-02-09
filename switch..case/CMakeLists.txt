cmake_minimum_required(VERSION 4.1)
project(switch__case C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(switch__case
        switch_case.c)
