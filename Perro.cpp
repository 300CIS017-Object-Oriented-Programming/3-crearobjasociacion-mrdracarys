#include "Perro.h"
#include <iostream>
#include "Raza.h"

Perro::Perro(std::string nombre, int edad, std::string raza, std::string color, std::string tamanio)
        : nombre(nombre), edad(edad), raza(raza), color(color), tamanio(tamanio), pPropietario(nullptr) {}

void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}

void Perro::asociarVeterinario(std::string nombre, int aniosExperiencia) {

    this->pVeterinario = new Veterinario(nombre, aniosExperiencia);
}
Veterinario* Perro::getVeterinario() {
    return this->pVeterinario;
}
void Perro::mostrarInfoVeterinario() {
    if (pVeterinario != nullptr) {
        std::cout << "Veterinario: " << pVeterinario->getNombre() << ", Experiencia: " << pVeterinario->getAniosExperiencia() << " años" << std::endl;
    } else {
        std::cout << "Este perro no tiene asignado un veterinario." << std::endl;
    }
}
Raza* Perro::getRaza() {
    return pRaza;
}


void Perro::setRaza(Raza* nuevaRaza) {
    pRaza = nuevaRaza;
}