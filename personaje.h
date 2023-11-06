#ifndef PERSONAJE_H
#define PERSONAJE_H

class Personaje {
protected:
    int saludBase;
    int fuerzaMax;
    int alcanceMax;
    // Otros atributos y métodos necesarios

public:
    Personaje(int salud, int fuerza, int alcance);
    virtual void actuar();
    virtual void desplazarse();
    // Otros métodos y propiedades necesarios
};

#endif
