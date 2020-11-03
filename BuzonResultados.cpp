//
// Created by riedel on 2/11/20.
//

#include "BuzonResultados.h"
#include <iostream>


void BuzonResultados::agregarResultado(std::string archivo,
                                       std::string mensaje) {
    Bloquear b (this->m);
    this->lista.push_back(archivo +" " + mensaje);
}

void BuzonResultados::ordenar() {
    this->lista.sort();
}

void BuzonResultados::MostrarResultados() {
    this->ordenar();
    for(auto &i: this->lista){
        std::cout << i << std::endl;
    }
}

void BuzonResultados::agregarConBucle(std::string path) {
    agregarResultado(path, "FAIL: cycle detected");
}

void BuzonResultados::agregarSinUsar(std::string path) {
    agregarResultado(path,"FAIL: unused instructions detected" );
}

void BuzonResultados::agregarExitoso(std::string path) {
    agregarResultado(path,"GOOD" );
}
