//
// Created by Camilo Martinez on 11/02/24.
//
#include "Veterinario.h"

Veterinario::Veterinario() : nombre(""), aniosExperiencia(0) {}

Veterinario::Veterinario(std::string nombre, int aniosExperiencia)
        : nombre(nombre), aniosExperiencia(aniosExperiencia) {}

std::string Veterinario::getNombre() {
    return nombre;
}

void Veterinario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

int Veterinario::getAniosExperiencia() {
    return aniosExperiencia;
}

void Veterinario::setAniosExperiencia(int aniosExperiencia) {
    this->aniosExperiencia = aniosExperiencia;
}