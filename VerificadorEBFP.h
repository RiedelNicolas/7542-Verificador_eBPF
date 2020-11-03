//
// Created by riedel on 3/11/20.
//

#ifndef VERIFICADOREBFP_H_
#define VERIFICADOREBFP_H_
#include "PilaProtegida.h"
#include "BuzonResultados.h"
// Funcion principal, maneja la logica del programa.
class VerificadorEBFP {
 private:
    PilaProtegida archivos;
    BuzonResultados resultados;
    int cantidadThreads;
 public:
    // Constructor, recibe los argumentos del programa
    // los parsea y carga en sus atributos.
    VerificadorEBFP(int argc, char** argv);
    // Verifica los archivos brindados por enunciado con
    // el nivel de paralelismo indicado.
    void verificar();
    // Imprime la salida esperada por enunciado.
    void mostrarResultados();
};


#endif  // VERIFICADOREBFP_H_
