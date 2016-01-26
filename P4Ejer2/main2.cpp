#include "complejo2.h"
#include <conio.h> //para _getch

void main(void)
{
	// declaración de números complejos
	complejo c1(3.0, 2.0);
	complejo c2(2.0, 2.0);
	complejo c3;
	complejo a(3.0, 2.0);
	complejo b(2.5, -1.0);
	c3.SetData(); //pide datos para c3
	complejo c4(4.0);
	// operadores aritméticos
	complejo suma = c1.Suma(c2); //c1+c2
	complejo resta = c1.Resta(c3); //c1-c3
	complejo producto = c2.Multiplica(c4); //c2*c4
	complejo cociente = c1.Cociente(c3); //c1/c3
	cout << "Primer complejo: "; c1.Prt();
	cout << "Segundo complejo: "; c2.Prt();
	cout << "Tercer complejo: "; c3.Prt();
	cout << "Suma: "; suma.Prt();
	cout << "Resta: "; resta.Prt();
	cout << "Producto: "; producto.Prt();
	cout << "Cociente: "; cociente.Prt();
	cout << "El modulo de "; a.Prt();
	cout << " es " << a.modulo() << endl;
	cout << "El modulo de "; b.Prt();
	cout << " es " << modulo(b) << endl;
	cout << "Ya he terminado." << endl;

	cout << "Adios..." << endl;
	_getch();
}