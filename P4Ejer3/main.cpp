#include "Fraccion.h"
#include <conio.h> //para _getch
#include <iostream>

using namespace std;


void main(void)
{
	// declaración de fracciones
	Fraccion f1(1, 4); // Representa 1/4
	Fraccion f2(1, 2); // Representa 1/2
	Fraccion f3; // Representa 0/1
	Fraccion f4(4); // Representa 4/1
	// oporaciones aritméticos
	Fraccion suma = f1.Suma(f2);
	Fraccion resta = f1.Resta(f3);
	Fraccion producto = f1.Multiplica(f4);
	Fraccion cociente = f1.Divide(f2);
	cout << "Primera fracción: "; f1.Prt();
	cout << "Segunda fracción: "; f2.Prt();
	cout << "Suma: "; suma.Prt();
	cout << "Resta: "; resta.Prt();
	cout << "Producto: "; producto.Prt();
	cout << "Cociente: "; cociente.Prt();
	cout << "Ya he terminado." << endl;

	cout << "Adios..." << endl;
	_getch();
}