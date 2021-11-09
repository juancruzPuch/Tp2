#include <iostream>

#include "casillero.h"

Casillero::Casillero(int fila, int columna, char caracter){
    this -> fila = fila;
    this -> columna = columna;
    this -> caracter = caracter;
}
char Casillero::establecer_caracter(){
    return caracter;
}
int Casillero::establecer_fila(){
    return fila;
}
int Casillero::establecer_columna(){
    return columna;
}