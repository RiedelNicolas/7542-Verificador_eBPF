//
// Created by riedel on 30/10/20.
//

#include "Modelador.h"

#include <fstream>
#include <sstream>

Modelador::Modelador() {
}

int Modelador::cargarInstrucciones(Grafo &grafo) {
    std::string label;
    int i = 0;
    for (auto const& linea : this->lineas) {
         label = parseador.encontrarLabel(linea);
         grafo.agregarNodo( Nodo(i,label) );
         i++;
    }
}

int Modelador::relacionarInstrucciones(Grafo &grafo) {
    std::string ins;
    int i = 0;
    for (auto const& linea : this->lineas) {
        ins = parseador.encontrarInstruccion(linea);
    }
}

Modelador::~Modelador() {
}

int Modelador::modelar(Grafo &grafo, std::string path) {
    if( this->cargarLineas(path) != 0  ){
        return -1;
    }
    this->cargarInstrucciones(grafo);
    this->relacionarInstrucciones(grafo);
    return 0;
}

int Modelador::cargarLineas(std::string path) {
    std::ifstream archivo(path);

    if( !archivo.is_open() ) return -1;

    std::string linea;

    while (std::getline(archivo, linea) ) {
        std::istringstream iss(linea);
        this->lineas.push_back(linea);
    }
    return 0;
}

