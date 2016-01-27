#include <iostream>

using namespace std;

class Fraccion
{
private:
	long num;
	long den;
	void simplificar();
public:
	// Constructores
	Fraccion(); //defecto
	Fraccion(long, long de = 1.0);
	// SetThings
	void SetData(void);
	void SetNum(long);
	void SetDen(long);
	// GetThings
	long GetNum(void) { return num; }
	long GetDen(void) { return den; }
	//Operaciones
	Fraccion Suma(Fraccion f);
	Fraccion Resta(Fraccion f);
	Fraccion Multiplica(Fraccion f);
	Fraccion Divide(Fraccion f);

	friend long mcd(long num1, long num2);
	friend long mcm(long num1, long num2);

	friend Fraccion simplificaFraccion(Fraccion f);
	

	//Salida
	void Prt() { cout << num << " / " << den << endl; }

	//Pre multiplicar y dividir:
	friend Fraccion operator* (int, const Fraccion&);
	friend Fraccion operator/ (int, const Fraccion&);

	//Post multiplicar y dividir:
	friend Fraccion operator* (const Fraccion&, int);
	friend Fraccion operator/ (const Fraccion&, int);

	friend ostream & operator<< (ostream &, Fraccion);
	friend istream & operator>> (istream &, Fraccion &);

	Fraccion operator+(Fraccion &f) {
		Fraccion fs;

		fs.num = ((num * f.den) + (den * f.num));
		fs.den = (den * f.den);
		fs.simplificar();

		return fs;
	}


	Fraccion operator*(Fraccion &f) {
		Fraccion fm;

		fm.num = (num * f.num);
		fm.den = (den * f.den);
		fm.simplificar();

		return fm;
	}
};