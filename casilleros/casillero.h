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
    std::string obtener_tipo_casillero();
    std::string obtener_caracter_color();
    virtual std::string obtener_tipo() = 0;
    virtual void establecer_tipo(std::string tipo) = 0;
    virtual int obtener_cantidad_material() = 0;
    virtual void establecer_cantidad_material(int cantidad) = 0;
    virtual void liberar() = 0;
    bool es_construible();
    bool es_transitable();


    
};



#endif //CASILLERO_H
