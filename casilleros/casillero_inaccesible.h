#ifndef CASILLERO_INACCESIBLE_H
#define CASILLERO_INACCESIBLE_H

#include "casillero.h"

class Casillero_inaccesible: public Casillero{
public:
    Casillero_inaccesible(int fila, int columna, char caracter);
    std::string obtener_tipo();
    int obtener_cantidad_material();
};


#endif // CASILLERO_INACCESIBLE_H