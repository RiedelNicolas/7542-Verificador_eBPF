#include <iostream>
#include "Grafo.h"
#include "Modelador.h"
#include <list>

int main() {
    bool ci;
    Grafo grafo;
    Modelador modelador;
    modelador.modelar(grafo,"test.txt");
    ci = grafo.esCiclico();
    std::cout << ci;
    return 0;

}
