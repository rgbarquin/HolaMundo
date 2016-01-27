#include "Fraccion.h"
#include <conio.h>

void main()
{
	Fraccion f1(1, 4);
	Fraccion f2(1, 2);
	Fraccion f3;
	cin >> f3; //pide datos para f3
	Fraccion fr = f1 + f2;
	cout << f1 << " + " << f2 << " = " << fr << endl;
	Fraccion fm = f1 * f2;
	cout << f1 << " * " << f2 << " = " << fm << endl;
	int k = 4;
	fr = k * f1; //Pre-multip
	cout << k << " * " << f1 << " = " << fr << endl;
	fr = k / f3; //Pre-division
	cout << k << " / " << f3 << " = " << fr << endl;
	k = 2;
	fr = f2 * k; //Post-multip
	cout << f2 << " * " << k << " = " << fr << endl;
	fr = f3 / k; //Post-division
	cout << f3 << " / " << k << " = " << fr << endl;
	Fraccion f4;
	cin >> f4;
	cout << f4;

	cout << endl;
	cout << "Adios...\n";
	_getch();
}