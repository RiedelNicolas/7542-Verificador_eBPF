//
// Created by riedel on 29/10/20.
//

#ifndef NODO_H_
#define NODO_H_
#include <string>
#include <list>

class Nodo {
 private:
    int id;
    std::string label;
    std::list<Nodo*> adyacentes;  // No se puede usar containers a referencias.
 public:
    explicit Nodo(const int& id);
    explicit Nodo(const int& id, const std::string& label);
    const std::list<Nodo*>& getAdyacentes();
    void agregar_adyacente(Nodo*);
    const int& obtenerId();
    const std::string& obtenerLabel();
};


#endif  // NODO_H_
