//
// Created by riedel on 3/11/20.
//

#ifndef VERIFICADOREBFP_H_
#define VERIFICADOREBFP_H_
#include "PilaProtegida.h"
#include "BuzonResultados.h"

class VerificadorEBFP {
 private:
    PilaProtegida archivos;
    BuzonResultados resultados;
    int cantidadThreads;
 public:
    VerificadorEBFP(int argc, char** argv);
    void verificar();
    void mostrarResultados();
};


#endif  // VERIFICADOREBFP_H_
