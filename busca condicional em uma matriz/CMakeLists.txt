cmake_minimum_required(VERSION 4.1)
project(busca_condicional_em_uma_matriz C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(busca_condicional_em_uma_matriz
        buscacondicionalmatriz.c)
