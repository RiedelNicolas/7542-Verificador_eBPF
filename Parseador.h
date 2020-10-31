//
// Created by riedel on 31/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_PARSEADOR_H
#define INC_7542_VERIFICADOR_EBPF_PARSEADOR_H


#include <string>

class Parseador {
private:
     const char finDeLabel;
public:
    Parseador();
    const std::string encontrarLabel(const std::string& linea);
    const std::string encontrarIns(const std::string& linea);
};



#endif //INC_7542_VERIFICADOR_EBPF_PARSEADOR_H
