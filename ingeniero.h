#include "personaje.h"

class Ingeniero : public Personaje {
private:
public:
	Ingeniero(int , int , int );
    int salud;
    int fuerza;
    int alcance;
    
    void actuar();
};


