//
// Created by riedel on 28/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_GRAFO_H
#define INC_7542_VERIFICADOR_EBPF_GRAFO_H
#include <list>
#include <string>
#include "Nodo.h"

class Grafo {
private:
    std::list<Nodo> nodos;
    bool existeVertice(int buscado);
    bool existeVertice(std::string buscado);
public:
    Grafo();
    void agregarNodo(Nodo nodo);
    int insertarArista(int origen, int destino);
    int insertarArista(int origen, std::string tagDestino);
    std::list<Nodo>* getNodos();
};


#endif //INC_7542_VERIFICADOR_EBPF_GRAFO_H
