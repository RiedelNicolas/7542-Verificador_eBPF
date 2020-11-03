//
// Created by riedel on 3/11/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_VERIFICADORTHREAD_H
#define INC_7542_VERIFICADOR_EBPF_VERIFICADORTHREAD_H


#include "Thread.h"
#include "Modelador.h"
#include "Grafo.h"
#include "PilaProtegida.h"
#include "BuzonResultados.h"

class VerificadorThread : public Thread{
private:
    Grafo* grafo;
    Modelador* modelador;
    PilaProtegida& archivos;
    BuzonResultados& resultados;

public:
    VerificadorThread(PilaProtegida &archivos, BuzonResultados &resultados);
    virtual void run() override ;
};


#endif //INC_7542_VERIFICADOR_EBPF_VERIFICADORTHREAD_H
