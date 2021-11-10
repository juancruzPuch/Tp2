#include "materiales.h"

Material::Material(){
}

Material::Material(string nombre_material, int cantidad_material){
	this->nombre_material = nombre_material;
	this->cantidad_material = cantidad_material;
}
string Material::obtener_nombre_material(){
	return this->nombre_material;
}

int Material::obtener_cantidad_material(){
	return this->cantidad_material;
}
<<<<<<< HEAD
void Material::establecer_nombre_material(std::string nombre){
	this -> nombre_material = nombre;
}
void Material::establecer_cantidad(int cantidad){
	this -> cantidad_material = cantidad;
}
=======

void Material::modificar_cantidad(int cantidad_usada){
	this->cantidad_material -= cantidad_usada;
}
>>>>>>> f777925b106583524d16eb9ea15f47d111624d2d
