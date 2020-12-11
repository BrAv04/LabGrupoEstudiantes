//Estudiante:	Bryan Ávila Chang
//Cédula:		207650918
//Curso:		Programación I
//Ciclo:		III-2020

#include "Estudiante.h"

class Contenedor {
private:
	Estudiante* vector[30]; //vector estatico 
						 //de objetos dinámicos.
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