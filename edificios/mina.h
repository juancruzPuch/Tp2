#ifndef MINA_H
#define MINA_H

#include "tipos_edificios.h"


class Mina: public Tipo_edificio {
public:
    Mina (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio);
};

#endif // MINA_H