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
