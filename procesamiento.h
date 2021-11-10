#ifndef PROCESAMIENTO_H
#define PROCESAMIENTO_H

#include "materiales.h"
#include "mapa.h"
#include "edificios/edificio.h"
#include "edificios/tipos_edificios.h"
#include "edificios/edificio.h"
#include "mapa.h"

#include <iostream>

#define PATH_MATERIALES "materiales.txt"
#define PATH_EDIFICIOS "edificios.txt"
#define PATH_UBICACIONES "ubicaciones.txt"
#define PATH_MAPA "mapa.txt"

#define TXT_LIGHT_AQUA_123 "\033[38;5;123m"
#define END_COLOR "\033[0m"
#define TXT_ITALIC "\033[3m"
#define TXT_UNDERLINE "\033[4m"
#define BGND_LIGHT_BLUE_32 "\033[48;5;32m"
#define BGND_GREEN_34 "\033[48;5;34m"
#define BGND_GRAY_240 "\033[48;5;240m"

using namespace std;

class Proceso{

	private:
		Material** material;
		Mapa* mapa;
		Tipo_edificio** lista_edificios;
		int cantidad_materiales, cantidad_edificios, cantidad_ubicaciones;
		
	public:

		//Costructor 
		Proceso();
		
		void mostrar_mapa();
		//Precondiciones: -
		//Postcondiciones: Guarda los datos del archivo de materiales
		void leer_materiales();

		//Precondiciones: -
		//Postcondiciones: Guarda los datos del archivo de edificios
		void leer_opciones_edificios();
		
		//Precondiciones: -
		//Postcondiciones: Guarda los datos del archivo de ubicaciones
		void leer_ubicaciones();
		
		//Precondiciones: -
		//Postcondiciones: Guarda los datos del archivo de mapa
		void leer_mapa();

		
		//Precondiciones: Se tiene que haber leído bien el archivo de materiales
		//Postcondiciones: Agrega el material leído a la lista de materiales disponibles
		void agregar_material(Material *nuevo_material);
		
		//Precondiciones: Se tiene que haber leído bien el archivo de edificio
		//Postcondiciones: Agrega el edificio leído a la lista de edificios disponibles
		void agregar_tipo_edificio(Tipo_edificio* tipo_edificio);
		
		//Precondiciones: Se tiene que haber leído bien el archivo de ubicaciones //(modificar)
		//Postcondiciones: Agrega la ubicación leída a la lista de ubicaciones
		int identificar_edificio(Edificio *edificio, string tipo_edficio);
		
		//Precondiciones: -
		//Postcondiciones: Imprime todos los edificios y sus especificaciones
		void listar_edificios();
		

		
		//Precondiciones: -
		//Postcondiciones: Imprime los materiales disponibles
		void mostrar_inventario();

		//Precondiciones: -
		//Postcondiciones: Guarda los edificios en el archivo "edificios" y elimina la lista
		void cerrar_edificios();

		//Precondiciones: -
		//Postcondiciones: Guarda los materiales en el archivo "materiales" y elimina la lista
		void cerrar_materiales();
		
		//Precondiciones: -
		//Postcondiciones: Guarda las ubicaciones en el archivo "ubicaciones" y elimina la lista
		void cerrar_ubicaciones();
		
		//Precondiciones: -
		//Postcondiciones: Libera la memoria utilizada para el mapa
		void cerrar_mapa();
		
		//Precondiciones: -
		//Postcondiciones: Imprime el menu de opciones
		void mostrar_menu();

		//Precondiciones: -
		//Postcondiciones: Guarda los edificios en el archivo "edificios" y elimina la lista. Guarda los materiales en el archivo "materiales" y elimina la lista. Guarda las ubicaciones en el archivo "ubicaciones" y elimina la lista. Libera la memoria utilizada para el mapa
		void guardar_y_salir();
		
};

#endif
