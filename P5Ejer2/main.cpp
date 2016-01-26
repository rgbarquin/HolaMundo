#include "Ecua2G.h"
#include <iostream>
#include <conio.h>

using namespace std;

//Programa principal
void main()
{
	double xs1, xs2;
	bool tip;
	cout << "\n*** Ecuacion1 ***" << endl;
	Ecua2G ec1(1, 4, 4);
	ec1.Raices(tip, xs1, xs2); //calcula las raices
	ec1.Prt();
	tip ? cout << " Raices reales:" : cout << " Raices complejas:";
	cout << xs1 << "," << xs2 << endl;
	cout << "\n*** Ecuacion2 ***" << endl;
	Ecua2G ec2;
	ec2.PideDatos(); //dar A=1,B=3,C=6.25
	ec2.Raices(tip, xs1, xs2);
	ec2.Prt();
	tip ? cout << " Raices reales:" : cout << " Raices complejas:";
	cout << xs1 << "," << xs2 << endl;
	cout << "\n*** Ecuacion3 ***" << endl;
	double a, b, c;
	cout << "Dar coeficientes A,B y C:";
	cin >> a >> b >> c;
	Ecua2G ec3(a, b, c); //constructor
	ec3.Raices(tip, xs1, xs2);
	ec3.Prt();
	tip ? cout << " Raices reales:" : cout << " Raices complejas:";
	cout << xs1 << "," << xs2 << endl;

	cout << "Adios...\n";
	_getch();
}