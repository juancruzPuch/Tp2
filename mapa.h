#ifndef MAPA_H
#define MAPA_H

#include "casilleros/casillero.h"

class Mapa{

private:
      int cantidad_filas;
      int cantidad_columnas;
      Casillero*** casilleros;
public:
      Mapa();
      void inicializar_mapa(int cant_filas, int cant_columnas);

      int obtener_cantidad_filas ();
      int obtener_cantidad_columnas ();



      Casillero* identificar_casillero(int fila, int columna, char caracter);
      void agregar_casillero(Casillero* casillero);

      //Precondiciones: -
      //Postcondicions: Muestra un dibujo del mapa 
      void mostrar_mapa ();

      //Precondiciones: un numero mayor a 0
      //Postcondicions: devuelve un numero entre el limite y 0
      int pedir_coordenada (int limite);



      void liberar_casilleros ();
};



#endif //MAPA_H
