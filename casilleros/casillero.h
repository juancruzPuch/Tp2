#ifndef CASILLERO_H
#define CASILLERO_H


class Casillero {

	protected:
		int fila;
		int columna;
		char caracter;
		std::string caracter_color;
		
	public:
		
		//Precondiciones: -
		//Postcondicions: Construye un objeto tipo casillero
		Casillero(int fila, int columna, char caracter);
		
		//Precondiciones: -
		//Postcondicions: Devuelve el caracter del casillero
		char obtener_caracter();
		
		//Precondiciones: -
		//Postcondicions: Devuelve la fila en la que se encuentra el casillero
		int obtener_fila();
		
		//Precondiciones: -
		//Postcondicions: Devuelve la columna en la que se encuentra el casillero
		int  obtener_columna();
		
		//Precondiciones: -
		//Postcondicions: Devuelve el color del caracter del casillero
		std::string obtener_caracter_color();
		
		//Precondiciones: -
		//Postcondicions: Verifica que el casillero sea construible
		bool es_construible();
		
		//Precondiciones: -
		//Postcondicions: Verifica que el casillero sea transitable
		bool es_transitable();


    
};



#endif //CASILLERO_H
