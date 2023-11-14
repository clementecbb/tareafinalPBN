#ifndef MEDICO_H
#define MEDICO_H

#include "personaje.h"

class Medico : public Personaje {
private:


public:
    Medico(int salud, int fuerza, int alcance);
    void actuar();
};

#endif // MEDICO_H
