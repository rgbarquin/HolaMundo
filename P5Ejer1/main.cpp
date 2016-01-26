#include "Fecha.h"
#include <iostream>
#include <conio.h>

using namespace std;

//fichero principal.cpp
void main()
{
	int num;
	Fecha f1(12, 4, 2001); //crear una fecha
	Fecha f2; //crear una fecha con valores por defecto
	f2.Pidedatos(); //pedir fecha 2
	cout << "\nFecha 1: "; f1.Prt();
	cout << "\nFecha 2: "; f2.Prt();
	cout << "\nNum.dias a sumar:?";
	cin >> num;

	Fecha f3; //crear objeto f3 con valores por defecto
	f3 = f2.Suma(num); //sumar “num” días
	f2.Prt();
	cout << " + " << num << " dias = ";
	f3.Prt();

	cout << "\nNum.dias a restar:?";
	cin >> num;
	f3 = f2.Resta(num); //restar “num” días
	f2.Prt();
	cout << " - " << num << " dias = ";
	f3.Prt();

	cout << " \nHe terminado.." << endl;

	cout << "Adios...\n";
	_getch();
}