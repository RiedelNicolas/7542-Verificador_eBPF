#include <iostream>
#include "Grafo.h"
#include "Modelador.h"

int main(int argc, char **argv) {

    bool ci;
    Grafo grafo;
    Modelador modelador;
    modelador.modelar(grafo,"test.txt");
    ci = grafo.desconectado();
    std::cout << ci;
    return 0;

}
