//
// Created by riedel on 31/10/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_PARSEADOR_H
#define INC_7542_VERIFICADOR_EBPF_PARSEADOR_H


#include <string>

class Parseador {
private:
    static const char finDeLabel = ':';
    static const char identificadorJump = 'j';
    static const std::string identificadorRet = "ret";
public:
    const std::string encontrarLabel(const std::string& linea);

    const std::string label(const std::string &linea);

    const std::string label(std::string &linea);
};



#endif //INC_7542_VERIFICADOR_EBPF_PARSEADOR_H
