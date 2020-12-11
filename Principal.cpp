#include "Contenedor.h" 

int main() {
	Contenedor c;
	// Crear elementos a ingresar...
	Estudiante* per1 = new Estudiante("1-111-111", "Juan", 15);
	Estudiante* per2 = new Estudiante("2-222-222", "Georges", 74);
	Estudiante* per3 = new Estudiante("3-333-333", "Ana", 50);
	Estudiante* per4 = new Estudiante("4-444-444", "Erick", 85);
	Estudiante* per5 = new Estudiante("5-555-555", "Sofia", 93);
	// Ingresar elementos al contenedor....
	c.insertaElemento(per1);
	c.insertaElemento(per2);
	c.insertaElemento(per3);
	c.insertaElemento(per4);
	c.insertaElemento(per5);

	cout << "------IMPRIME SI EL %DE APROB ES MAYOR AL % DE REPRO-----" << endl;
	if (c.porcAprobMayorAPorcReprob() == true)
		cout << "El % de aprobacion es mayor al % de reprobacion.\n";
	else
		cout << "El % de reprobacion es mayor al % de reprobacion.\n";

	cout << "-------------ESTUDIANTE CON MEJOR PROMEDIO-----------" << endl;
	Estudiante* e = c.buscaMejorEstudiante();
	cout << e->toString();

	cout << "-----IMPRIME CONTENEDOR ESTUDIANTES----------" << endl;
	cout << c.toStringDescendentePorPromedio();

	return 0;
}