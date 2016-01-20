#include <iostream>
#include <string> //para strlen
#include <stdlib.h> //para atoi()
#include <conio.h> //para _getch

using namespace std;

void main(void)
{
	int fil; //numero de filas
	int col; //numero de columnas
	float **datos;
	cout << "Num.Filas:"; cin >> fil;
	cout << "Num.Columnas:"; cin >> col;

	datos = new float*[fil]; //vector filas
	//reserva memoria para las columnas de cada fila
	for (int i = 0; i<fil; i++)
		datos[i] = new float[col];

	//ya puede usar la matriz
	for (int f = 0; f<fil; f++)
		for (int c = 0; c<col; c++) datos[f][c] = (float)rand() / RAND_MAX;

	//imprime los valores
	for (int f = 0; f<fil; f++) {
		for (int c = 0; c<col; c++) {
			cout << f << "," << c << ":" << datos[f][c] << " ";
		}
		cout << endl;
	}
	//liberar memoria
	for (int f = 0; f<fil; f++) delete[] datos[f]; //libera filas
	delete[] datos; //libera vector

	cout << "Adios..." << endl;
	_getch();
}