#ifndef EDIFICIOS_H
#define EDIFICIOS_H

#include "materiales.h"
#include <string>

using namespace std;

class Edificio{
	
	public:
		string nombre_edificio;
		int cantidad_piedra;
		int cantidad_madera;
		int cantidad_metal;
		int cantidad_maxima_permitida;
	
	public:
		//Precondiciones: Se tiene que haber leído bien el archivo de edificio
		//Postcondiciones: Agrega el edificio leído a la lista de edificios disponibles
		void agregar_edificio();

		//Precondiciones: -
		//Postcondiciones: Verifica que exista el edificio ingresado y, si existe, guarda los datos del edificio en las variables ingresadas
		bool verificar_edificio(string nombre_ingresado, int *piedra_necesaria, int *madera_necesaria, int *metal_necesario, int *cantidad_max);

		//Precondiciones: Se debe verificar que haya suficientes materiales y que el edificio ingresado exista
		//Postcondiciones: Pregunta al usuario si de verdad quiere construir y, si afirma, construye el edificio ingresado y modifica la lista de materiales y edificios
		bool construir_edificio(string nombre_ingresado);

		//Precondiciones: -
		//Postcondiciones: Imprime los edificios construidos
		void listar_edificios_construidos();

		//Precondiciones: -
		//Postcondiciones: Imprime todos los edificios y sus especificaciones
		void listar_todos_los_edificios();

		//Precondiciones: Se debe verificar que el edificio ingresado exista
		//Postcondiciones: Destruye el edificio ingresado y modifica la lista de materiales y edificios
		bool demoler_edificio(string nombre_ingresado);
};


#endif
