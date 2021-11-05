#ifndef PROCESAMIENTO_H
#define PROCESAMIENTO_H

#include "materiales.h"
#include "edificios.h"
#include "ubicaciones.h"
#include "edificios/lista_edificios.h"

#include <iostream>

#define PATH_MATERIALES "materiales.txt"
#define PATH_EDIFICIOS "edificios.txt"
#define PATH_UBICACIONES "ubicaciones.txt"
#define PATH_MAPA "mapa.txt"

using namespace std;

class Mapa{

	public:
		int cantidad_filas;
		int cantidad_columnas;
		char **mapa;
};

class Proceso{

	private:
		Material *material;
		Edificio *edificio;
		Ubicacion *ubicacion;
		Mapa *mapa;
		Lista_edificios* lista_edificios;
		int cantidad_materiales, cantidad_edificios, cantidad_ubicaciones;
		
	public:


		//Precondiciones: -
		//Postcondiciones: Guarda los datos del archivo de materiales
		void leer_materiales();

		//Precondiciones: -
		//Postcondiciones: Guarda los datos del archivo de edificios
		void leer_opciones_edificios();

		void leer_ubicaciones();
		void leer_mapa(int *cantidad_filas);

		//Precondiciones: -
		//Postcondiciones: Guarda los edificios en el archivo "edificios" y elimina la lista
		void cerrar_edificios();

		//Precondiciones: -
		//Postcondiciones: Guarda los materiales en el archivo "materiales" y elimina la lista
		void cerrar_materiales();
		
		void cerrar_ubicaciones();

		//Precondiciones: -
		//Postcondiciones: Guarda los edificios en el archivo "edificios" y elimina la lista. Guarda los materiales en el archivo "materiales" y elimina la lista
		void guardar_y_salir();
		
};

#endif
