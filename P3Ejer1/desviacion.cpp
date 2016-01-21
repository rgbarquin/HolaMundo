#include <iostream>
#include <math.h>
#include <conio.h> //para _getch

using namespace std;

double *PedirDatos(int &n);
double Media(double *d, int n);
double Desviacion(double *d, int n);

void main()
{
	int num;
	double *datos;
	double med, desv;
	datos = PedirDatos(num);
	med = Media(datos, num);
	desv = Desviacion(datos, num);
	cout << "\tMedia:" << med << endl;
	cout << "\tDesv. Std:" << desv << endl;
	delete[] datos; //liberar

	cout << "Adios..." << endl;
	_getch();
}

double Desviacion(double *d, int n) // ds= sqrt( sum(xi-xm)^2 / n-1)
{
	double desv = 0, md, aux = 0;

	md = Media(d, n);

	for (int i = 0; i < n; i++) {
		aux = aux + pow(d[i] - md,2);
	}

	desv = sqrt((aux / (n-1)));

	return desv;
}

double Media(double *d, int n)
{
	double md;
	double sum = 0;

	for (int i = 0; i < n; i++) {
		sum = sum + d[i];
	}
	md = sum / n;

	return md;
}

double *PedirDatos(int &n)
{
	double *d;
	
	cout << "Cuantos numeros desea introducir:";
	cin >> n;

	d = new double[n];
	cout << "Introducir " << n << " numeros:" << endl;
	for (int f = 0; f < n; f++) {
			cin >> d[f];
	}

	return d;
}