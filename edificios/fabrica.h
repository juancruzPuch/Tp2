#ifndef FABRICA_H
#define FABRICA_H

#include "tipos_edificios.h"


class Fabrica: public Tipo_edificio {
public:
    Fabrica (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio);
};

#endif // FABRICA_H