#include <iostream>

using namespace std;

struct complejo {
	float r, i;
};

int Menu();
complejo GetComplejo();
void PrtComplejo(complejo c);
complejo Suma(complejo c1, complejo c2);
complejo Resta(complejo c1, complejo c2);
complejo Multiplica(complejo c1, complejo c2);
complejo Divide(complejo c1, complejo c2);

void main()
{
	complejo c1, c2, c3;
	char *operador[] = { " +"," -"," *"," /" };
	while (true) {
		int opt = Menu();
		if (opt == 5) break;
		c1 = GetComplejo();
		c2 = GetComplejo();
		switch (opt) {
		case 1: c3 = Suma(c1, c2); break;
		case 2: c3=Resta(c1,c2); break;
		case 3: c3=Multiplica(c1,c2); break;
		case 4: c3=Divide(c1,c2); break;
		}
		PrtComplejo(c1);
		cout << operador[opt - 1];
		PrtComplejo(c2);
		cout << "\n -------- ";
		PrtComplejo(c3);
	}
}

complejo Suma(complejo c1, complejo c2)
{
	complejo c;
	c.r = c1.r + c2.r;
	c.i = c1.i + c2.i;
	return c;
}

complejo Resta(complejo c1, complejo c2)
{
	complejo c;
	c.r = c1.r - c2.r;
	c.i = c1.i - c2.i;
	return c;
}

complejo Multiplica(complejo c1, complejo c2)
{
	complejo c;
	c.r = (c1.r * c2.r) - (c1.i * c2.i);
	c.i = (c1.r * c2.i) + (c1.i * c2.r);
	return c;
}

complejo Divide(complejo c1, complejo c2)
{
	complejo c;
	c.r = ((c1.r * c2.r) + (c1.i * c2.i)) / (pow(c2.r, 2) + pow(c2.i, 2));
	c.i = ((c1.i * c2.r) - (c1.r * c2.i)) / (pow(c2.r, 2) + pow(c2.i, 2));
	return c;
}

void PrtComplejo(complejo c)
{
	cout << "\n(" << c.r << "," << c.i << "i)";
}

complejo GetComplejo()
{
	complejo c1;
	char ch;
	cout << "Dar r,i: ";
	cin >> c1.r >> ch >> c1.i;
	return c1;
}

int Menu()
{
	int opt;
	while (true) {
		cout << "\n\n**** Menu ****";
		cout << "\n1. Sumar";
		cout << "\n2. Restar";
		cout << "\n3. Multiplicar";
		cout << "\n4. Dividir";
		cout << "\n5. Salir";
		cout << "\n\tOpcion: ";
		cin >> opt;
		if (opt > 0 && opt < 6) return opt;
	}
}