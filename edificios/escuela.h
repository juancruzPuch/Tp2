#ifndef ESCUELA_H
#define ESCUELA_H

#include "tipos_edificios.h"


class Escuela: public Tipo_edificio {
public:
    Escuela (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio);

};

#endif // ESCUELA_H