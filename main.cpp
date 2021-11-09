#include "materiales.h"
#include "edificios/edificio.h"
#include "procesamiento.h"
#include "edificios/tipos_edificios.h"
#include "casilleros/casillero.h"

int main(){
	
	Proceso proceso;
	
	proceso.leer_opciones_edificios();
	proceso.leer_materiales();
	proceso.leer_ubicaciones();
	proceso.leer_mapa();

	proceso.listar_edificios();
		
	proceso.cerrar_materiales();
	proceso.cerrar_ubicaciones();
	proceso.cerrar_mapa();
	proceso.cerrar_edificios();

	cout << "todo ok" << endl;
	

	
	return 0;
}
