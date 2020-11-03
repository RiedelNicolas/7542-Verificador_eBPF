//
// Created by riedel on 2/11/20.
//

#ifndef INC_7542_VERIFICADOR_EBPF_THREAD_H
#define INC_7542_VERIFICADOR_EBPF_THREAD_H


#include <thread>

class Thread {
private:
    std::thread thread;
public:
    Thread () = default ;
    void iniciar();
    void join();
    virtual void run() = 0; // la tienen que implementar los hijos.
    virtual ~Thread() = default;

    Thread(const Thread&) = delete;
    Thread& operator=(const Thread&) = delete;

    Thread(Thread&& other);

    Thread& operator=(Thread&& other);

};


#endif //INC_7542_VERIFICADOR_EBPF_THREAD_H
