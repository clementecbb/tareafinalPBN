#ifndef MEDICO_H
#define MEDICO_H

#include "personaje.h"

class Medico : public Personaje {
public:
    Medico(int salud, int fuerza, int alcance);
    void actuar() override;
};

#endif // MEDICO_H
