#include "Ecua2G.h"
#include <iostream>

using namespace std;

//Ecua2G::Ecua2G()
//{
//	A = 0.0 ; B = 0.0 ; C = 0.0;
//}
//
//Ecua2G::Ecua2G(double a, double b, double c)
//{
//	A = a; B = b; C = c;
//}

double Ecua2G::Disc() {

	return pow(B, 2) - (4 * A * C);
}

void Ecua2G::Prt() { //Imprime ecuacion AX^2 + BX + C = 0
	cout << A << "X^2 + " << B << "X + " << C << " = 0";
} 

void Ecua2G::Raices(bool &tipo, double &x1, double &x2) {
	double d = Disc();

	if (d >= 0) {
		tipo = true;
		x1 = (-B + sqrt(d)) / (2 * A);
		x2 = (-B - sqrt(d)) / (2 * A);
	}
	else {
		tipo = false;
		x1 = 0.0;
		x2 = 0.0;
	}
}

void Ecua2G::PideDatos()
{
	cout << "Dar coeficientes A,B y C:";
	cin >> A >> B >> C;
}