//
// Created by riedel on 28/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_VERTICE_H
#define INC_7542_VERIFICADOR_EBPF_VERTICE_H

#include <string>
#include <list>

class Instruccion {
protected:
    int numInstruccion;
    std::string etiqueta;
public:
    Instruccion();
    Instruccion(std::string etiqueta, int numInstruccion );
    Instruccion(int numInstruccion );
    std::string getEtiqueta();
    int getNum();
};

#endif //INC_7542_VERIFICADOR_EBPF_VERTICE_H
