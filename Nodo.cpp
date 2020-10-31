//
// Created by riedel on 29/10/20.
//

#include "Nodo.h"



void Nodo::agregar_adyacente(Nodo* adyacente) {
    this->adyacentes.push_back(adyacente);
}

const std::list<Nodo *>& Nodo ::getAdyacentes() {
    return this->adyacentes;
}

int Nodo::obtenerId() {
    return 0;
}

std::string Nodo::obtenerLabel() {
    return std::__cxx11::string();
}

Nodo::Nodo(int id, std::string label) {
    this->id = id;
    this->label = label;
}

Nodo::Nodo(int id) {
    this->id = id;
}
