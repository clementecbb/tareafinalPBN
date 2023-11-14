#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include "personaje.h"
#include "medico.h"
#include "ingeniero.h"

using namespace std;

// Función para crear el campo de batalla y posicionar a los personajes
void crearCampoDeBatalla(int longitud) {
    int columna = 2, fila;
    cout << "ingrese el numvero de filas ,entre 15 y 40" ; 
    cin >> fila;

    int ** matriz = new int*[fila];
}

// Función para mostrar el campo de batalla en la pantalla
void mostrarCampoDeBatalla() {
    // Lógica para mostrar el campo de batalla y el estado del juego
}

int main() {
    int longitudCampo = 20; // Aquí puedes definir la longitud del campo de batalla

    // Crear el campo de batalla y posicionar a los personajes
    crearCampoDeBatalla(longitudCampo);

    // Lógica del juego
    while(true) {
        // Etapa de cálculos para el bando Oeste
        // Iterar a través de los personajes del bando Oeste y realizar las acciones correspondientes

        // Etapa de cálculos para el bando Este
        // Iterar a través de los personajes del bando Este y realizar las acciones correspondientes

        // Mostrar el campo de batalla en la pantalla
        mostrarCampoDeBatalla();

        // Hacer una pausa para observar los cambios en el campo de batalla
        //this_thread::sleep_for(chrono::milliseconds(1000)); // Cambia el valor de milisegundos según tus necesidades
    }

    // Mostrar el resultado del juego
    // Lógica para mostrar el ganador en la pantalla

    return 0;
}
