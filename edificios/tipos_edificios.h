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

		int cantidad_constuidos;
		bool brinda_materiales;
		Edificio** edificios_construidos;

	public:

		Tipo_edificio (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio);

		int obtener_piedra();
		int obtener_madera();
		int obtener_metal();
		int obtener_cant_max_construido();
		std::string obtener_tipo();
		int obtener_cant_construidos();
		Edificio* obetener_edificios_construidos(int posisicion_edificio);

		void agregar_edificio_construido(Edificio* edificio);

		void librerar_edificos_construidos();
		void mostrar();
};


#endif //TIPOS_EDIFICIOS_H
