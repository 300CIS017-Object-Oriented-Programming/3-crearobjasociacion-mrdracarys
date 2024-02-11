//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros

Propietario::Propietario(std::string nombre) : nombre(nombre), docIdentidad(""), edad(0) {}


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}
void Propietario::setDocIdentidad(std::string docIdentidad) {
    this->docIdentidad = docIdentidad;
}

void Propietario::setEdad(int edad) {
    this->edad = edad;
}
std::string Propietario::mostrarInfo() {
    // Formatea la información según tus necesidades
    return "Nombre: " + nombre + ", Documento: " + docIdentidad + ", Edad: " + std::to_string(edad);
}
