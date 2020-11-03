//
// Created by riedel on 2/11/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_PILAPROTEGIDA_H
#define INC_7542_VERIFICADOR_EBPF_PILAPROTEGIDA_H


#include <string>
#include <stack>
#include <mutex>
#include "Bloquear.h"

class PilaProtegida {
private:
    std::stack<std::string> pila;
    std::mutex m;
public:
    void apilar(std::string);
    std::string desapilar();
};


#endif //INC_7542_VERIFICADOR_EBPF_PILAPROTEGIDA_H
