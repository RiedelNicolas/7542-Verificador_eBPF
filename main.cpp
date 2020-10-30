#include <iostream>
#include "Nodo.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Instruccion instruccion("Jorge",5);
    Nodo nodo1(instruccion);
    Nodo nodo2(Instruccion("Mocoreta", 6))
    nodo1.agregar_adyacente(&nodo2);
    return 0;
}
