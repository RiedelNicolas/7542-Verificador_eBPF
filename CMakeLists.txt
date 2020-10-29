cmake_minimum_required(VERSION 3.17)
project(7542_Verificador_eBPF)

set(CMAKE_CXX_STANDARD 14)

add_executable(7542_Verificador_eBPF main.cpp Grafo.cpp Instruccion.cpp Grafo.h Instruccion.h Nodo.cpp Nodo.h)