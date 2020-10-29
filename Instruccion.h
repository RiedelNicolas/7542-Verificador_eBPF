//
// Created by riedel on 28/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_VERTICE_H
#define INC_7542_VERIFICADOR_EBPF_VERTICE_H

#include <string>

class Instruccion {
private:
    int numInstruccion;
    std::string etiqueta;
public:

    Instruccion(std::string etiqueta, int numInstruccion );
    Instruccion(int numInstruccion );

};


#endif //INC_7542_VERIFICADOR_EBPF_VERTICE_H
