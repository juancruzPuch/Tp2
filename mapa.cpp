#include <iostream>

#include "mapa.h"
#include "casilleros/casillero.h"
#include "casilleros/casillero_construible.h"
#include "casilleros/casillero_inaccesible.h"
#include "casilleros/casillero_transitable.h"

using namespace std;

const char TERRENO = 'T';
const char LAGO = 'L';
const char CAMINO = 'C';

Mapa::Mapa(){
	cantidad_filas = 0;
	cantidad_columnas = 0;
}

void Mapa::inicializar_mapa(int cant_filas, int cant_columnas){
	
	this -> cantidad_filas = cant_filas;
    this -> cantidad_columnas = cant_columnas;
	
	casilleros = new Casillero**[cantidad_filas];

	
	for(int i = 0; i < cantidad_filas; i++){
        casilleros[i] = new Casillero* [cantidad_columnas];
    }
    		
}

int Mapa::obtener_cantidad_filas(){
    return cantidad_filas;
}
int Mapa::obtener_cantidad_columnas(){
    return cantidad_columnas;
}

Casillero* Mapa::tipo_casillero(int fila, int columna){
	return casilleros[fila][columna];
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

void Mapa::mostrar_mapa(){

	for(int i = 0; i < cantidad_filas; i++){
		for(int j = 0; j < cantidad_columnas; j++){
            cout << casilleros[i][j] -> obtener_caracter_color();
		}
		cout << endl;
	}
	cout << endl;

}

Casillero* Mapa::obtener_casillero(int fila, int columna){
	return casilleros[fila][columna];
}

bool Mapa::se_puede_demoler(int fila, int columna){
	bool es_demolible = false;
	Casillero_construible* casillero_para_demoler;

	if ( ! casilleros[fila][columna] -> es_construible() ){

		cout << "NO se puede construir en este casillero pq es un casillero " << casilleros[fila][columna]->obtener_tipo();
		cout << endl;
	}
	else if ( ! casilleros[fila][columna] -> hay_edificio() ){

		cout << "NO se puede construir en este casillero no hay ningun edificio construido";
	}
	else {
		es_demolible = true;
	}
	return es_demolible;
}


void Mapa::pedir_coordenada(int &fila, int &columna){

	std::cin >> fila;
	std::cin >> columna;
	while (fila > cantidad_filas || fila < 0 || columna > cantidad_columnas || columna < 0){

char** Mapa::obtener_mapa(){
	char **mapa = new char*[cantidad_filas];
	for(int i = 0; i < cantidad_filas; i++)
		mapa[i] = new char[cantidad_columnas];
		
	for(int i = 0; i < cantidad_filas; i++){
		for(int j = 0; j < cantidad_columnas; j++)
			mapa[i][j] = casilleros[i][j]->obtener_caracter();
	}
	return mapa;
}


}


void Mapa::liberar_casilleros (){

    for (int i = 0; i < cantidad_filas; i ++){
        for (int j = 0; j < cantidad_columnas; j ++){
            delete casilleros[i][j];
        }
        delete [] casilleros [i];
    }
    delete [] casilleros;
}
