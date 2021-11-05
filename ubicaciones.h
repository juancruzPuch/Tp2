#ifndef UBICACIONES_H
#define UBICACIONES_H

#include <string>

using namespace std;

class Ubicacion{

	public:
		string nombre_edificio;
		int fila;
		int columna;
		
	public:
		void agregar_ubicacion(Ubicacion *ubicacion);
};

#endif
