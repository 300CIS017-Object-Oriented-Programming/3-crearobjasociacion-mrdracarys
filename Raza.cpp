//
// Created by Camilo Martinez on 11/02/24.
//
// raza.cpp
#include "Raza.h"

Raza::Raza(std::string nombre, std::string paisOrigen)
        : nombre(nombre), paisOrigen(paisOrigen) {}

std::string Raza::getNombre() {
    return nombre;
}

void Raza::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Raza::getPaisOrigen() {
    return paisOrigen;
}

void Raza::setPaisOrigen(std::string paisOrigen) {
    this->paisOrigen = paisOrigen;
}