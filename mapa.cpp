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


int Mapa::pedir_coordenada(int limite){
	int coordenada;
	std::cin >> coordenada;
	while (coordenada > limite || coordenada < 0){
		cout << "Coordenada invalida." << endl;
		cout << "Ingrese la coordenada nuevamente (" << limite << " -  0)" << endl;
		cin >> coordenada;
	}
	return coordenada;
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
