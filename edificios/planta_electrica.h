#ifndef PLANTA_ELECTRICA_H
#define PLANTA_ELECTRICA_H

#include "tipos_edificios.h"


class Planta_electrica: public Tipo_edificio {
public:
    Planta_electrica (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio);
};
#endif // PLANTA_ELECTRICA_H