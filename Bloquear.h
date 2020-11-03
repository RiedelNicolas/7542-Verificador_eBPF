//
// Created by riedel on 2/11/20.
//

#ifndef BLOQUEAR_H_
#define BLOQUEAR_H_


#include <mutex>

class Bloquear {
 private:
    std::mutex &mut;
 public:
    explicit Bloquear(std::mutex &mut);
    ~Bloquear();
 private:
    Bloquear(const Bloquear&) = delete;
    Bloquear& operator=(const Bloquear&) = delete;
    Bloquear(Bloquear&&) = delete;
    Bloquear& operator=(Bloquear&&) = delete;
};


#endif  // BLOQUEAR_H_
