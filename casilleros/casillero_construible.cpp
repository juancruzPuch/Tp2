#include <iostream>

#include "casillero.h"
#include "casillero_construible.h"

const std::string CARACTER_COLOR_TERRENO = "\033[1;41mT\033[0m\n";

Casillero_construible::Casillero_construible(int fila, int columna, char caracter):
Casillero(fila, columna, caracter){
    caracter_color = CARACTER_COLOR_TERRENO;
}