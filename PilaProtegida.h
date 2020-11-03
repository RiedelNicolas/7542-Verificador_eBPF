//
// Created by riedel on 2/11/20.
//

#ifndef PILAPROTEGIDA_H_
#define PILAPROTEGIDA_H_


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


#endif  // PILAPROTEGIDA_H_
