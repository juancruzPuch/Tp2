#ifndef MAPA_H
#define MAPA_H

#include "casilleros/casillero.h"

class Mapa{

<<<<<<< HEAD
private:
      int cantidad_filas;
      int cantidad_columnas;
      Casillero*** casilleros;
public:
      Mapa();
      void inicializar_mapa(int cant_filas, int cant_columnas);

      int obtener_cantidad_filas ();
      int obtener_cantidad_columnas ();



      Casillero* identificar_casillero(int fila, int columna, char caracter);
      void agregar_casillero(Casillero* casillero);

      //Precondiciones: -
      //Postcondicions: Muestra un dibujo del mapa 
      void mostrar_mapa ();

      bool se_puede_demoler (int fila, int columna);

      Casillero* obtener_casillero(int fila, int columna);

      //Precondiciones: un numero mayor a 0
      //Postcondicions: devuelve un numero entre el limite y 0
      void pedir_coordenada (int &fila, int &columna);



      void liberar_casilleros ();
=======
	private:
		int cantidad_filas;
		int cantidad_columnas;
		Casillero*** casilleros;
		
	public:
	
		//Costructor
		Mapa();
		
		//Precondiciones: -
		//Postcondicions: Inicializa la memoria del mapa
		void inicializar_mapa(int cant_filas, int cant_columnas);
	
		//Precondiciones: -
		//Postcondicions: Devuelve la cantidad de filas
		int obtener_cantidad_filas ();
		
		//Precondiciones: -
		//Postcondicions: Devuelve la cantidad de columnas
		int obtener_cantidad_columnas ();
		
		//Precondiciones: -
		//Postcondicions: Devuelve el tipo de casillero
		Casillero* tipo_casillero(int fila, int columna);

		//Precondiciones: -
		//Postcondicions: Crea un objeto casillero transitable, intransitabloe o construible
		Casillero* identificar_casillero(int fila, int columna, char caracter);
		
		//Precondiciones: -
		//Postcondiciones: Agrega el casillero leído a la lista de casilleros
		void agregar_casillero(Casillero* casillero);

		//Precondiciones: -
		//Postcondicions: Muestra un dibujo del mapa 
		void mostrar_mapa ();
			
		//Precondiciones: un numero mayor a 0
		//Postcondicions: devuelve un numero entre el limite y 0
		int pedir_coordenada (int limite);


		//Precondiciones: -
		//Postcondiciones: Libera la memoria utilizada por los casilleros
		void liberar_casilleros ();
>>>>>>> f777925b106583524d16eb9ea15f47d111624d2d
};



#endif //MAPA_H
