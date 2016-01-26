#include "Fraccion.h"
#include <algorithm>

Fraccion::Fraccion() // constructor por defecto
{
	num = 0.0; den = 1.0;
}
// constructor general

Fraccion::Fraccion(long nu, long de)
{
	num = nu; den = de;
}
// función miembro SetData()
void Fraccion::SetData(void)
{
	cout << "Numerador: ";
	cin >> num;
	cout << "Denominador: ";
	cin >> den;
}
void Fraccion::SetNum(long nu)
{
	num = nu;
}
void Fraccion::SetDen(long de)
{
	den = de;
}

Fraccion Fraccion::Suma(Fraccion f)
{
	Fraccion fs;

	fs.num = ((num * f.den) + (den * f.num));
	fs.den = (den * f.den);

	return simplificaFraccion(fs);
}

Fraccion Fraccion::Resta(Fraccion f)
{
	Fraccion fr;
	long val = mcm(den, f.den);

	fr.den = val;
	fr.num = (num * (val / den)) - (fr.num * (val / fr.den));

	return simplificaFraccion(fr);
}

Fraccion Fraccion::Multiplica(Fraccion f)
{
	Fraccion fm;

	fm.num = (num * f.num);
	fm.den = (den * f.den);

	return simplificaFraccion(fm);
}

Fraccion Fraccion::Divide(Fraccion f)
{
	Fraccion fd;

	fd.num = num * f.den;
	fd.den = f.num * den;

	return simplificaFraccion(fd);
}


/*
Método para hallar el Máximo Común Divisor
*/
long mcd(long num1, long num2) {
	long mcd = 0;
	long a = max(num1, num2);
	long b = min(num1, num2);
	do {
		mcd = b;
		b = a%b;
		a = mcd;
	} while (b != 0);
	return mcd;
}

/*
Método para hallar el Mínimo Común Múltiplo
*/
long mcm(long num1, long num2) {
	long mcm = 0;
	long a = max(num1, num2);
	long b = min(num1, num2);
	mcm = (a / mcd(a, b))*b;
	return mcm;
}

Fraccion simplificaFraccion(Fraccion f) {

	long val;
	val = mcd(f.num, f.den);

	f.num = (f.num / val);
	f.den = (f.den / val);

	return f;
}