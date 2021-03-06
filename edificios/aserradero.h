#ifndef ASERRADERO_H
#define ASERRADERO_H

#include "tipos_edificios.h"
#include "edificio.h"


const char CARACTER_ASERRADERO = 'A';

class Aserradero: public Tipo_edificio{

	public:
		
		//Precondiciones: -
		//Postcondiciones: Construye un edificio de tipo aserradero
		Aserradero (int piedra, int madera, int metal, int cant_max_construido, std::string tipo_edificio);
};

#endif // ASERRADERO_H
