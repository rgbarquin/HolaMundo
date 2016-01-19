// ordena usando memoria dinamica
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void main(int argc, char *argv[])
{
	int Num; //Numero de datos
	float *numeros, max = 0, min = 0, total = 0, media = 0; 

	cout << "Cuantos numeros desea introducir para la serie:";
	cin >> Num;
	//asignacion dinamica de memoria
	numeros = new float[Num];


	cout << "Cuales son los numeros de la serie:";
	for (int i = 0; i < Num; i++) {
		cin >> numeros[i];
	}
	if (numeros == NULL) cout << "Error";

	//Calculos
	for (int i = 0; i < Num; i++) {
		if (i == 0) {
			max = numeros[i];
			min = numeros[i];
		}
		else {
			if (max < numeros[i]) max = numeros[i];
			if (min > numeros[i]) min = numeros[i];
		}
		total = total + numeros[i];
	}
	media = total / Num;
	

	//imprime los datos
	cout << "Número de datos: " << Num << endl;
	cout << "Máximo: " << max << endl;
	cout << "Mínimo: " << min << endl;
	cout << "Media Aritmética: " << media << endl;
	cout << "Los datos introducidos son: " << endl;
	for (int i = 0; i < Num; i++) {
		cout << " " << numeros[i];
	}
	cout << " " << endl;
	

	//liberar memoria
	delete[] numeros;

	cout << "Adios..." << endl;

	_getch();
}