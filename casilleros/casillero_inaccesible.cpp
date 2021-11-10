#include <iostream>

#include "casillero_inaccesible.h"

const std::string CARACTER_COLOR_LAGO = "\033[1;44mT\033[0m";

Casillero_inaccesible::Casillero_inaccesible(int fila, int columna, char caracter):
Casillero(fila, columna, caracter){
    caracter_color = CARACTER_COLOR_LAGO;
    tipo = "inaccesible";
}
std::string Casillero_inaccesible::obtener_tipo(){
    Casillero::obtener_tipo();
    return "-1";
}
int Casillero_inaccesible::obtener_cantidad_material(){
    Casillero::obtener_cantidad_material();
    return 0;
}
