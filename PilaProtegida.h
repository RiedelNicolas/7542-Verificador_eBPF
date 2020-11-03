//
// Created by riedel on 2/11/20.
//

#ifndef PILAPROTEGIDA_H_
#define PILAPROTEGIDA_H_


#include <string>
#include <stack>
#include <mutex>
#include "Bloquear.h"
// Pila protegida frente a race conditions.
// Utilizada como reservorio de los archivos
// esperando a ser analizados.
class PilaProtegida {
 private:
    std::stack<std::string> pila;
    std::mutex m;
 public:
    void apilar(std::string);
    // En el caso que la pila se encuentre vacia
    // Se devuelve un string vacio ("")
    std::string desapilar();
};


#endif  // PILAPROTEGIDA_H_
