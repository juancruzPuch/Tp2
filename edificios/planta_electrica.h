#ifndef PLANTA_ELECTRICA_H
#define PLANTA_ELECTRICA_H

#include "tipos_edificios.h"
#include "edificio.h"


const char CARACTER_PLANTA_ELECTRICA = 'P';

class Planta_electrica: public Tipo_edificio {

	public:
	
		//Precondiciones: -
		//Postcondiciones: Construye un edificio de tipo planta eléctrica
		Planta_electrica (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio);
};
#endif // PLANTA_ELECTRICA_H
