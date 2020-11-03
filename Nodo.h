//
// Created by riedel on 29/10/20.
//

#ifndef NODO_H_
#define NODO_H_
#include <string>
#include <list>

// Nodo perteneciente al grafo.
// Abstraccion de una linea.
class Nodo {
 private:
    int id;
    std::string label;
    std::list<Nodo*> adyacentes;  // No se puede usar containers a referencias.
 public:
    // Constructor con linea a la que hace referencia.
    explicit Nodo(const int& id);
    // Constructor con label identificador.
    explicit Nodo(const int& id, const std::string& label);
    // Devuelve una lista con los nodos adyacentes.
    const std::list<Nodo*>& getAdyacentes();
    // Agrega un nodo adyacente
    void agregar_adyacente(Nodo*);
    // Devuelve el ID identificador.
    const int& obtenerId();
    // Devuelve el ID identificador de la instruccion.
    const std::string& obtenerLabel();
};


#endif  // NODO_H_
