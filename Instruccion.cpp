//
// Created by riedel on 28/10/20.
//

#include "Instruccion.h"

Instruccion::Instruccion(const int& numInstruccion ){
    this->numInstruccion = numInstruccion;
}

std::string& Instruccion::getEtiqueta() {
    return (this->etiqueta );
}

int& Instruccion::getNum() {
    return (this->numInstruccion);
}

void Instruccion::setEtiqueta(const std::string &etiqueta) {
    this->etiqueta = etiqueta;
}

void Instruccion::setIdentificador(const std::string &id) {
    this->identificador = id;
}

std::vector<std::string>& Instruccion::getArgs() {
    return this->argumentos;
}

std::string& Instruccion::getIdentificador() {
    return this->identificador;
}

bool Instruccion::esJump() {
    return (this->identificador[0] == 'j' );
}

bool Instruccion::esRetorno() {
    return (this->identificador == "ret" );
}

bool Instruccion::esRegular() {
    return !(esJump() || esRetorno());
}

void Instruccion::setArgs(std::vector<std::string> &args) {
    this->argumentos = args;
}




