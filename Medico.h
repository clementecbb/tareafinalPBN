#include "personaje.h"

class Medico : public Personaje {
private:


public:
    Medico(int , int , int );
    int salud;
    int fuerza;
    int alcance;
    
    void actuar();
};

