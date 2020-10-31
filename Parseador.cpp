//
// Created by riedel on 31/10/20.
//

#include "Parseador.h"

const std::string Parseador::encontrarLabel(const std::string &linea) {
    std::string label;
    size_t pos = linea.find(this->finDeLabel);
    if(pos == std::string::npos ){
        return label; //un string vacio.
    }
    label = linea.substr(0,pos);
    return label;
}

Parseador::Parseador() :finDeLabel(':'),
                        delimitador(' '),
                        finArg(','){

}

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
