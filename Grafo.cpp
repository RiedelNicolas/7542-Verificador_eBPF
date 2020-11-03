//
// Created by riedel on 28/10/20.
//

#include "Grafo.h"
#include <vector>

enum Estado {BLANCO, GRIS, NEGRO};  // Para modelar DFS.


void Grafo::agregarNodo(Nodo nodo) {
    this->nodos.push_back(nodo);
}

int Grafo::insertarArista(int origen, int destino) {
    if ( !existeNodo(origen) || !existeNodo(destino) ) {
        return -1;
    }
    buscarNodo(origen).agregar_adyacente(&buscarNodo(destino));
    return 0;
}

int Grafo::insertarArista(int origen, std::string tagDestino) {
    if ( !existeNodo(origen) || !existeNodo(tagDestino) ) {
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
         if ( i.obtenerId() == buscado ) {
             return true;
         }
    }
    return false;
}

bool Grafo::existeNodo(std::string buscado) {
    for (auto &i : this->nodos) {
        if ( i.obtenerLabel() == buscado ) {
            return true;
        }
    }
    return false;
}

Nodo& Grafo::buscarNodo(int buscado) {
    for (auto &i : this->nodos) {
        if ( i.obtenerId() == buscado ) {
            return i;
        }
    }  // default,se supone que siempre se recibe un nodo valido.
    return this->nodos.back();
}

Nodo& Grafo::buscarNodo(std::string buscado) {
    for (auto &i : this->nodos) {
        if ( i.obtenerLabel() == buscado ) {
            return i;
        }
    }
    return this->nodos.back();
}

bool Grafo::esCiclico() {
    std::vector<int> estados(this->nodos.size(), BLANCO);
     for (auto &i : this->nodos) {
         if ( estados[ i.obtenerId() ] == BLANCO ) {
             if ( dfsCiclo(i.obtenerId(), estados) == true ) {
                 return true;
             }
         }
     }
     return false;
}
// Implementacion de DFS con colores.
// Blanco representa nunca accedido
// Gris significa que esta en proceso de recorrer vecinos.
// Negro es que se recorrieron todos los vecinos correctamente.
bool Grafo::dfsCiclo(int principio, std::vector<int>& estados) {
    estados[principio] = GRIS;
    for ( auto &i : buscarNodo(principio).getAdyacentes() ) {
        if (estados[i->obtenerId()] == GRIS) {
            return true;
        }
        if (estados[i->obtenerId()] == BLANCO) {
            if (dfsCiclo(i->obtenerId(), estados )) {
                return true;
            }
        }
    }
    estados[principio] = NEGRO;
    return false;
}
// Si en DFS desde la raiz no se marcan
// todos los nodos es que hay no accesibles.-
bool Grafo::desconectado() {
    std::vector<int> estados(this->nodos.size(), BLANCO);
    dfsCiclo(0, estados);
    for (const int &i : estados) {
        if (i == BLANCO) return true;
    }
    return false;
}
