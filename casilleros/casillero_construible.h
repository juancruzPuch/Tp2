#ifndef CASILLERO_CONSTRUIBLE_H
#define CASILLERO_CONSTRUIBLE_H

#include "casillero.h"

class Casillero_construible: public Casillero{
<<<<<<< HEAD
private:
    bool construido;
    std::string tipo_edificio;
public:
    Casillero_construible(int fila, int columna, char caracter);
    std::string obtener_tipo();
    void establecer_tipo(std::string tipo);
    int obtener_cantidad_material();
    void liberar();
=======
	public:
		Casillero_construible(int fila, int columna, char caracter);
>>>>>>> f777925b106583524d16eb9ea15f47d111624d2d
};


#endif // CASILLERO_CONSTRUIBLE_H
