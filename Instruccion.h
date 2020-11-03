//
// Created by riedel on 28/10/20.
//

#ifndef INSTRUCCION_H_
#define INSTRUCCION_H_

#include <string>
#include <vector>


class Instruccion {
 private:
    int numInstruccion;
    std::string etiqueta;
    std::string identificador;
    std::vector<std::string>  argumentos;
 public:
    explicit Instruccion(const int& numInstruccion);
    void setEtiqueta(const std::string& etiqueta);
    void setIdentificador(const std::string& etiqueta);
    void setArgs(const std::vector<std::string>& args);
    int& getNum();
    std::vector<std::string>& getArgs();
    std::string& getEtiqueta();
    std::string& getIdentificador();
    bool esJump();
    bool esRegular();
    bool esRetorno();
};

#endif  // INSTRUCCION_H_
