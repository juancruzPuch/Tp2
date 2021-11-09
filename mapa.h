#ifndef MAPA_H
#define MAPA_H

<<<<<<< HEAD
#include "casillero.h"
#include "casilleros/casillero.h"
=======
using namespace std;
>>>>>>> 29b993475e8969b1d80cd39376e24f98152e0465

class Mapa{

	private:
		int cantidad_filas;
		int cantidad_columnas;
<<<<<<< HEAD
		Casillero*** casilleros;
    public:
        void inicializar_mapa(int cant_filas, int cant_columnas);

        int obetener_cantidad_filas ();
        int obetener_cantidad_columnas ();

        Casillero* identificar_casillero(int fila, int columna, char caracter);
        void agregar_casillero(Casillero* casillero);
};



#endif //MAPA_H
=======
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
>>>>>>> 29b993475e8969b1d80cd39376e24f98152e0465
