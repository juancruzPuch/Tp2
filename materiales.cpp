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
