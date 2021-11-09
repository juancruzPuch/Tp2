#ifndef CASILLERO_H
#define CASILLERO_H


class Casillero {

protected:
    int fila;
    int columna;
    char caracter;
    std::string caracter_color;
public:

    Casillero(int fila, int columna, char caracter);
    char obtener_caracter();
    int obtener_fila();
    int  obtener_columna();
    std::string obtener_caracter_color();


    
};



#endif //CASILLERO_H