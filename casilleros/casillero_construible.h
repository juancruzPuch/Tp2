#ifndef CASILLERO_CONSTRUIBLE_H
#define CASILLERO_CONSTRUIBLE_H

#include "casillero.h"

class Casillero_construible: public Casillero{
private:
    bool construido;
    std::string tipo_edificio;
public:
    Casillero_construible(int fila, int columna, char caracter);
    std::string obtener_tipo();
    void establecer_tipo(std::string tipo);
    int obtener_cantidad_material();
    void establecer_cantidad_material(int cantidad);
    void liberar();
};


#endif // CASILLERO_CONSTRUIBLE_H
