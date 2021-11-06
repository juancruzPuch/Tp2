#include "materiales.h"
#include "edificios.h"
#include "ubicaciones.h"
#include "procesamiento.h"
#include "edificios/tipos_edificios.h"

int main(){

	Proceso proceso;
	
	//proceso.leer_opciones_edificios();
	proceso.leer_materiales();
	proceso.leer_ubicaciones();
	proceso.leer_mapa();
	
	proceso.mostrar_mapa();

	cout << "todo ok" << endl;
	
	
	
	proceso.cerrar_materiales();
	proceso.cerrar_ubicaciones();
	proceso.cerrar_mapa();

	
	return 0;
}
