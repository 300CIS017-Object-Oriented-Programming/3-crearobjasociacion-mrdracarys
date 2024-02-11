//
// Created by Camilo Martinez on 11/02/24.
//

#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>

class Veterinario {
private:
    std::string nombre;
    int aniosExperiencia;

public:
    Veterinario();
    Veterinario(std::string nombre, int aniosExperiencia);

    std::string getNombre();
    void setNombre(std::string nombre);
    int getAniosExperiencia();
    void setAniosExperiencia(int aniosExperiencia);
};

#endif
