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

Parseador::Parseador() :finDeLabel(':'){
}

const std::string Parseador::encontrarIns(const std::string &linea) {

    std::string ins;
    size_t pos_label  = linea.find(this->finDeLabel);
    if( linea.find(this->finDeLabel) == std::string::npos ){

    }

}
