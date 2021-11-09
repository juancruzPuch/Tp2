#include <iostream>

#include "casillero_transitable.h"

const std::string CARACTER_COLOR_CAMINO = "\033[1;42mT\033[0m\n";

Casillero_transitable::Casillero_transitable(int fila, int columna, char caracter):
Casillero(fila, columna, caracter){
    caracter_color = CARACTER_COLOR_CAMINO;
}