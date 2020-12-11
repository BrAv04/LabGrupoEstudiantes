//Estudiante:	Bryan Ávila Chang
//Cédula:		207650918
//Curso:		Programación I
//Ciclo:		III-2020

#include "Contenedor.h"
#include <sstream>

//------------------------------------------------------------------
void Contenedor::insertaElemento(Estudiante* p) {
	vector[cantidad] = p;
	cantidad++;
}
	
//------------------------------------------------------------------
void Contenedor::imprimeElementos() {
	for (int i = 0; i < cantidad; i++) {
		cout << "Elemento " << i + 1 << endl;
		cout << vector[i]->toString();
	}
}

//------------------------------------------------------------------
//1 -implementar
Contenedor::Contenedor() {
	cantidad = 0;
	tamano = 30;
	for (int i = 0; i < tamano; i++) { vector[i] = NULL; }
}
//------------------------------------------------------------------
//2-implementar
Contenedor::~Contenedor() {
	cout << "Se han eliminado los punteros dinamicos"<<endl;
	for (int i = 0; i < cantidad; i++) { delete vector[i]; }
}
//------------------------------------------------------------------

//3-implementar
float Contenedor::porcentajeAprobacion() {
	int contador =0;
	float aprobacion;
	for (int i = 0; i < cantidad; i++)
		if (vector[i]->getPromedio() >= 70)
			contador++;
	aprobacion = (contador / cantidad) * 100;
	return aprobacion;
}
//------------------------------------------------------------------
//4
float Contenedor::porcentajeReprobacion() {
	int contador = 0;
	float reprobacion;
	for (int i = 0; i < cantidad; i++)
		if (vector[i]->getPromedio() < 70)
			contador++;
	return reprobacion = (contador / cantidad) * 100;
}
//------------------------------------------------------------------
//5
bool Contenedor::porcAprobMayorAPorcReprob() {
	return ((porcentajeAprobacion() > porcentajeReprobacion()) ? true : false);
}
//------------------------------------------------------------------
//6
Estudiante* Contenedor::buscaMejorEstudiante() {
	Estudiante* mejorEstudiante = vector[0];
	float mejorPromedio = 0;
	for (int i = 0; i < cantidad; i++)
		if (vector[i]->getPromedio() > mejorPromedio) {
			mejorEstudiante = vector[i];
			mejorPromedio = vector[i]->getPromedio();
		}
	return mejorEstudiante;
}
//------------------------------------------------------------------
//7
//void Contenedor::ordenBurbujaVectorPorPromedio() {
//	Estudiante* temp;
//	for (int i = 0; i < cantidad; i++)
//		for (int j = 1; j < (cantidad - i); j++)
//			if (vector[j-1] < vector[j]) {
//				temp = vector[j - 1];
//				vector[j-1] = vector[j];
//				vector[j]= temp;
//			}
//}
////7
string Contenedor::toStringDescendentePorPromedio() {
	//ordenBurbujaVectorPorPromedio();
	stringstream s;
	s << endl <<endl;
	for (int i = 0; i < cantidad; i++) {
		s << vector[i]->toString();
		s << endl << endl;
	}
	s << endl;
	return s.str();
}



