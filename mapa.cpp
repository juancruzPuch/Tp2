<<<<<<< HEAD
#include <iostream>

#include "mapa.h"
#include "casilleros/casillero.h"
#include "casilleros/casillero_construible.h"
#include "casilleros/casillero_inaccesible.h"
#include "casilleros/casillero_transitable.h"

const char TERRENO = 'T';
const char LAGO = 'L';
const char CAMINO = 'C';

void Mapa::inicializar_mapa(int cant_filas, int cant_columnas){


    cantidad_filas = cant_filas;
    cantidad_columnas = cant_columnas;
    casilleros = new Casillero**[cantidad_filas];

	
	for(int i = 0; i < cantidad_filas; i++){
        casilleros[i] = new Casillero* [cantidad_columnas];
    }
		
}

int Mapa::obetener_cantidad_filas(){
    return cantidad_filas;
}
int Mapa::obetener_cantidad_columnas(){
    return cantidad_columnas;
}

Casillero* Mapa::identificar_casillero(int fila, int columna, char caracter){
	Casillero* casillero;
	if (caracter == 'L'){
		casillero = new Casillero_inaccesible(fila, columna, caracter);
	}
	else if (caracter == 'T'){
		casillero = new Casillero_construible(fila, columna, caracter);
	}
	else if (caracter == 'C'){
		casillero = new Casillero_transitable(fila, columna, caracter);
	}
	return casillero;
}

void Mapa::agregar_casillero(Casillero* casillero){
    casilleros[casillero -> obtener_fila()][casillero -> obtener_columna()] = casillero;
}
=======
#include "mapa.h"

Mapa::Mapa(){
}

Mapa::Mapa(int cantidad_filas, int cantidad_columnas){
	this->cantidad_filas = cantidad_filas;
	this->cantidad_columnas = cantidad_columnas;
	
	this->mapa = new char * [cantidad_filas];
	
	for(int i = 0; i < cantidad_filas; i++)
		this->mapa[i] = new char[cantidad_columnas];
	this->mapa = mapa;
}

void Mapa::guardar_mapa(int fila, int columna, char valor){
	this->mapa[fila][columna] = valor;
}
int Mapa::obtener_filas(){
	return this->cantidad_filas;
}

int Mapa::obtener_columnas(){
	return this->cantidad_columnas;
}

char** Mapa::obtener_mapa(){
	return this->mapa;
}
>>>>>>> 29b993475e8969b1d80cd39376e24f98152e0465
