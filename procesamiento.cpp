#include "materiales.h"
#include "procesamiento.h"
#include "edificios/tipos_edificios.h"
#include "edificios/parcer.h"
#include "edificios/edificio.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>

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

		agregar_material(material);

	}
	
	archivo_materiales.close();
}


void Proceso::agregar_material(Material *nuevo_material){

	Material **vector_materiales = new Material*[this->cantidad_materiales + 1];
	if(vector_materiales == NULL)
		delete[] vector_materiales;
	
	for(int i = 0; i < this->cantidad_materiales; i++)
		vector_materiales[i] = this->material[i];
		
	vector_materiales[this->cantidad_materiales] = nuevo_material;
	
	if(this->cantidad_materiales != 0){
		delete[] this->material;
	}
	
	this->material = vector_materiales;
	this->cantidad_materiales++;	

}




void Proceso::cerrar_materiales(){

	ofstream archivo_materiales(PATH_MATERIALES);
	
	for(int i = 0; i < this->cantidad_materiales; i++){
		archivo_materiales << this -> material[i] -> nombre_material << ' '
						   << this -> material[i] -> cantidad_material << '\n';
		//delete this->material[i];
	}
	
	delete[] this->material;
	this->material = nullptr;
}




void Proceso::mostrar_inventario(){

	long nombre_mas_largo = 0;
	long nombre = 0;

	cout << endl << endl;
	cout << "Lista de materiales propios:" << endl << endl;
	
	cout << "            ═══════════════════════════════" << endl;
	cout << "             Materiales        Cantidades"<< endl;
	cout << "            ═══════════════════════════════" << endl;
	
	for(int i = 0; i < this->cantidad_edificios; i++){
		nombre = this->material[i]->nombre_material.length();
		if(nombre > nombre_mas_largo)
			nombre_mas_largo = nombre;
	}
	
	for(int i = 0; i < this->cantidad_materiales; i++){
		long espacio = nombre_mas_largo - this->material[i]->nombre_material.length();
		cout << "              " << this->material[i]->nombre_material;
		cout << setw(23 + (int)espacio);
		cout << this->material[i]->cantidad_material <<endl;
	}
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


		agregar_tipo_edificio(tipo_edificio);

	}
	
	archivo_edificios.close();
}




void Proceso::agregar_tipo_edificio(Tipo_edificio* tipo_edificio){

    Tipo_edificio** nueva_lista_edificios = new Tipo_edificio*[(this -> cantidad_edificios) + 1];
    
    
    for (int i = 0; i < (this -> cantidad_edificios); i++){
        nueva_lista_edificios[i] = this->lista_edificios[i];
    }
    
 
    nueva_lista_edificios[this -> cantidad_edificios] = tipo_edificio;

    if (cantidad_edificios != 0){
        delete [] lista_edificios;
    } 
    
    this -> lista_edificios = nueva_lista_edificios;
    this -> cantidad_edificios++;
	
}







void Proceso::listar_edificios(){

	cout << endl << endl;
	cout << "Lista de edificios:" << endl << endl;
	cout << "            ════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════" << endl;
	cout << "             Nombre\t\tPiedra\t\tMadera\t\tMetal\t\tCantidad construida\tCuantos más se pueden construir"<< endl;
	cout << "            ════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════" << endl;
	
	long nombre_mas_largo = 0;
	long nombre = 0;
	for(int i = 0; i < this->cantidad_edificios; i++){
		nombre = this -> lista_edificios[i] -> obtener_tipo().length();
		if(nombre > nombre_mas_largo)
			nombre_mas_largo = nombre;
	}	
	for(int i = 0; i < this->cantidad_edificios; i++){
		long espacio = nombre_mas_largo - this -> lista_edificios[i] -> obtener_tipo().length();
		cout << "             " << this -> lista_edificios[i] -> obtener_tipo();
		cout << setw(12 + (int)espacio);
		cout << this -> lista_edificios[i] -> obtener_piedra() << setw(16);
		cout << this -> lista_edificios[i] -> obtener_madera() << setw(16);
		cout << this -> lista_edificios[i] -> obtener_metal() << setw(23);
		cout << this -> lista_edificios[i] -> obtener_cant_max_construido() - this -> lista_edificios[i] -> obtener_cant_construidos() << endl;
	}
}






//----------------------------------------------------------------------------------------------------------------------------------------------------


