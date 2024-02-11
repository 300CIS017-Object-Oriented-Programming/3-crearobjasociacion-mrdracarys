//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(std::string nombre);
    Propietario(std::string nombre, std::string docIdentidad);
    std::string mostrarInfo();
    std::string getNombre();
    void setNombre(std::string nombre);
    void setDocIdentidad(std::string docIdentidad);
    void setEdad(int edad);

};


#endif //PROPIETARIO_H
