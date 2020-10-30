//
// Created by riedel on 29/10/20.
//

#include "Nodo.h"

Nodo::Nodo(Instruccion instruccion) {
    this->instruccion = instruccion;
}

Nodo::Nodo() {
    printf("Se creo un nodo por default");
}

void Nodo::agregar_adyacente(Nodo* adyacente) {
    this->adyacentes.push_back(adyacente);
}

std::list<Nodo *>& Nodo ::getAdyacentes() {
    return this->adyacentes;
}

Instruccion Nodo::getInstruccion(){
    return this->instruccion;
}
