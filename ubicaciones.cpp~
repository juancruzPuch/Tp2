#include "ubicaciones.h"

void Ubicacion::agregar_ubicacion(Ubicacion *ubicacion){

	int n = this-> cantidad_ubicaciones;
	Ubicacion **vector_ubicaciones = new Ubicacion*[n + 1];
	if(vector_ubicaciones == NULL)
		delete[] vector_ubicaciones;
	
	for(int i = 0; i < this->cantidad_ubicaciones; i++)
		vector_ubicaciones[i] = this->ubicacion[i];
		
	vector_ubicaciones[n] = ubicacion;
	
	if(this->cantidad_ubicaciones != 0){
		delete[] this->ubicacion;
	}
	
	this->ubicacion = vector_ubicaciones;
	this->cantidad_ubicaciones++;	

}
