#include "Alumno.h"

void Alumno::DarAlumno()
{
	cout << "Dar Carnet:"; cin >> carnet;
	cin.ignore();
	cout << "Dar Nombre:"; cin.getline(nombre, 50);
	cout << "Dar Curso:"; cin >> Curso;
}
void Alumno::Prt()
{
	cout << "Carnet:" << setw(8) << carnet << " Nombre:" << nombre << " Curso:" << Curso << endl;
}

int Alumno::GetCurso()
{
	return Curso;
}