#include <iostream>
#include "Grafo.h"
#include <list>

int main() {

    Grafo grafo;
    Instruccion instruccion1("ana", 1);
    Instruccion instruccion2("belen", 2);
    Instruccion instruccion3("carla", 3);

    grafo.agregarNodo(Nodo(instruccion1));
    grafo.agregarNodo(Nodo(instruccion2));
    grafo.agregarNodo(Nodo(instruccion3));
    grafo.insertarArista(1,2);
    grafo.insertarArista(2,"carla");

    std::list<Nodo> nodos = grafo.getNodos();
    return 0;

}
