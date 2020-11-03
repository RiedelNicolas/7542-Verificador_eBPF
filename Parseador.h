//
// Created by riedel on 31/10/20.
//

#ifndef PARSEADOR_H_
#define PARSEADOR_H_


#include <string>
#include <list>
#include <fstream>
#include "Instruccion.h"

// Clase para parsear los archivos de instrucciones.
class Parseador {
 private:
     const char finDeLabel;
     const char delimitador;
     const char finArg;
     int iteracion;
     Instruccion parsearInstruccion(std::string& linea);
 public:
    // Constructor, define las constantes usadads para parsear.
    Parseador();
    void parsearInstrucciones(std::ifstream& archivo,
             std::list<Instruccion>& instrucciones);
};



#endif  // PARSEADOR_H_
