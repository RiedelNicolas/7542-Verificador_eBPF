//
// Created by riedel on 2/11/20.
//

#include "PilaProtegida.h"

void PilaProtegida::apilar(std::string recibido) {
    Bloquear b(this->m);
    this->pila.push(recibido);
}

std::string PilaProtegida::desapilar() {
    Bloquear b(this->m);
    if (this->pila.empty()) {  // Si esta vacia se devuelve un string vacio.
        return std::string("");
    }
    std::string top = this->pila.top();
    this->pila.pop();
    return top;
}

