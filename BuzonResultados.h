//
// Created by riedel on 2/11/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_BUZONRESULTADOS_H
#define INC_7542_VERIFICADOR_EBPF_BUZONRESULTADOS_H
#include <string>
#include <list>
#include "Bloquear.h"

class BuzonResultados {
private:
    std::list<std::string> lista;
    std::mutex m;
    void ordenar();
public:
    void AgregarResultado(std::string& archivo, std::string& mensaje);
    void MostrarResultados();
};


#endif //INC_7542_VERIFICADOR_EBPF_BUZONRESULTADOS_H
