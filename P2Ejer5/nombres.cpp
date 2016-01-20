// fichero nombres.cpp
#include <iostream>
#include <string.h>
#include <stdio.h> //para gets()
#include <conio.h> //para _getch

using namespace std;

void main(void)
{
	char tmp[120], *temp, opcion = '0';
	char** pnombres;
	int Num;

	while(opcion != '1' && opcion!= '2') {
		cout << "Como desea ordenar los nombres:" << endl;
		cout << "Ascendente -> 1" << endl;
		cout << "Descendente -> 2" << endl;
		cout << "Opcion:";
		cin >> opcion;
	}

	
	cout << "Cuantos Nombres desea ordenar:";
	cin >> Num;
	cin.ignore();
	pnombres = new char*[Num]; //Espacio para Num nombres
	
	//pedir datos
	for (int i = 0; i<Num; i++) {
		cout << "Escriba el nombre " << i + 1 << ":" << flush;
		cin.getline(tmp, 120);
		// +1 porque hay que guardar '\0'
		pnombres[i] = new char[strlen(tmp) + 1];
		// debe copiar las letras de tmp a la matriz pnombres
		strcpy(pnombres[i], tmp); //obsoleto
		//strcpy_s(pnombres[i], tmp);
	}

	//algoritmo de ordenación

	if (opcion == '1') {
		for (int i = 0; i<Num - 1; i++) {
			for (int j = i + 1; j<Num; j++) {
				if (strcmp(pnombres[i], pnombres[j]) > 0) {
					temp = pnombres[i];
					pnombres[i] = pnombres[j];
					pnombres[j] = temp;
				}
			}
		}
	}
	else {
		for (int i = 0; i<Num - 1; i++) {
			for (int j = i + 1; j<Num; j++) {
				if (strcmp(pnombres[i], pnombres[j]) < 0) {
					temp = pnombres[i];
					pnombres[i] = pnombres[j];
					pnombres[j] = temp;
				}
			}
		}
	}
	

	//sacar datos por consola
	for (int f = 0; f < Num; f++) {
		cout << pnombres[f] << endl;
	}

		
	//liberar memoria de la matriz de caracteres
	for (int f = 0; f < Num; f++) {
		delete[] pnombres[f];
	}

	delete[] pnombres;
		

	cout << "Adios..." << endl;
	_getch();
}