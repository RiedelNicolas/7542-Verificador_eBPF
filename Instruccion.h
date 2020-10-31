//
// Created by riedel on 28/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_VERTICE_H
#define INC_7542_VERIFICADOR_EBPF_VERTICE_H

#include <string>
#include <vector>


class Instruccion {
protected:
    int numInstruccion;
    std::string etiqueta;
    std::string identificador;
    std::vector<std::string>  argumentos;
public:
    explicit Instruccion(const int& numInstruccion );
    void setEtiqueta(const std::string& etiqueta);
    void setIdentificador(const std::string& etiqueta);
    void setArgs(std::vector<std::string>& args);
    int& getNum();
    std::vector<std::string>& getArgs();
    std::string& getEtiqueta();
    std::string& getIdentificador();
    bool esJump();
    bool esRegular();
    bool esRetorno();
};

#endif //INC_7542_VERIFICADOR_EBPF_VERTICE_H
