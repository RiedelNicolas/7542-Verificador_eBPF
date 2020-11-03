//
// Created by riedel on 3/11/20.
//

#include "VerificadorEBFP.h"

#include "VerificadorThread.h"

VerificadorEBFP::VerificadorEBFP(int argc, char **argv) {
    this->cantidadThreads = std::stoi(argv[1]);
    for(int i = 2; i < argc; i++){
        this->archivos.apilar(argv[i]);
    }
}

int VerificadorEBFP::mostrarResultados() {
    this->resultados.MostrarResultados();
}

int VerificadorEBFP::verificar() {
    std::vector<Thread*> threads;
}
