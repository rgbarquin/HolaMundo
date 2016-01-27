//principal.cpp
#include "complejo.h"
#include <conio.h>

void main()
{
	complejo c1(2.5, 3), c2;
	cin >> c2; //pedir datos para c2

	complejo c3 = c1 + c2; // c1.operator+(c2)
	cout << c1 << " + " << c2 << " = " << c3 << endl;

	c3 = c1 * c2;
	cout << c1 << " * " << c2 << " = " << c3 << endl;

	c1 == c2 ? cout << c1 << " y " << c2 << " son Iguales\n" :
		cout << c1 << " y " << c2 << " son Diferentes\n";

	if (c1 > c2) cout << c1 << " es > o igual que " << c2;
	else cout << c1 << " es < que " << c2;

	cout << "\nHe terminado.." << endl;

	cout << "Adios...\n";
	_getch();
}