#include "MiString.h"
#include <conio.h>

//main.cpp
void main()
{
	MiString cs;
	while (1) {
		cout << "\nDar una frase:?";
		cin >> cs;
		cout << "La frase al reves es:";
		for (int i = cs.GetLen() - 1; i >= 0; i--) {
			cout << cs[i];
		}
		cout << "\nEl texto introducido es: " << cs << endl; 
		cout << "\nDesea Salir? SI o NO:?";
		MiString cs1;
		cin >> cs1;
		if (cs1 == "SI") break;
	}


	cout << "\nAdios.." << endl;
	_getch();
}