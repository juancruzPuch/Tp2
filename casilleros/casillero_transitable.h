#ifndef CASILLERO_TRANSITABLE_H
#define CASILLERO_TRANSITABLE_H

#include "casillero.h"
#include "../materiales.h"

class Casillero_transitable: public Casillero{
<<<<<<< HEAD
private:
    Material material;
public:
    Casillero_transitable(int fila, int columna, char caracter);
    std::string obtener_tipo();
    void establecer_tipo(std::string tipo);
    int obtener_cantidad_material();
    void establecer_cantidad_material(int cantidad);
    void liberar();

=======
	public:
		Casillero_transitable(int fila, int columna, char caracter);
>>>>>>> f777925b106583524d16eb9ea15f47d111624d2d
};


#endif // CASILLERO_TRANSITABLE_H
