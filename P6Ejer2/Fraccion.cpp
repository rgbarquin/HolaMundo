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
	simplificar();
}
// función miembro SetData()
void Fraccion::SetData(void)
{
	cout << "Numerador: ";
	cin >> num;
	cout << "Denominador: ";
	cin >> den;
	simplificar();
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

	fs.simplificar();
	return fs;
}

Fraccion Fraccion::Resta(Fraccion f)
{
	Fraccion fr;
	long val = mcm(den, f.den);

	fr.den = val;
	fr.num = (num * (val / den)) - (fr.num * (val / fr.den));

	fr.simplificar();
	return fr;
}

Fraccion Fraccion::Multiplica(Fraccion f)
{
	Fraccion fm;

	fm.num = (num * f.num);
	fm.den = (den * f.den);

	fm.simplificar();
	return fm;
}

Fraccion Fraccion::Divide(Fraccion f)
{
	Fraccion fd;

	fd.num = num * f.den;
	fd.den = f.num * den;

	fd.simplificar();
	return fd;
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

void Fraccion::simplificar()
{
	long m, n, r;
	if (num<den) { m = den; n = num; }
	else { m = num; n = den; }
	while ((r = m%n) != 0) { //r=resto de m/n
		m = n;
		n = r;
	} //n es el m.c.d
	num /= n;
	den /= n;
}

Fraccion operator* (int i, const Fraccion& f) {
	Fraccion fra;

	fra.num = (i * f.num);
	fra.den = (1 * f.den);

	fra.simplificar();
	return fra;
}

Fraccion operator/ (int i, const Fraccion& f) {
	Fraccion fd;

	fd.num = i * f.den;
	fd.den = f.num * 1;

	fd.simplificar();
	return fd;
}

Fraccion operator* (const Fraccion& f, int i) {
	Fraccion fra;

	fra.num = (f.num * i);
	fra.den = (f.den * 1);

	fra.simplificar();
	return fra;
}

Fraccion operator/ (const Fraccion& f, int i) {
	Fraccion fd;

	fd.num = f.num * 1;
	fd.den = i * f.den;

	fd.simplificar();
	return fd;
}

ostream & operator<< (ostream & os, Fraccion f) {
	os << f.num << " / " << f.den;
	return os;
}

istream & operator>> (istream & is, Fraccion & f) {
	cout << "Numerardor: ";
	is >> f.num;
	cout << "Denominador: ";
	is >> f.den;

	f.simplificar();

	return is;
}