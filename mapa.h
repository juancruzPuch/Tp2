#ifndef MAPA_H
#define MAPA_H

#include "casillero.h"
#include "casilleros/casillero.h"

class Mapa{

	private:
		int cantidad_filas;
		int cantidad_columnas;
		Casillero*** casilleros;
    public:
        void inicializar_mapa(int cant_filas, int cant_columnas);

        int obetener_cantidad_filas ();
        int obetener_cantidad_columnas ();

        Casillero* identificar_casillero(int fila, int columna, char caracter);
        void agregar_casillero(Casillero* casillero);
};



#endif //MAPA_H