#include "Vector.h"
#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int num;
	cout << "Num:";
	cin >> num;
	Vector v(num); //crear vector
	for (int i = 0; i<num; i++)
		cin >> v[i];
	//imprimir vector
	cout << "El vector es:\n";
		for (int i = 0; i<num; i++)
			cout << v[i] << endl;
	//ordenar
	char orden;
	cout << "Como lo quiere ordenar (A=asc D=desc):?";
	cin >> orden;
	cout << "\nEl vector es ordenado es:\n";
	if (orden == 'A' || orden == 'a') v.Ordena(true); //asc
	else v.Ordena(false);
	for (int i = 0; i<num; i++)
		cout << v[i] << endl;

	cout << "Adios.." << endl;
	_getch();
}