#include "Contenedor.h" 

void main() {
	Contenedor c;
	// Crear elementos a ingresar...
	Estudiante* per1 = new Estudiante("1-111-111", "Juan", 15);
	Estudiante* per2 = new Estudiante("2-222-222", "Georges", 74);
	Estudiante* per3 = new Estudiante("3-333-333", "Ana", 100);
	// Ingresar elementos al contenedor....
	c.insertaElemento(per1);
	c.insertaElemento(per2);
	c.insertaElemento(per3);

	cout << "------IMPRIME SI EL %DE APROB ES MAYOR AL % DE REPRO-----" << endl;
	if (c.porcAprobMayorAPorcReprob() == true)
		cout << "El % de aprobacion es mayor al % de reprobacion.\n";
	else
		cout << "El % de reprobacion es mayor al % de reprobacion.\n";

	cout << "-------------ESTUDIANTE CON MEJOR PROMEDIO-----------" << endl;
	Estudiante* e = c.buscaMejorEstudiante();
	cout << e->toString();

	cout << "-----IMPRIME CONTENEDOR ORDENADO DESC POR PROMEDIO----------" << endl;
	cout << c.toStringDescendentePorPromedio();



	system("Pause");
}