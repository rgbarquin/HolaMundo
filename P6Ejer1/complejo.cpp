// funciones y operadores de la clase complejo
#include "complejo.h"

complejo::complejo() // constructor por defecto
{
	r = 0.0; i = 0.0;
}


// constructor general
complejo::complejo(double re, double im)
{
	r = re; i = im;
}

double complejo::modulo()
{
	double mod;
	//escribir |z| = raiz cuadrada de la suma de los cuadrados del número complejo.

	mod = sqrt(pow(r, 2) + pow(i, 2));

	return mod;
}

ostream & operator<< (ostream & os, complejo c) {
	os << "(" << c.r << "," << c.i << "i)";
	return os;
}

istream & operator>> (istream & is, complejo & c) {
	cout << "Parte real: ";
	is >> c.r;
	cout << "Parte imaginaria: ";
	is >> c.i;
	return is;
}