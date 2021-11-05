#ifndef OBELISCO_H
#define OBELISCO_H

#include "tipos_edificios.h"


class Obelisco: public Tipo_edificio {
public:
    Obelisco (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio);
};

#endif // OBELISCO_H