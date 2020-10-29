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
}

std::string Instruccion::getEtiqueta() {
    return (this->etiqueta );
}

std::list<Instruccion*> Instruccion::getAdyacentes() {
    return this->adyacentes;
}

void Instruccion::agregarAdyacente(Instruccion *adyacente) {
    this->adyacentes.push_back(adyacente);
};

