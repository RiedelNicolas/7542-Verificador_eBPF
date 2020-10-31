//
// Created by riedel on 30/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_MODELADOR_H
#define INC_7542_VERIFICADOR_EBPF_MODELADOR_H
#include "Grafo.h"
#include <list>

class Modelador{

private:
    std:: list<std::string> lineas;

    int cargarInstrucciones(Grafo& grafo);
    int relacionarInstrucciones(Grafo& grafo);
    int cargarLineas(std::string path);
public:
    explicit Modelador();
    int modelar(Grafo& grafo, std::string path);
    ~Modelador();
};


#endif //INC_7542_VERIFICADOR_EBPF_MODELADOR_H
