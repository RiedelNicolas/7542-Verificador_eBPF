//
// Created by riedel on 3/11/20.
//

#ifndef VERIFICADORTHREAD_H_
#define VERIFICADORTHREAD_H_


#include "Thread.h"
#include "Modelador.h"
#include "Grafo.h"
#include "PilaProtegida.h"
#include "BuzonResultados.h"

class VerificadorThread : public Thread {
 private:
    Grafo* grafo;
    Modelador* modelador;
    PilaProtegida& archivos;
    BuzonResultados& resultados;

 public:
    // Constructor, recibe referencias a los objetos compartidos.
    VerificadorThread(PilaProtegida &archivos, BuzonResultados &resultados);
    //
    void run() override;
};


#endif  // VERIFICADORTHREAD_H_
