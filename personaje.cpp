#include <iostream>
#include "personaje.h"

using namespace std; 

Personaje::Personaje(int salud, int fuerza, int alcance) : saludBase(salud), fuerzaMax(fuerza), alcanceMax(alcance) {
    // Inicialización de otros atributos si es necesario
}

void Personaje::actuar() {
    // Implementación de la lógica de actuación general del personaje
}

void Personaje::desplazarse() {
    // Implementación de la lógica de desplazamiento general del personaje
}
