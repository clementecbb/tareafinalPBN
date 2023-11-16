#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include "personaje.h"
//#include "medico.h"
#include "ingeniero.h"

using namespace std;

// Función para crear el campo de batalla y posicionar a los personajes
void crearCampoDeBatalla(int fila) {
    int columna = 4 ;

    int ** matriz = new int*[fila];
    for (int i = 0; i < fila; ++i) {
        matriz[i] = new int[columna];
    }
    // algo
    
    for (int i = 0; i < fila; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;

}

// Función para mostrar el campo de batalla en la pantalla
void mostrarCampoDeBatalla() {
    // Lógica para mostrar el campo de batalla y el estado del juego
}
void pausa(int tiempo) {
	this_thread::sleep_for(chrono::milliseconds(tiempo));
}


int main() { 
  // Aquí puedes definir la longitud del campo de batalla
  int fila;
    cout << "ingrese el numero de filas ,entre 15 y 40" ; 
    cin >> fila;
    // Crear el campo de batalla y posicionar a los personajes
    crearCampoDeBatalla(fila);
    
    
    
    
    
    
    
    
    
    // Lógica del juego
    while(true) {
        // Etapa de cálculos para el bando Oeste
        // Iterar a través de los personajes del bando Oeste y realizar las acciones correspondientes

        // Etapa de cálculos para el bando Este
        // Iterar a través de los personajes del bando Este y realizar las acciones correspondientes

        // Mostrar el campo de batalla en la pantalla
        mostrarCampoDeBatalla();

    }

    // Mostrar el resultado del juego
    // Lógica para mostrar el ganador en la pantalla

    return 0;
}
