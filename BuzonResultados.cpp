//
// Created by riedel on 2/11/20.
//

#include "BuzonResultados.h"


void BuzonResultados::AgregarResultado(std::string &archivo,
                                       std::string &mensaje) {
    Bloquear b (this->m);
    this->lista.push_back(archivo + mensaje);
}

void BuzonResultados::ordenar() {
    this->lista.sort();
}

