//
// Created by riedel on 28/10/20.
//

#ifndef INSTRUCCION_H_
#define INSTRUCCION_H_

#include <string>
#include <vector>

// Abstraccion de una instruccion.
// Es utilizada para ir guardando los datos a medida que se parsea.
class Instruccion {
 private:
    int numInstruccion;
    std::string etiqueta;
    std::string identificador;
    std::vector<std::string>  argumentos;

 public:
    // Constructor, recibe el numero de linea.
    explicit Instruccion(const int& numInstruccion);
    // Setea el label de la instruccion.
    void setEtiqueta(const std::string& etiqueta);
    // Identificador de la instruccion.
    void setIdentificador(const std::string& identificador);
    // Los argumentos que recibe la instruccion.
    void setArgs(const std::vector<std::string>& args);
    // devuelve el numero de linea.
    int& getNum();
    // Devuelve los argumentos de la instruccion.
    // En forma de linea de Strings.
    std::vector<std::string>& getArgs();
    // Devuelve el label de la instruccion.
    // Si no contiene label devuelve un string vacio.
    std::string& getEtiqueta();
    // Responde si la instruccion es un jump.
    bool esJump();
    // Responde si la instruccion es un return.
    bool esRetorno();
    // Si es una instruccion comun, ni return ni jump.
    bool esRegular();
};

#endif  // INSTRUCCION_H_
