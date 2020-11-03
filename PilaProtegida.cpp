//
// Created by riedel on 2/11/20.
//

#include "PilaProtegida.h"

void PilaProtegida::apilar(std::string recibido) {
    Bloquear b (this->m);
    this->pila.push(recibido);
}

std::string PilaProtegida::desapilar() {
    Bloquear b (this->m);
    std::string top = this->pila.top();
    this->pila.pop();
    return top;
}

bool PilaProtegida::estaVacia() {
    Bloquear b (this->m);
    return this->pila.empty();
}
