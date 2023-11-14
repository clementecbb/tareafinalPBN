#ifndef PERSONAJE_H
#define PERSONAJE_H

class Personaje {
private:
    int saludBase;
    int fuerzaMax;
    int alcanceMax;
    // Otros atributos y métodos necesarios

public:
    Personaje(int salud, int fuerza, int alcance);
   	void actuar();
    void desplazarse(); // No es necesario que sea virtual si tiene una implementación común para todas las clases derivadas
    // Otros métodos y propiedades necesarios
};

#endif // PERSONAJE_H
