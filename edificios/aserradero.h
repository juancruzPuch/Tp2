#ifndef ASERRADERO_H
#define ASERRADERO_H

#include "tipos_edificios.h"

class Aserradero: public Tipo_edificio{

public:
    Aserradero (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio);
};

#endif // ASERRADERO_H