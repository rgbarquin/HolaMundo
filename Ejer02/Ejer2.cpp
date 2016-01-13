#include <iostream> 
#include <string.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void main(int argc, char *argv[])
{
	
	char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
	

	if (argc > 1 && strlen(argv[1]) == 8) {
		int num = atoi(argv[1]);
		int pos = num % 23;
		char let = letras[pos];
		cout << "El DNI es: " << argv[1] << "-" << let << endl;
	}
	else {
		//pido el nif

		char miLetra;
		char NIF[20];
		int len = 0;
		while (len != 9) {
			cout << "Dar el número del NIF(XX - Salir):";
			cin >> NIF;
			if (strcmp(NIF, "XX") == 0) return; //fin
			len = strlen(NIF);
			if (len == 9) {
				miLetra = NIF[8];
			}
			if (len < 9) cout << "\a";
		}

		char DNI[8] = { NIF[0], NIF[1], NIF[2], NIF[3], NIF[4], NIF[5], NIF[6], NIF[7] };
		int num = atoi(DNI);
		int pos = num % 23;
		char let = letras[pos];

		if (let != NIF[8]) {
			cout << "El número del NIF: " << NIF << " es INCORRECTO." << endl;
		}
		else {
			cout << "El número del NIF: " << NIF << " es CORRECTO." << endl;
		}
		
	}

	cout << "Adios...\n";
	_getch();

} /* fin de main() */