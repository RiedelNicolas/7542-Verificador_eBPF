#include <iostream>
#include "Grafo.h"
#include <list>

int main() {

    Grafo grafo;

    grafo.agregarNodo(Nodo(1,"ana"));
    grafo.agregarNodo(Nodo(2,"belen"));
    grafo.agregarNodo(Nodo(Nodo(3,"carla")));
    grafo.insertarArista(1,2);
    grafo.insertarArista(2,"carla");

    std::list<Nodo> nodos = grafo.getNodos();
    return 0;

}
