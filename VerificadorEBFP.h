//
// Created by riedel on 3/11/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_VERIFICADOREBFP_H
#define INC_7542_VERIFICADOR_EBPF_VERIFICADOREBFP_H
#include "PilaProtegida.h"
#include "BuzonResultados.h"

class VerificadorEBFP {
private:
    PilaProtegida archivos;
    BuzonResultados resultados;
    int cantidadThreads;
public:
    VerificadorEBFP(int argc, char** argv);
    verificar();
    mostrarResultados();
};


#endif //INC_7542_VERIFICADOR_EBPF_VERIFICADOREBFP_H
