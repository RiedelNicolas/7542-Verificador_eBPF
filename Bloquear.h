//
// Created by riedel on 2/11/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_BLOQUEAR_H
#define INC_7542_VERIFICADOR_EBPF_BLOQUEAR_H


#include <mutex>

class Bloquear {
private:
    std::mutex &mut;
public:
    Bloquear(std::mutex &mut);
    ~Bloquear();
private:
    Bloquear(const Bloquear&) = delete;
    Bloquear& operator=(const Bloquear&) = delete;
    Bloquear(Bloquear&&) = delete;
    Bloquear& operator=(Bloquear&&) = delete;
};


#endif //INC_7542_VERIFICADOR_EBPF_BLOQUEAR_H
