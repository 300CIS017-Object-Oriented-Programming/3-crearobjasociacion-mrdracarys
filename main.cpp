#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Raza.h"

int main() {
    // Creación de Kuma con raza
    Perro* kumaPropietario = new Perro("Kuma", 2, "Lobo", "Gris", "Mediano");
    Propietario* juan = new Propietario("Juan Camilo");
    juan->setDocIdentidad("1085343676");
    juan->setEdad(25);
    std::cout << juan->mostrarInfo() << std::endl;
    kumaPropietario->asociarVeterinario("Dr. Gonzalo", 8);
    kumaPropietario->mostrarInfoVeterinario();

    // Obtén el objeto Raza asociado al Perro
    Raza* razaKuma = new Raza("Border collie", "Colombia");
    kumaPropietario->setRaza(razaKuma);

    std::cout << "Información de Kuma:" << std::endl;
    std::cout << "Nombre: " << kumaPropietario->getNombre() << std::endl;
    std::cout << "Edad: " << kumaPropietario->getEdad() << " años" << std::endl;

    // Imprimir información de la raza solo si está asignada
    Raza* razaAsignadaKuma = kumaPropietario->getRaza();
    if (razaAsignadaKuma) {
        std::cout << "Raza: " << razaAsignadaKuma->getNombre() << std::endl;
        std::cout << "País de origen de la raza: " << razaAsignadaKuma->getPaisOrigen() << std::endl;
    } else {
        std::cout << "El perro no tiene asignada una raza." << std::endl;
    }

    // Creación de Chamo sin raza asignada
    Perro* chamo = new Perro("Chamo", 5, "", "Negro", "Grande");
    chamo->ladrar();
    Propietario* carlos = new Propietario("Carlos Zapata");
    carlos->setDocIdentidad("102842313");
    carlos->setEdad(30);
    std::cout << carlos->mostrarInfo() << std::endl;
    std::cout << "Información de Chamo:" << std::endl;
    std::cout << "Nombre: " << chamo->getNombre() << std::endl;
    std::cout << "Edad: " << chamo->getEdad() << " años" << std::endl;



    // Liberar memoria
    delete kumaPropietario;
    delete juan;
    delete chamo;
    delete razaKuma;

    return 0;
}
