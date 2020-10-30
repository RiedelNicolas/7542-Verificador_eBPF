//
// Created by riedel on 29/10/20.
//

#include "Nodo.h"

Nodo::Nodo(Instruccion& instruccion) {
    this->instruccion = instruccion;
}

void Nodo::agregar_adyacente(Nodo* adyacente) {
    this->adyacentes.push_back(adyacente);
}

const std::list<Nodo *>& Nodo ::getAdyacentes() {
    return this->adyacentes;
}

Instruccion Nodo::getInstruccion(){
    return this->instruccion;
}
