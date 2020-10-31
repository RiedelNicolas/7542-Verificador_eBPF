//
// Created by riedel on 30/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_MODELADOR_H
#define INC_7542_VERIFICADOR_EBPF_MODELADOR_H
#include "Grafo.h"
#include "Parseador.h"
#include "Instruccion.h"
#include <list>

class Modelador{

private:
    std:: list<Instruccion> instrucciones;
    Parseador parseador;
    void cargarInstrucciones(Grafo& grafo);
    void relacionarInstrucciones(Grafo& grafo);
    int parsearInstrucciones(std::string path);
public:
    int modelar(Grafo& grafo, std::string path);
    ~Modelador();
};


#endif //INC_7542_VERIFICADOR_EBPF_MODELADOR_H
