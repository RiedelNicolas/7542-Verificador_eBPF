//
// Created by riedel on 3/11/20.
//

#include "VerificadorThread.h"


void VerificadorThread::run() {
    std::string path = this->archivos.desapilar();
    if(path == "") return; //se termino la cola.
    do {
        this->grafo = new Grafo;
        this->modelador = new Modelador;
        modelador->modelar(*grafo,path);
        if(grafo->esCiclico()){
            resultados.agregarConBucle(path);
        }else if(grafo->desconectado()){
            resultados.agregarSinUsar(path);
        }else{
            resultados.agregarExitoso(path);
        }
        delete this->grafo;
        delete this->modelador;
        path = this->archivos.desapilar();
    } while (path != "" );
}

VerificadorThread::VerificadorThread(PilaProtegida &archivos, BuzonResultados &resultados
                                        ): archivos(archivos), resultados(resultados) {
}
