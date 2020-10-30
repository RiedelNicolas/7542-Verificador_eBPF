//
// Created by riedel on 28/10/20.
//

#include "Grafo.h"

Grafo::Grafo(){

}

void Grafo::agregarNodo(Nodo nodo) {
    this->nodos.push_back(nodo);
}

int Grafo::insertarArista(int origen, int destino) {
    return 0;
}

int Grafo::insertarArista(int origen, std::string tagDestino) {

}

std::list<Nodo> *Grafo::getNodos() {
    return &(this->nodos);
}

bool Grafo::existeNodo(int buscado) {

    for (auto i : this->nodos) {
         if ( i.getInstruccion().getNum() == buscado ){
             return true;
         }
    }
    return false;
}

bool Grafo::existeNodo(std::string buscado) {

    for (auto i : this->nodos) {
        if ( i.getInstruccion().getEtiqueta() == buscado ){
            return true;
        }
    }
    return false;
}

