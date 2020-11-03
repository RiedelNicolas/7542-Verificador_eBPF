//
// Created by riedel on 2/11/20.
//

#ifndef BUZONRESULTADOS_H_
#define BUZONRESULTADOS_H_
#include <string>
#include <list>
#include "Bloquear.h"

  // Clase utilizada para almacenar los resultados de los distintos analisis.
  // El metodo de agregar esta protegido frente a Threads.
class BuzonResultados {
 private:
    std::list<std::string> lista;
    std::mutex m;
    void ordenar();
    void agregarResultado(std::string archivo,
                                           std::string mensaje);
 public:
    // Agrega un archivo a la lista y lo procesa como que contiene un bucle.
    void agregarConBucle(std::string path);
    // Agrega un archivo a la lista, procesa como
    // Instrucciones sin utilizar.
    void agregarSinUsar(std::string path);
    // Agrega un archivo que fue exitoso en su validacion.
    void agregarExitoso(std::string path);
    // Ordena la lista y la muestra ordenada por pantalla.
    void mostrarResultados();
};


#endif  // BUZONRESULTADOS_H_
