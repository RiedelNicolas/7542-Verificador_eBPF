//
// Created by riedel on 31/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_PARSEADOR_H
#define INC_7542_VERIFICADOR_EBPF_PARSEADOR_H


#include <string>
#include <list>
#include "Instruccion.h"

class Parseador {
private:
     const char finDeLabel;
     const char delimitador;
     const char finArg;

public:
    Parseador();
    void parsearInstrucciones(std::ifstream archivo,
             std::list<Instruccion>& instrucciones);
};



#endif //INC_7542_VERIFICADOR_EBPF_PARSEADOR_H
