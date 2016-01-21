#include <iostream>
#include <math.h>
#include <conio.h> //para _getch

using namespace std;

int CuentaLetras(char* cadena, char letra);

void main()
{
	char let;
	char *cad;
	cad = new char[120];

	cout << "Que letra desea contar:";
	cin >> let;
	cin.ignore();
	cout << endl;
	cout << "Escriba el texto de hasta 120 caracteres:";
	cin.getline(cad, 120);
	cout << endl;
	cout << "La letra '" << let << "' se repite " << CuentaLetras(cad, let) << " veces." << endl;

	delete[] cad; //liberar

	cout << "Adios..." << endl;
	_getch();
}

int CuentaLetras(char *cadena, char letra)
{
	int cont = 0;
	for (int i = 0; i < strlen(cadena); i++) {
		if (cadena[i] == letra) cont++;
	}

	return cont;
}
