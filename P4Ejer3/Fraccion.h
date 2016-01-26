#include <iostream>

using namespace std;

class Fraccion
{
private:
	long num;
	long den;
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
};
