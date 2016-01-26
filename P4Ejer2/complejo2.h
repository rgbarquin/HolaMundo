#include <iostream>

using namespace std;

class complejo
{
private:
	double real;
	double imag;
public:
	// Constructores
	complejo(); //defecto
	complejo(double, double im = 0.0);
	// SetThings
	void SetData(void);
	void SetReal(double);
	void SetImag(double);
	// GetThings
	double GetReal(void) { return real; }
	double GetImag(void) { return imag; }
	//Operaciones
	complejo Suma(complejo c);
	complejo Resta(complejo c);
	complejo Multiplica(complejo c);
	complejo Cociente(complejo c);
	double modulo();
	friend double modulo(complejo c);
	//Salida
	void Prt() { cout << "(" << real << "," << imag << "i)" << endl; }
};
