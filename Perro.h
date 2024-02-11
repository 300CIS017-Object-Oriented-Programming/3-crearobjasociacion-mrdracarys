//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    Raza* pRaza;

public:
    Perro();
    Perro(std::string nombre, int edad, std::string raza, std::string color, std::string tamanio);
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();

    void asociarVeterinario(std::string nombre, int aniosExperiencia);
    Veterinario* getVeterinario();

    // Sirve para.......
    void agregarPropietario(std::string nombre, std::string docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);


    int getEdad();
    void setEdad(int edad);

    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);

    void mostrarInfoVeterinario();

    void setRaza(Raza* pRaza);
    Raza* getRaza();

};
#endif
