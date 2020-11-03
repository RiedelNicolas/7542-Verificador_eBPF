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
    void agregarResultado(std::string archivo,
                                           std::string mensaje);
public:
    void agregarConBucle(std::string path);
    void agregarSinUsar(std::string path);
    void agregarExitoso(std::string path);
    void MostrarResultados();

};


#endif //INC_7542_VERIFICADOR_EBPF_BUZONRESULTADOS_H
