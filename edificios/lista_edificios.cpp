#include <iostream>

#include "lista_edificios.h"
#include "parcer.h"

//Constructor
Lista_edificios::Lista_edificios(){
    this -> cant = 0;
}


void Lista_edificios::obtener_edificios(Tipo_edificio** tipos_edificios){
    this -> tipos_edificios = tipos_edificios;
}

void Lista_edificios::agregar_edificio(Tipo_edificio* tipo_edificio){


    Tipo_edificio** lksdfjal = new Tipo_edificio*[65];
    
    /*c
    for (int i = 0; i < cant; i++){
        lista_tipo_edificios[i] = tipos_edificios[i];
    }
    
 
    lista_tipo_edificios[cant] = tipo_edificio;

    if (cant > 0){

        delete [] tipos_edificios;
    } 
    
    tipos_edificios = lista_tipo_edificios;
    cant++;
    */    
    
    
    
    
    
    
}

int  Lista_edificios::obtener_cantidad_edificios(){
    return cant;
}
