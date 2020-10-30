//
// Created by riedel on 29/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_NODO_H
#define INC_7542_VERIFICADOR_EBPF_NODO_H
#include "Instruccion.h"

class Nodo {
private:
    Instruccion instruccion;
    std::list<Nodo*> adyacentes; //No se puede usar containers a referencias.
public:
    Nodo();
    Nodo(Instruccion& instruccion);
    const std::list<Nodo*>& getAdyacentes();
    void agregar_adyacente(Nodo*);
    Instruccion getInstruccion();
};


#endif //INC_7542_VERIFICADOR_EBPF_NODO_H
