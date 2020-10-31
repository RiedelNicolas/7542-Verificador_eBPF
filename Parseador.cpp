//
// Created by riedel on 31/10/20.
//

#include <sstream>
#include <algorithm>
#include "Parseador.h"

void Parseador::parsearInstrucciones(std::ifstream& archivo,
                                     std::list<Instruccion> &instrucciones) {
    this->iteracion = 0;
    std::string linea;
    while (std::getline(archivo,linea )) {
        if( linea.empty() ) continue;
        instrucciones.push_back(parsearInstruccion(linea) ) ;
        this->iteracion++;
    }
}

Instruccion Parseador::parsearInstruccion(std::string &linea) {
    Instruccion instruccion(this->iteracion);
    std::vector<std::string> args;
    std::string aux;
    size_t pos, fin;
    pos = linea.find(this->finDeLabel);
    if(pos != std::string::npos ){
        aux = linea.substr(0,pos);
        linea.erase(0,pos+1);
    }
    instruccion.setEtiqueta(aux);
    pos = linea.find_first_not_of(' ');
    fin = linea.find_first_of(' ',pos);
    aux = linea.substr(pos, fin-pos);
    instruccion.setIdentificador(aux);
    linea.erase(pos, aux.size());
    pos = linea.find_first_not_of(' ');
    linea.erase(0,pos);
    std::stringstream s (linea);
    while(s.good() ){
        getline(s, aux, ',');
       aux.erase(std::remove_if(aux.begin(), aux.end(), ::isspace), aux.end());
        args.push_back(aux);
    }
    instruccion.setArgs(args);
    return instruccion;
}

/*
const std::string Parseador::encontrarLabel(const std::string &linea) {
    std::string label;
    size_t pos = linea.find(this->finDeLabel);
    if(pos == std::string::npos ){
        return label; //un string vacio.
    }
    label = linea.substr(0,pos);
    return label;
}
*/
Parseador::Parseador() :finDeLabel(':'),
                        delimitador(' '),
                        finArg(','){
    this->iteracion = 0;
}
/*


const std::string Parseador::encontrarInstruccion(const std::string &linea) {

    std::string ins;
    size_t pos_label,pos_ins;
    pos_label = linea.find(this->finDeLabel);
    if( pos_label == std::string::npos ){
        pos_label = 0;
    }
    ins = linea.substr(pos_label);
    pos_ins = ins.find_first_not_of(' ');
    ins = ins.substr(pos_ins,
                     ins.find_first_of(' '
            ,pos_ins));
    return ins;
}
*/