#ifndef MAPA_H
#define MAPA_H

using namespace std;

class Mapa{

	private:
		int cantidad_filas;
		int cantidad_columnas;
		char **mapa;
		
	public:
		
		//Precondiciones: -
		//Postcondicions: Construye la memoria para un objeto mapa
		Mapa();
		
		//Precondiciones: -
		//Postcondicions: Construye un objeto mapa
		Mapa(int cantidad_filas, int cantidad_columnas);
		
		void guardar_mapa(int fila, int columna, char valor);
		
		//Precondiciones: -
		//Postcondicions: Devuelve la cantidad de filas
		int obtener_filas();
		
		//Precondiciones: -
		//Postcondicions: Devuelve la cantidad de columnas
		int obtener_columnas();
		
		//Precondiciones: -
		//Postcondicions: Devuelve el mapa
		char **obtener_mapa();
};

#endif
