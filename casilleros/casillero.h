#ifndef CASILLERO_H
#define CASILLERO_H


class Casillero {

<<<<<<< HEAD
protected:
    int fila;
    int columna;
    char caracter;
    std::string tipo;
    std::string caracter_color;
public:

    Casillero(int fila, int columna, char caracter);
    char obtener_caracter();
    int obtener_fila();
    int  obtener_columna();
    std::string obtener_tipo();
    std::string obtener_caracter_color();
    virtual std::string obtener_tipo();
    virtual void establecer_tipo(std::string tipo);
    virtual int obtener_cantidad_material();
    virtual void establecer_cantidad_material(int cantidad);
    virtual void liberar();
    bool es_construible();
    bool es_transitable();
=======
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
>>>>>>> f777925b106583524d16eb9ea15f47d111624d2d


    
};



#endif //CASILLERO_H
