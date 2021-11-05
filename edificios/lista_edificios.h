#ifndef ASERRADERO_H
#define ASERRADERO_H

#include "tipos_edificios.h"
#include "parcer.h"

class Lista_edificios {

private:
    int cant;
    Tipo_edificio** tipos_edificios;
public:
    Lista_edificios ();
    void obtener_edificios(Tipo_edificio** tipos_edificios);
    int  obtener_cantidad_edificios();
    void agregar_edificio(Tipo_edificio* tipo_edificio);
};

#endif // ASERRADERO_H