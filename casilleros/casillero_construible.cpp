#include <iostream>

#include "casillero.h"
#include "casillero_construible.h"


const std::string CARACTER_COLOR_TERRENO = "\033[1;41mT\033[0m";

Casillero_construible::Casillero_construible(int fila, int columna, char caracter):
Casillero(fila, columna, caracter){
    caracter_color = CARACTER_COLOR_TERRENO;
    tipo = "construible";
    this -> tipo_edificio = "-1";
}

std::string Casillero_construible::obtener_tipo(){
    Casillero::obtener_tipo();
    return tipo_edificio;
}
void Casillero_construible::establecer_tipo(std::string nombre_tipo){
    Casillero::establecer_tipo(nombre_tipo);
    establecer_tipo(nombre_tipo);
}
int Casillero_construible::obtener_cantidad_material(){
    Casillero::obtener_cantidad_material();
    return -1;
}
void Casillero_construible::liberar(){
    Casillero::liberar();
    tipo_edificio = "-1";
}