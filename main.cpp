#include "VerificadorEBFP.h"

int main(int argc, char **argv) {
    VerificadorEBFP verificador(argc, argv);
    verificador.verificar();
    verificador.mostrarResultados();
}
