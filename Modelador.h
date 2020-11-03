//
// Created by riedel on 30/10/20.
//

#ifndef MODELADOR_H_
#define MODELADOR_H_
#include "Grafo.h"
#include "Parseador.h"
#include "Instruccion.h"
#include <string>
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


#endif  // MODELADOR_H_
