//
// Created by riedel on 28/10/20.
//

#include "Instruccion.h"

Instruccion::Instruccion() {
    this->numInstruccion = -1;
};

Instruccion::Instruccion(std::string etiqueta, int numInstruccion) {
this->etiqueta = etiqueta;
this->numInstruccion = numInstruccion;
}

Instruccion::Instruccion(int numInstruccion ){
    this->numInstruccion = numInstruccion;
}

std::string Instruccion::getEtiqueta() {
    return (this->etiqueta );
}

int Instruccion::getNum() {
    return (this->numInstruccion);
}




