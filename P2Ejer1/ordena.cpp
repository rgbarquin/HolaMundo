// ordena usando memoria dinamica
#include <iostream>
#include <stdlib.h> //para rand() y srand()
#include <conio.h>

using namespace std;

void main(int argc, char *argv[])
{

	int Num, temp; //Numero de datos
	int *datos; //puntero a int
	if (argc > 1) {
		Num = argc;
		datos = new int[Num];
		if (datos == NULL) cout << "Error";
		for (int i = 0; i < Num; i++) {
			datos[i] = atoi(argv[i]);
		}
	}
	else {
		cout << "Cuantos numeros desea generar:";
		cin >> Num;
		//asignacion dinamica de memoria
		datos = new int[Num];
		if (datos == NULL) cout << "Error";
		//Llenar el vector
		for (int i = 0; i < Num; i++) {
			datos[i] = rand() * 100 / RAND_MAX;
		}
	}

	
	//ordena los datos -> Hacer aquí el algoritmo de ordenacion

	for (int i = 1; i < Num; i++) {
		for (int j = 0; j < Num - 1; j++) {
			if (datos[j] > datos[j + 1]) {
				temp = datos[j];
				datos[j] = datos[j + 1];
				datos[j + 1] = temp;
			}
		}
	}
	//imprime los datos ordenados
	for (int i = 0; i<Num; i++) cout << i << ":" << datos[i] << endl;
	//liberar memoria
	delete[] datos;

	cout << "Adios..." << endl;

	_getch();
}