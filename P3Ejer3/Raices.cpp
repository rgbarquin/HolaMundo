#include <iostream>
#include <math.h>
#include <iomanip>
#include <conio.h> //para _getch

using namespace std;

double fx(double);
double PtoMedio(double a, double b, int max, int &num);

void main()
{
	double a, b;
	int num, max = 300;

	cout << "Dar intervalo a evaluar a b:";
	cin >> a >> b;
	if ((fx(a) > 0 && fx(b)>0) || (fx(a)<0 && fx(b)<0)) {
		cout << "Error en el intervalo" << endl;
		cout << "Adios..." << endl;
		_getch();
		return; //quitar para probar intervalos
	}

	double raiz = PtoMedio(a, b, max, num);
	if (num == max) {
		cout << "No hay raiz, limite maximo alcanzado\n";
	}
	else {
		cout << "Raiz x=" << setprecision(12) << raiz;
		cout << " con " << num << " iteraciones\n";
	}

	cout << "Adios..." << endl;
	_getch();
}

double PtoMedio(double a, double b, int max, int &num)
{
	double m, ym, CERO = 1e-9;
	num = 0; //importante
	do {
		m = (a + b) / 2;
		ym = fx(m);
		if (fabs(ym) < CERO) break;
		if ((fx(a) * ym) < 0) b = m; //ver si cambia de signo
		else a = m;
		num++;
	} while (num < max);
	return m;
}

double fx(double x) //x en radianes
{
	double f = x - cos(x); //raices entre 0 y PI/2
	return f;
}