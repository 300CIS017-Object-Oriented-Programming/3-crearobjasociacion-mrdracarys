//
// Created by Camilo Martinez on 11/02/24.
//

#// raza.h
#ifndef RAZA_H
#define RAZA_H

#include <string>

class Raza {
private:
    std::string nombre;
    std::string paisOrigen;

public:
    Raza(std::string nombre, std::string paisOrigen);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getPaisOrigen();
    void setPaisOrigen(std::string paisOrigen);
};

#endif //RAZA_H