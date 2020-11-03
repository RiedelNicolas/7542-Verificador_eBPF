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

  // Modela un grafo en base a un archivo.
class Modelador{
 private:
    std:: list<Instruccion> instrucciones;
    Parseador parseador;
    void cargarInstrucciones(Grafo& grafo);
    void relacionarInstrucciones(Grafo& grafo);
    int parsearInstrucciones(std::string path);
 public:
    // Carga el codigo recibido en el grafo.
    int modelar(Grafo& grafo, std::string path);
};


#endif  // MODELADOR_H_
