//
// Created by riedel on 30/10/20.
//

#include "Modelador.h"

#include <string>
#include <vector>


void Modelador::cargarInstrucciones(Grafo &grafo) {
    for (auto& ins : this->instrucciones) {
         std::string label = ins.getEtiqueta();
         int i = ins.getNum();
         grafo.agregarNodo(Nodo(i, label));
    }
}

void Modelador::relacionarInstrucciones(Grafo &grafo) {
    for (auto& ins : this->instrucciones) {
        std::vector<std::string>& args = ins.getArgs();
        int i = ins.getNum();
        if (ins.esRegular()) {
            grafo.insertarArista(i, i+1);
        }
        if (ins.esJump()) {
            if ( args.size() == 1 ) {
                grafo.insertarArista(i, args[0]);
            } else if (args.size() == 2) {
                grafo.insertarArista(i, args[1]);
                grafo.insertarArista(i, i+1);
            } else if (args.size() == 3) {
                grafo.insertarArista(i, args[1]);
                grafo.insertarArista(i, args[2]);
            }
        }
    }
}

Modelador::~Modelador() {
}

int Modelador::modelar(Grafo &grafo, std::string path) {
    if ( this->parsearInstrucciones(path) != 0 ) {
        return -1;
    }
    this->cargarInstrucciones(grafo);
    this->relacionarInstrucciones(grafo);
    return 0;
}

int Modelador::parsearInstrucciones(std::string path) {
    std::ifstream archivo(path);
    if ( !archivo.is_open() ) {
        return -1;
    }
    parseador.parsearInstrucciones(archivo, this->instrucciones);
    return 0;
}



