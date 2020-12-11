#include "Estudiante.h"

Estudiante::Estudiante() {
	cedula = "";
	nombre = "sin definir";
	promedio = 0;
}

Estudiante::Estudiante(string cedula, string nombre, float promedio) {
	this->cedula = cedula;
	this->nombre = nombre;
	this->promedio = promedio;
}

string Estudiante::getCedula() {
	return cedula;
}

void Estudiante::setCedula(string cedula) {
	this->cedula = cedula;
}

void Estudiante::setNombre(string nombre) {
	nombre = nombre;
}

string Estudiante::getNombre() {
	return nombre;
}

float Estudiante::getPromedio() {
	return promedio;
}

void Estudiante::setPromedio(float promedio) {
	promedio = promedio;
}

string Estudiante::toString() {
	stringstream s;
	s << "**************" << endl;
	s << "* ESTUDIANTE *" << endl;
	s << "**************" << endl;
	s << "CEDULA:  " << cedula << endl;
	s << "NOMBRE:  " << nombre << endl;
	s << "PROMEDIO:" << promedio << endl;
	s << " -------------" << endl << endl;
	return s.str();
}

Estudiante::~Estudiante(void) {
	cout << "Se ha destruido un estudiante" << endl;
}
