#ifndef PARSER_H
#define PARSER_H

#include "tipos_edificios.h"


class Parser {
public:
	std::string lectura_archivo[5];

    Parser(std::string* lectura);
	Tipo_edificio* procesar_entrada ();
	
	std::string tipo_edificio ();
	int piedra();
	int madera();
	int metal();
	int cant_max_construido();
};

#endif // PARSER_H