#include <iostream>
#include "Grafo.h"
#include "Modelador.h"
#include "BuzonResultados.h"

int main(int argc, char **argv) {
    BuzonResultados buzon;
    buzon.AgregarResultado("hola", "jorge");
    buzon.AgregarResultado("ana", "maria");
    buzon.AgregarResultado("bruce","wayne");

    buzon.MostrarResultados();

}
