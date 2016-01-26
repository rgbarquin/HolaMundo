// funciones y operadores de la clase complejo
#include "complejo2.h"

complejo::complejo() // constructor por defecto
{
	real = 0.0; imag = 0.0;
}
// constructor general
complejo::complejo(double re, double im)
{
	real = re; imag = im;
}
// función miembro SetData()
void complejo::SetData(void)
{
	cout << "Parte real: ";
	cin >> real;
	cout << "Parte imaginaria: ";
	cin >> imag;
}
void complejo::SetReal(double re)
{
	real = re;
}
void complejo::SetImag(double im)
{
	imag = im;
}
complejo complejo::Suma(complejo c)
{
	complejo cs;
	cs.real = real + c.real;
	cs.imag = imag + c.imag;
	return cs;
}
complejo complejo::Resta(complejo c)
{
	complejo cs;
	cs.real = real - c.real;
	cs.imag = imag - c.imag;
	return cs;
}
complejo complejo::Multiplica(complejo c)
{
	complejo cm;
	//escribir el código (a,b) * (c,d) = (ac-bd, ad+bc)

	cm.real = (real * c.real) - (imag * c.imag);
	cm.imag = (real * c.imag) + (imag * c.real);

	return cm;
}

complejo complejo::Cociente(complejo c)
{
	complejo cc;
	//escribir (a,b)/(c,d) = ((ac+bd)/(c^2+d^2) , (bc-ad)/(c^2 + d^2 ))

	cc.real = ((real * c.real) + (imag * c.imag)) / (pow(c.real, 2) + pow(c.imag, 2));
	cc.imag = ((imag * c.real) - (real * c.imag)) / (pow(c.real, 2) + pow(c.imag, 2));

	return cc;
}

double complejo::modulo()
{
	double mod;
	//escribir |z| = raiz cuadrada de la suma de los cuadrados del número complejo.

	mod = sqrt(pow(real,2)+pow(imag,2));

	return mod;
}

double modulo(complejo c)
{
	double mod;
	//escribir |z| = raiz cuadrada de la suma de los cuadrados del número complejo.

	mod = sqrt(pow(c.real, 2) + pow(c.imag, 2));

	return mod;
}