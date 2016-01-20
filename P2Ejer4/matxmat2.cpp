#include <iostream>
#include <string> //para strlen
#include <stdlib.h> //para atoi()
#include <conio.h> //para _getch

using namespace std;

void main(void)
{
	int fil; //numero de filas
	int colA, colB; //numero de columnas
	float **mA, **mB, **mC, aux=0, tot=0;

	//Memoria para mA
	cout << "Num.Filas de MatA:"; cin >> fil;
	cout << "Num.Columnas de MatA:"; cin >> colA;
	mA = new float*[fil]; //vector filas
	//reserva memoria para las columnas de cada fila
	for (int i = 0; i<fil; i++)
		mA[i] = new float[colA];

	//Memoria para mB
	cout << "Num.Columnas de MatB:"; cin >> colB;
	mB = new float*[colA]; //vector filas
	//reserva memoria para las columnas de cada fila
	for (int i = 0; i<colA; i++)
		mB[i] = new float[colB];

	//Memoria para mC
	mC = new float*[fil]; //vector filas
	//reserva memoria para las columnas de cada fila
	for (int i = 0; i<fil; i++)
		mC[i] = new float[colB];

	cout << endl;
	//Introducir las matrices
	cout << "Introducir MatA:" << endl;
	for (int f = 0; f < fil; f++) {
		cout << "Fila " << f << ": ";
		for (int c = 0; c < colA; c++) {
			cin >> mA[f][c];
		}
		
	}
	cout << endl;
	cout << "Introducir MatB:" << endl;
	for (int f = 0; f < colA; f++ ) {
		cout << "Fila " << f << ": ";
		for (int c = 0; c < colB; c++) {
			cin >> mB[f][c];
		}

	}


	//multiplicar las matriz
	for (int f = 0; f < fil; f++) {
		for (int d = 0; d < colB; d++) {
			for (int c = 0; c < colA; c++) {
				aux = mA[f][c] * mB[c][d];
				tot = tot + aux;
			}
			mC[f][d] = tot;
			tot = 0;
		}
	}

	cout << endl;
	cout << "MatA * MatB" << endl;
	//imprime los valores
	for (int f = 0; f<fil; f++) {
		for (int c = 0; c<colB; c++) {
			cout << f << "," << c << ":" << mC[f][c] << " ";
		}
		cout << endl;
	}



	//liberar memoria
	for (int f = 0; f < fil; f++) {
		delete[] mA[f]; //libera filas
		delete[] mC[f];
	}

	for (int f = 0; f < colA; f++) {
		delete[] mB[f];
	}

	delete[] mA; //libera vector
	delete[] mB;
	delete[] mC;


	cout << "Adios..." << endl;
	_getch();
}