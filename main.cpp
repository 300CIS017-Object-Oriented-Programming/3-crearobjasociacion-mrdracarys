#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {
/*
    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");
    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");
    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;
*/


    Perro *chamo = new Perro("Firulais", 5, "Mastin napolitano", "Negro", "Grande");
    chamo->ladrar();
    Propietario *carlos = new Propietario("Carlos Zapata");
    carlos->setDocIdentidad("102842313");
    carlos->setEdad(30);
    std::cout << carlos->mostrarInfo() << std::endl;
    delete chamo;
    delete carlos;

    Perro*kuma=new Perro("kuma", 5,"lobo", "gris", "mediano");
    Propietario *juan = new Propietario("Juan Camilo");
    carlos->setDocIdentidad("1085343676");
    carlos->setEdad(25);
    std::cout << juan->mostrarInfo() << std::endl;
    delete kuma;
    delete juan;

    return 0;
}