void Proceso::leer_ubicaciones(){

	fstream archivo_ubicaciones(PATH_UBICACIONES, ios::in);
	Edificio* edificio;
	
	int posicicon_edificio;

	char caracter, fila, columna;
	string tipo_edificio;
	
	while(archivo_ubicaciones >> tipo_edificio){
		archivo_ubicaciones >> caracter;
		archivo_ubicaciones >> fila;
		archivo_ubicaciones >> caracter;
		archivo_ubicaciones >> columna;
		archivo_ubicaciones >> caracter;


		edificio  = new Edificio (fila - '0', columna - '0');

		posicicon_edificio = identificar_edificio(edificio, tipo_edificio);

		lista_edificios[posicicon_edificio] -> agregar_edificio_construido(edificio);

	}
	archivo_ubicaciones.close();
}



int Proceso::identificar_edificio(Edificio* edificio, string tipo_edficio){

	int posicion_edificio = 0;
	while (lista_edificios[posicion_edificio] -> obtener_tipo() != tipo_edficio){

		posicion_edificio++;
	}
	
	return posicion_edificio;
}


void Proceso::cerrar_ubicaciones(){

	ofstream archivo_ubicaciones(PATH_UBICACIONES);
	Edificio* edificio = new Edificio;

	for(int i = 0; i < cantidad_edificios; i++){
		for(int j = 0; j < lista_edificios[i] -> obtener_cant_construidos(); j++){
		
			edificio = lista_edificios[i] -> obetener_edificios_construidos(j);

			archivo_ubicaciones << this -> lista_edificios[i] -> obtener_tipo() << " ("
								<< edificio -> obtener_fila() << ", "
								<< edificio -> obtener_columna() << ')' << '\n';
		}

		lista_edificios[i] -> librerar_edificos_construidos();
		delete lista_edificios[i];
	}
	delete [] lista_edificios;
}





//----------------------------------------------------------------------------------------------------------------------------------------------------



void Proceso::leer_mapa(){

	fstream archivo_mapa(PATH_MAPA, ios::in);

	char filas, columnas;

	archivo_mapa >> filas;
	archivo_mapa >> columnas;
	this->mapa = new Mapa;
	
	//Creación de la matriz dinámica
	mapa->mapa = new char * [filas - '0'];
	
	for(int i = 0; i < filas - '0'; i++)
		mapa->mapa[i] = new char[columnas - '0'];
	
	mapa->cantidad_filas = filas - '0';
	mapa->cantidad_columnas = columnas - '0';
	
	//Asignación de valores a la matriz
	for(int i = 0; i < mapa->cantidad_filas; i++){
		for(int j = 0; j < mapa->cantidad_columnas; j++)
			archivo_mapa >> mapa->mapa[i][j];
	}
	
	this->mapa = mapa;
	
	archivo_mapa.close();
}







void Proceso::cerrar_mapa(){
	
	for(int i = 0; i < this->mapa->cantidad_filas; i++){
		delete[] this->mapa->mapa[i];
	}
	delete[] mapa->mapa;
	delete mapa;
}





void Proceso::mostrar_mapa(){
	
	for(int i = 0; i < mapa->cantidad_filas; i++){
		for(int j = 0; j < mapa->cantidad_columnas; j++){
			
			if(mapa->mapa[i][j] == 'L')
				cout << BGND_LIGHT_BLUE_32 << "      " << END_COLOR;
			
			if(mapa->mapa[i][j] == 'T')
				cout << BGND_GREEN_34 << "      " << END_COLOR;
			
			if(mapa->mapa[i][j] == 'C')
				cout << BGND_GRAY_240 << "      " << END_COLOR;
		}
		cout << endl;
	}
	cout << endl;

}





//----------------------------------------------------------------------------------------------------------------------------------------------------



void Proceso::mostrar_menu(){
	cout << endl << endl;
	cout << TXT_ITALIC << TXT_LIGHT_AQUA_123 << "\t            ¡BIENVENIDOS A ANDYPOLIS!" << END_COLOR << endl << endl;
	cout << "                        " << TXT_UNDERLINE << "Menú de opciones" << END_COLOR << endl << endl;
	cout << "            ╔═══════════════════════════════════════╗" << endl;
	cout << "            ║ 1. Construir edificio por nombre      ║" << endl;
	cout << "            ║ 2. Listar los edificios construidos   ║" << endl;
	cout << "            ║ 3. Listar todos los edificios         ║" << endl;
	cout << "            ║ 4. Demoler un edificio por coordenada ║" << endl;
	cout << "            ║ 5. Mostrar mapa                       ║" << endl;
	cout << "            ║ 6. Consultar coordenada               ║" << endl;
	cout << "            ║ 7. Mostrar inventario                 ║" << endl;
	cout << "            ║ 8. Recolectar recursos producidos     ║" << endl;
	cout << "            ║ 9. LLuvia de recursos                 ║" << endl;
	cout << "            ║ 10. Guardar y salir                   ║" << endl;
	cout << "            ╚═══════════════════════════════════════╝" << endl << endl;
}

