//
// Created by riedel on 28/10/20.
//

#ifndef GRAFO_H_
#define GRAFO_H_
#include <list>
#include <string>
#include <vector>
#include "Nodo.h"

class Grafo {
 private:
    std::list<Nodo> nodos;
    bool existeNodo(int buscado);
    bool existeNodo(std::string buscado);
    Nodo& buscarNodo(int buscado);
    Nodo& buscarNodo(std::string buscado);
    bool dfsCiclo(int principio, std::vector<int> &visitado);
 public:
    void agregarNodo(Nodo nodo);
    int insertarArista(int origen, int destino);
    int insertarArista(int origen, std::string tagDestino);
    const std::list<Nodo>& getNodos();
    bool esCiclico();
    bool desconectado();
};


#endif  // GRAFO_H_
