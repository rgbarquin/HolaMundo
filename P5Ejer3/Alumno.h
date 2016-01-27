//Fichero Alumno.h
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

class Alumno
{
	long carnet;
	char nombre[50];
	int Curso;
public:
	void DarAlumno();
	void Prt();
	int GetCurso();
};
