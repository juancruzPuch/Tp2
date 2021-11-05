#include <iostream>
#include "tipos_edificios.h"



//Constructor
Tipo_edificio::Tipo_edificio (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio){
    this -> tipo_edificio = tipo_edificio;
    cant_piedra = piedra;
    cant_madera = madera;
    cant_metal = metal;
    this -> cant_max_construido = cant_max_construido;
}

int Tipo_edificio::obtener_piedra(){
    return cant_piedra;
}
int Tipo_edificio::obtener_madera(){
    return cant_madera;
}
int Tipo_edificio::obtener_metal(){
    return cant_metal;
}
int Tipo_edificio::obtener_cant_max_construido(){
    return cant_max_construido;
}
std::string Tipo_edificio::obtener_tipo(){
    return tipo_edificio;
}
void Tipo_edificio::mostrar(){
    std::cout << "TIPO       \t";
    std::cout << "PIEDRA     \t";
    std::cout << "MADERA     \t";
    std::cout << "METAL      \t";
    std::cout << "CONSTRUIDOS\t";
    std::cout << "RESTANTES  \t";
}