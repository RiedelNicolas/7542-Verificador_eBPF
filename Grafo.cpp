//
// Created by riedel on 28/10/20.
//

#include "Grafo.h"
#include <vector>

Grafo::Grafo(){

}

void Grafo::agregarNodo(Nodo nodo) {
    this->nodos.push_back(nodo);
}

int Grafo::insertarArista(int origen, int destino) {
    if( !existeNodo(origen) || !existeNodo(destino) ){
        return -1;
    }
    buscarNodo(origen).agregar_adyacente(&buscarNodo(destino));
    return 0;
}

int Grafo::insertarArista(int origen, std::string tagDestino) {
    if( !existeNodo(origen) || !existeNodo(tagDestino) ){
        return -1;
    }
    buscarNodo(origen).agregar_adyacente(&buscarNodo(tagDestino));
    return 0;
}

const std::list<Nodo>& Grafo::getNodos() {
    return this->nodos;
}

bool Grafo::existeNodo(int buscado) {

    for (auto &i : this->nodos) {
         if ( i.obtenerId() == buscado ){
             return true;
         }
    }
    return false;
}

bool Grafo::existeNodo(std::string buscado) {

    for (auto &i : this->nodos) {
        if ( i.obtenerLabel() == buscado ){
            return true;
        }
    }
    return false;
}

Nodo& Grafo::buscarNodo(int buscado) {

    for (auto &i : this->nodos) {
        if ( i.obtenerId() == buscado ){
            return i;
        }
    }//default,se supone que siempre se recibe un nodo valido.
    return this->nodos.back();
}

Nodo& Grafo::buscarNodo(std::string buscado) {

    for (auto &i : this->nodos) {
        if ( i.obtenerLabel() == buscado ){
            return i;
        }
    }
    return this->nodos.back();
}

bool Grafo::esCiclico() {
   std::vector<bool> visitados (this->nodos.size(), false);
    return false;
}

void Grafo::dfs(int principio, std::vector<bool> &visitado) {
    visitado[principio] = true;
    Nodo &primer = buscarNodo(principio);
    for (auto &i : primer.getAdyacentes()) {
        if (!visitado[i->obtenerId()]) {
            dfs(i->obtenerId(), visitado);
        }
    }
}

bool Grafo::desconectado(){
    std::vector<bool> visitados (this->nodos.size(), false);
    for(bool i : visitados){
        if(i == false){
            return true;
        }
    }
    return false;
}

