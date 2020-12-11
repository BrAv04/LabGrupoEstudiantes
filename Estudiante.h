//Estudiante:	Bryan Ávila Chang
//Cédula:		207650918
//Curso:		Programación I
//Ciclo:		III-2020

#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

class Estudiante {
private:
	string cedula;
	string nombre;
	float promedio;

public:
	Estudiante();
	Estudiante(string, string, float);
	string getCedula();
	void setCedula(string);
	void setNombre(string);
	string getNombre();
	float getPromedio();
	void setPromedio(float);
	string toString();
	~Estudiante(void);
};