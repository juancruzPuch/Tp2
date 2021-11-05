#ifndef MATERIALES_H
#define MATERIALES_H

#include <string>

using namespace std;

class Material{
	
	public:
		string nombre_material;
		int cantidad_material;
	
	public:		
		//Precondiciones: Se tiene que haber leído bien el archivo de materiales
		//Postcondiciones: Agrega el material leído a la lista de materiales disponibles
		void agregar_material();

		//Precondiciones: -
		//Postcondiciones: Imprime los materiales disponibles
		void listar_materiales();

		//Precondiciones: -
		//Postcondiciones: Verifica que haya la sufuciente cantidad de materiales para construir un edificio especifico
		bool verificar_materiales(string nombre_ingresado, int piedra_necesaria, int madera_necesaria, int metal_necesario, int construidos, int cantidad_max);
};

#endif
