#ifndef MATERIALES_H
#define MATERIALES_H

#include <string>

using namespace std;

class Material{
	
	private:
		string nombre_material;
		int cantidad_material;
	
	public:		
		
		//Precondiciones: -
		//Postcondicions: Construye la memoria para un objeto material
		Material();
		
		//Precondiciones: -
		//Postcondicions: Construye un objeto material
		Material(string nombre_material, int cantidad_material);
		
		//Precondiciones: -
		//Postcondicions: Devuelve el nombre del material
		string obtener_nombre_material();
		
		//Precondiciones: -
		//Postcondicions: Devuelve la cantidad disponible del material
		int obtener_cantidad_material();

		void establecer_nombre_material (string nombre);

		void establecer_cantidad (int cantidad);

};

#endif
