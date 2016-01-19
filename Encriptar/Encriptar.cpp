// Encriptación de Datos
#include <iostream>
#include <iomanip>
#include <string.h> //para strlen()
#include <conio.h>

using namespace std;

void main()
{
	int len;
	const int NUM = 120; //num. maximo de caracteres.
	char texto[NUM], key;
	cout << "Escriba un texto:";
	cin.getline(texto, 120);
	cout << "Introduzca la clave para codificar (un digito):";
	cin >> key;
	len = strlen((char*)texto);
	cout << "\t*** texto Codificado ***\n";
	for (int i = 0; i<len; i++) {
		texto[i] = (texto[i] >> i % 8) | (texto[i] << (8 - i % 8));//rot a la der
		texto[i] = texto[i] ^ key; //XOR
	}
	cout << texto << endl;
	cout.fill('*');
	cout << setw(50) << " Transmitiendo texto ";
	cout << setw(30) << " " << endl;
	cout << "\t*** texto DeCodificado ***\n";
	for (int j = 0; j<len; j++) {
		texto[j] = texto[j] ^ key;
		texto[j] = (texto[j] << j % 8) | (texto[j] >> (8 - j % 8));//rot a la izq.
	}
	cout << texto << endl << endl;

	cout << "Adios...\n";
	_getch();
}