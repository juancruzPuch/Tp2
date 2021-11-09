#ifndef CASILLERO_H
#define CASILLERO_H


class Casillero {

protected:
    int fila;
    int columna;
    char caracter;
public:

    Casillero(int fila, int columna, char caracter);
    char obtener_caracter();
    int obtener_fila();
    int  obtener_columna();
    //virtual void mostrar() = 0;


    
};



#endif //CASILLERO_H