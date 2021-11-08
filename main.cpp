#include "materiales.h"
#include "edificios/edificio.h"
#include "procesamiento.h"
#include "edificios/tipos_edificios.h"

int main(){

	Proceso proceso;
	
	proceso.leer_opciones_edificios();
	proceso.leer_materiales();
	proceso.leer_ubicaciones();
	proceso.leer_mapa();

	proceso.listar_edificios();
	
	proceso.mostrar_mapa();	
	
	proceso.cerrar_materiales();
	proceso.cerrar_ubicaciones();
	proceso.cerrar_mapa();

	cout << "todo ok" << endl;


	
	return 0;
}
