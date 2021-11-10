#ifndef TIPOS_EDIFICIOS_H
#define TIPOS_EDIFICIOS_H

#include "edificio.h"


const std::string PATH_ENTRADA_EDIFICIOS = "edificios.txt";

class Tipo_edificio {

	protected:
		std::string tipo_edificio;
		int cant_piedra;
		int cant_madera;
		int cant_metal;
		int cant_max_construido;
		char caracter;

		int cantidad_construidos;
		bool brinda_materiales;
		Edificio** edificios_construidos;

	public:
		
		Tipo_edificio();
		
		//Precondiciones: -
		//Postcondicions: Construye un objeto tipo edificio
		Tipo_edificio (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio);
		
		//Precondiciones: -
		//Postcondicions: Devuelve la cantidad de piedra que requiere el edificio
		int obtener_piedra();
		
		//Precondiciones: -
		//Postcondicions: Devuelve la cantidad de madera que requiere el edificio
		int obtener_madera();
		
		//Precondiciones: -
		//Postcondicions: Devuelve la cantidad de metal que requiere el edificio
		int obtener_metal();
		
		//Precondiciones: -
		//Postcondicions: Devuelve la cantidad máxima de edificios que pueden construirse
		int obtener_cant_max_construido();
		
		//Precondiciones: -
		//Postcondicions: Devuelve el nombre del edificio
		std::string obtener_tipo();
		
		//Precondiciones: -
		//Postcondicions: Devuelve la cantidad de edificios construidos
		int obtener_cant_construidos();
		
		//Precondiciones: -
		//Postcondicions: Devuelve los edificios construidos
		Edificio* obetener_edificios_construidos(int posisicion_edificio);
		
		//Precondiciones: -
		//Postcondiciones: Agrega el edificio leído a la lista de edificios construidos
		void agregar_edificio_construido(Edificio* edificio);
		
		//Precondiciones: -
		//Postcondiciones: Libera la memoria utilizada por los edificios construidos
		void liberar_edificos_construidos();
		
		
		void mostrar();
};


#endif //TIPOS_EDIFICIOS_H
