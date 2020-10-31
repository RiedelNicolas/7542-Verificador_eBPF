//
// Created by riedel on 29/10/20.
//

#include "Nodo.h"



void Nodo::agregar_adyacente( Nodo* adyacente) {
    this->adyacentes.push_back(adyacente);
}

const std::list<Nodo *>& Nodo ::getAdyacentes() {
    return this->adyacentes;
}

const int & Nodo::obtenerId() {
    return this->id;
}

const std::string & Nodo::obtenerLabel() {
    return this->label;
}

Nodo::Nodo(const int& id, const std::string& label) {
    this->id = id;
    this->label = label;
}

Nodo::Nodo(const int& id) {
    this->id = id;
}
