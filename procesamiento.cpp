#include "materiales.h"
#include "procesamiento.h"
#include "edificios/tipos_edificios.h"
#include "edificios/parcer.h"

#include <iostream>
#include <fstream>
#include <iomanip>

const int CANT_CARACTERISTICAS_EDIFICIOS = 5;


Proceso::Proceso (){
	cantidad_edificios = 0;
	cantidad_materiales = 0;
	cantidad_ubicaciones = 0;
}



//----------------------------------------------------------------------------------------------------------------------------------------------------






void Proceso::leer_materiales(){

	fstream archivo_materiales(PATH_MATERIALES, ios::in);
	
	this->cantidad_materiales = 0;
	Material *material;
	string nombre, cantidad_material;
	
	while(archivo_materiales >> nombre){
		archivo_materiales >> cantidad_material;
		
		material = new Material;
		material->nombre_material = nombre;
		material->cantidad_material = stoi(cantidad_material);

		//agregar_material(material);

	}
	
	archivo_materiales.close();
}




//----------------------------------------------------------------------------------------------------------------------------------------------------




void Proceso::leer_opciones_edificios(){
	
	
	fstream archivo_edificios(PATH_EDIFICIOS, ios::in);

	Tipo_edificio* tipo_edificio;
    std::string lectura_edificios[CANT_CARACTERISTICAS_EDIFICIOS];


    while (archivo_edificios >> lectura_edificios[0]){

        archivo_edificios >> lectura_edificios[1];
        archivo_edificios >> lectura_edificios[2];
        archivo_edificios >> lectura_edificios[3];
        archivo_edificios >> lectura_edificios[4];

		Parser parser (lectura_edificios);
		tipo_edificio = parser.procesar_entrada();


		agregar_edificio(tipo_edificio);

	}
	
	archivo_edificios.close();
}



void Proceso::agregar_edificio(Tipo_edificio* tipo_edificio){

    Tipo_edificio** nueva_lista_edificios = new Tipo_edificio*[(this -> cantidad_edificios) + 1];
    
    
    for (int i = 0; i < (this -> cantidad_edificios); i++){
        nueva_lista_edificios[i] = lista_edificios[i];
    }
    
 
    nueva_lista_edificios[this -> cantidad_edificios] = tipo_edificio;

    if (cantidad_edificios > 0){

        delete [] lista_edificios;
    } 
    
    lista_edificios = nueva_lista_edificios;
    this -> cantidad_edificios++;
	
}



//----------------------------------------------------------------------------------------------------------------------------------------------------





void Proceso::leer_ubicaciones(){

	fstream archivo_ubicaciones(PATH_UBICACIONES, ios::in);
	
	this->cantidad_ubicaciones = 0;
	Ubicacion *ubicacion;
	string nombre_edificio;
	char caracter, fila, columna;
	
	while(archivo_ubicaciones >> nombre_edificio){
		archivo_ubicaciones >> caracter; //Lee el paréntesis
		archivo_ubicaciones >> fila;
		archivo_ubicaciones >> caracter; //Lee la coma
		archivo_ubicaciones >> columna;
		archivo_ubicaciones >> caracter; //Lee el paréntesis
		
		ubicacion= new Ubicacion;
		ubicacion->nombre_edificio = nombre_edificio;
		ubicacion->fila = fila - '0';
		ubicacion->columna = columna - '0';
		
		//agregar_ubicacion(ubicacion);
	}
	
	archivo_ubicaciones.close();
}





//----------------------------------------------------------------------------------------------------------------------------------------------------





void Proceso::leer_mapa(int *cantidad_filas){

	fstream archivo_mapa(PATH_MAPA, ios::in);

	char filas, columnas;

	archivo_mapa >> filas;
	archivo_mapa >> columnas;

	cout << "fila: " << mapa->cantidad_filas << endl;
	cout << "columna: " << mapa->cantidad_columnas << endl;
		
	//Creación de la matriz dinámica
	mapa->mapa = new char * [filas - '0'];
	
	for(int i = 0; i < filas - '0'; i++)
		mapa->mapa[i] = new char[columnas - '0'];
	
	mapa->cantidad_filas = filas - '0';
	mapa->cantidad_columnas = columnas - '0';
	*cantidad_filas = filas- '0';
			
	//Inicialización de la matriz con los datos
	for(int i = 0; i < mapa->cantidad_filas; i++){
		for(int j = 0; j < mapa->cantidad_columnas; j++)
			mapa->mapa[i][j] = 0;
	}
	
	for(int i = 0; i < mapa->cantidad_filas; i++){
		for(int j = 0; j < mapa->cantidad_columnas; j++)
			archivo_mapa >> mapa->mapa[i][j];
	}
	
	archivo_mapa.close();
	
}





//----------------------------------------------------------------------------------------------------------------------------------------------------




void Proceso::cerrar_materiales(){

	ofstream archivo_materiales(PATH_MATERIALES);
	
	for(int i = 0; i < this->cantidad_materiales; i++){
		archivo_materiales << this->material[i].nombre_material << ' '
						   << this->material[i].cantidad_material << '\n';
		//delete this->material[i];
	}
	
	delete[] this->material;
	this->material = nullptr;
}






//----------------------------------------------------------------------------------------------------------------------------------------------------





void Proceso::cerrar_ubicaciones(){

	ofstream archivo_ubicaciones(PATH_UBICACIONES);
	
	for(int i = 0; i < cantidad_ubicaciones; i++){
		archivo_ubicaciones << this->ubicacion[i].nombre_edificio << " ("
							<< this->ubicacion[i].fila << ", "
							<< this->ubicacion[i].columna << ')' << '\n';
	
		//delete this->ubicacion[i];
	}
	delete[] this->ubicacion;
}

