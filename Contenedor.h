#include "Estudiante.h"

class Contenedor {
private:
	Estudiante* vector[30]; //vector estatico 
						 //de objetos din�micos.
	int cantidad;
	int tamano;
public:
	Contenedor();
	~Contenedor();
	float porcentajeAprobacion();
	float porcentajeReprobacion();
	bool porcAprobMayorAPorcReprob();
	Estudiante* buscaMejorEstudiante();
	//void ordenBurbujaVectorPorPromedio();
	string toStringDescendentePorPromedio();
	void insertaElemento(Estudiante*);
	void imprimeElementos();
};