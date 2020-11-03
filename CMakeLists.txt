cmake_minimum_required(VERSION 3.17)
project(7542_Verificador_eBPF)

set(CMAKE_CXX_STANDARD 14)

add_executable(7542_Verificador_eBPF main.cpp Grafo.cpp Instruccion.cpp Grafo.h Instruccion.h Nodo.cpp Nodo.h Modelador.cpp Modelador.h Parseador.cpp Parseador.h Thread.cpp Thread.h Bloquear.cpp Bloquear.h PilaProtegida.cpp PilaProtegida.h BuzonResultados.cpp BuzonResultados.h)

target_link_options(7542_Verificador_eBPF PRIVATE -lm -pthread)

target_compile_options (7542_Verificador_eBPF PRIVATE -std=c++11 -Wall -Werror -pedantic -pedantic-errors
        -O3 -ggdb -DDEBUG -fno-inline )
