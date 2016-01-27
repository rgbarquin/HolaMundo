#include "Alumno.h"
#include <conio.h>

void main()
{
	int num;
	Alumno al[100]; //array de 100 alumnos
	cout << "Numero de alumnos a introducir:?";
	cin >> num;
	for (int i = 0; i<num; i++) {
		al[i].DarAlumno();
	}
	cout << "\n*** Base de Datos ***\n";
	for (int i = 0; i<num; i++) {
		al[i].Prt();
	}

	int curso;
	cout << endl;
	cout << "Curso a ver:?";
	cin >> curso;
	for (int i = 0; i<num; i++) {
		//búsqueda en el array de alumnos e imprimir los encontrados
		if (curso == al[i].GetCurso()) al[i].Prt();
	}

	cout << "Adios...\n";
	_getch();
}