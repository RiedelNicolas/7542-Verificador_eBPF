//
// Created by riedel on 3/11/20.
//

#include "VerificadorEBFP.h"
#include "VerificadorThread.h"
#include <vector>

VerificadorEBFP::VerificadorEBFP(int argc, char **argv) {
    this->cantidadThreads = std::stoi(argv[1]);
    for (int i = 2; i < argc; i++) {
        this->archivos.apilar(argv[i]);
    }
}

void VerificadorEBFP::mostrarResultados() {
    this->resultados.MostrarResultados();
}

void VerificadorEBFP::verificar() {
    std::vector<Thread*> threads;
    for (int i = 0; i < this->cantidadThreads; i++) {
        threads.push_back(new VerificadorThread(
                            this->archivos,
                            this->resultados));
    }

    for (int i = 0; i < this->cantidadThreads; i++) {
        threads[i]->iniciar();
    }

    for (int i = 0; i < this->cantidadThreads; i++) {
        threads[i]->join();
        delete threads[i];
    }
}
