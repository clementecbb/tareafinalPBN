#ifndef INGENIERO_H
#define INGENIERO_H

#include "personaje.h"

class Ingeniero : public Personaje {
public:
    Ingeniero(int salud, int fuerza, int alcance);
    void actuar() override;
};

#endif // INGENIERO_H
