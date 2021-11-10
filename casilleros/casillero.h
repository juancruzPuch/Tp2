#ifndef CASILLERO_H
#define CASILLERO_H


class Casillero {

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


    
};



#endif //CASILLERO_H