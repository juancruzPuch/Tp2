#include <iostream>

#include "tipos_edificios.h"
#include "edificio.h"



//Constructor
Tipo_edificio::Tipo_edificio (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio){
    this -> tipo_edificio = tipo_edificio;
    cant_piedra = piedra;
    cant_madera = madera;
    cant_metal = metal;
    this -> cant_max_construido = cant_max_construido;
    cantidad_construidos = 0;
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
int Tipo_edificio::obtener_cant_construidos(){
    return cantidad_construidos;
}
Edificio* Tipo_edificio::obetener_edificios_construidos(int posisicion_edificio){
    return edificios_construidos[posisicion_edificio];
}


void Tipo_edificio::librerar_edificos_construidos(){
    for (int i = 0; i < cantidad_construidos; i++){
        delete edificios_construidos[i];
    }
    delete [] edificios_construidos;
}

void Tipo_edificio::agregar_edificio_construido(Edificio* edificio){

    Edificio** nuevo_edificios_construidos = new Edificio* [cantidad_construidos + 1];

    for (int i = 0; i < cantidad_construidos; i++){
        nuevo_edificios_construidos[i] = edificios_construidos[i];
    }

    nuevo_edificios_construidos[cantidad_construidos] = edificio;

    if (cantidad_construidos != 0){
        delete [] edificios_construidos;
    }

    edificios_construidos = nuevo_edificios_construidos;
    cantidad_construidos++;
}
