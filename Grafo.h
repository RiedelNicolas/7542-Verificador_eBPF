//
// Created by riedel on 28/10/20.
//

#ifndef GRAFO_H_
#define GRAFO_H_
#include <list>
#include <string>
#include <vector>
#include "Nodo.h"
  // Grafo utilizado para modelar el codigo.
  // Cada nodo es una abstraccion de una linea de codigo.
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
    // Inserta una arista que conecta 2 nodos.
    int insertarArista(int origen, int destino);
    // Inserta una arista que conecta 2 nodos, buscando al segundo por Tag.
    int insertarArista(int origen, std::string tagDestino);
    // Devuelve una referencia a la lista de nodos.
    const std::list<Nodo>& getNodos();
    // Responde si el grafo contiene o no ciclos.
    bool esCiclico();
    // Responde si el grafo tiene nodos inaccesibles o no.
    bool desconectado();
};


#endif  // GRAFO_H_
