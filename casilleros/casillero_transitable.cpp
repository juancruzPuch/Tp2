#include <iostream>

#include "casillero_transitable.h"
#include "../materiales.h"

const std::string CARACTER_COLOR_CAMINO = "\033[1;42mT\033[0m";

Casillero_transitable::Casillero_transitable(int fila, int columna, char caracter):
Casillero(fila, columna, caracter){
    caracter_color = CARACTER_COLOR_CAMINO;
    tipo = "transitable";
}
std::string Casillero_transitable::obtener_tipo(){
    Casillero::obtener_tipo();
    return material.obtener_nombre_material();
}
void Casillero_transitable::establecer_tipo(std::string nombre_tipo){
    Casillero::establecer_tipo(nombre_tipo);
    material.establecer_nombre_material(nombre_tipo);
}
int Casillero_transitable::obtener_cantidad_material(){
    Casillero::obtener_cantidad_material();
    return material.obtener_cantidad_material();
}
void Casillero_transitable::establecer_cantidad_material(int cantidad){
    Casillero::establecer_cantidad_material(cantidad);
    material.establecer_cantidad(cantidad);
}

void Casillero_transitable::liberar(){
    Casillero::liberar();
    material.establecer_cantidad (0);
    material.establecer_nombre_material ("-1");
}