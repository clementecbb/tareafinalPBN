#include "ingeniero.h"

Ingeniero::Ingeniero(int s, int f, int a) : Personaje(salud, fuerza, alcance) {
    salud = s;
    fuerza = f;
    alcance = a;
    // Inicialización específica del ingeniero si es necesario
}

void Ingeniero::actuar() {
    // Implementación específica de las acciones del ingeniero
}
