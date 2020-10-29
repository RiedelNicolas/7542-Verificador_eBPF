//
// Created by riedel on 28/10/20.
//

#include "Instruccion.h"

Instruccion::Instruccion(std::string etiqueta, int numInstruccion) {
this->etiqueta = etiqueta;
this->numInstruccion = numInstruccion;
};

Instruccion::Instruccion(int numInstruccion ){
    this->numInstruccion = numInstruccion;
};