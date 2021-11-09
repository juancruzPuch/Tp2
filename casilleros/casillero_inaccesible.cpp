#include <iostream>

#include "casillero_inaccesible.h"

const std::string CARACTER_COLOR_LAGO = "\033[1;44mT\033[0m\n";

Casillero_inaccesible::Casillero_inaccesible(int fila, int columna, char caracter):
Casillero(fila, columna, caracter){
    caracter_color = CARACTER_COLOR_LAGO;
}