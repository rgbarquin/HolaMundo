// Calculo de la Letra del DNI
#include <iostream> 
#include <string.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void main()
{
	char DNI[20];
	char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
	int len = 0;
	while (len != 8) {
		cout << "Dar el número del DNI(XX - Salir):";
		cin >> DNI;
		if (strcmp(DNI, "XX") == 0) return; //fin
		len = strlen(DNI);
			if (len < 8) cout << "\a";
	}
	//algoritmo para calcular la letra
	int num = atoi(DNI);
	int pos = num % 23;
	char let = letras[pos];
	cout << "El DNI es: " << DNI << "-" << let << endl;
	cout << "Adios...\n";
	_getch();
} /* fin de main() */