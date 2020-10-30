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
    if( !existeNodo(origen) || !existeNodo(destino) ){
        return -1;
    }
    buscarNodo(origen)->agregar_adyacente(buscarNodo(destino));
    return 0;
}

int Grafo::insertarArista(int origen, std::string tagDestino) {
    if( !existeNodo(origen) || !existeNodo(tagDestino) ){
        return -1;
    }
    buscarNodo(origen)->agregar_adyacente(buscarNodo(tagDestino));
    return 0;
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

Nodo *Grafo::buscarNodo(int buscado) {

    for (auto i : this->nodos) {
        if ( i.getInstruccion().getNum() == buscado ){
            return i;
        }
    }

    return nullptr;
}

Nodo *Grafo::buscarNodo(std::string buscado) {

    for (auto i : this->nodos) {
        if ( i.getInstruccion().getEtiqueta() == buscado ){
            return i;
        }
    }

    return nullptr;
}

