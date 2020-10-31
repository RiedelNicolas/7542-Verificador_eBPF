#include <iostream>
#include "Grafo.h"
#include "Modelador.h"
#include <list>

int main() {
    Grafo grafo;
    Modelador modelador;
    modelador.modelar(grafo,"test.txt");

    return 0;

}
