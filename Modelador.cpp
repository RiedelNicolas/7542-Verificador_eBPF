//
// Created by riedel on 30/10/20.
//

#include "Modelador.h"

Modelador::Modelador(std::string archivo) {
    this->archivo.open( archivo.c_str() );
    if( ! (this->archivo.is_open() ) ){
        throw ("No se pudo abrir correctamente el archivo :"
        + archivo);
    }
}

int Modelador::cargarInstrucciones(Grafo &grafo) {
    return 0;
}

int Modelador::relacionarInstrucciones(Grafo &grafo) {
    return 0;
}

Modelador::~Modelador() {
    this->archivo.close();
}

