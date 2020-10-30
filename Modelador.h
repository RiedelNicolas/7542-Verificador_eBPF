//
// Created by riedel on 30/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_MODELADOR_H
#define INC_7542_VERIFICADOR_EBPF_MODELADOR_H
#include <fstream>
#include "Grafo.h"

class Modelador{
private:
std::ifstream archivo;
public:
    explicit Modelador(std::string archivo);
    int cargarInstrucciones(Grafo& grafo);
    int relacionarInstrucciones(Grafo& grafo);

    ~Modelador();
};


#endif //INC_7542_VERIFICADOR_EBPF_MODELADOR_H
