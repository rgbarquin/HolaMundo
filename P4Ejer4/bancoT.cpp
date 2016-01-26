// Fichero bancoT.cpp
// Calcular el saldo en una cuenta bancaria
#include <iostream>
#include "cuenta.h"

using namespace std;

void main(void)
{
	// Obtener los datos del usuario
	double saldo;
	// Se leen las variables del programa
	// Datos para el objeto mi_cuenta
	cout << "Teclee los datos de mi_cuenta: " << endl;
	cout << "Saldo inicial: ";
	cin >> saldo;
	// llamada al constructor.
	// Se crea un objeto de la clase cuenta_corriente
	// con nombre mi_cuenta
	// Se le pasa un interés mensual cualquiera
	cuenta_corriente mi_cuenta(saldo, 1.0);
	// Datos para el objeto su_cuenta
	cout << "\nTeclee los datos de su_cuenta: " << endl;
	cout << "Saldo inicial: ";
	cin >> saldo;
	// llamada al constructor.
	// Se crea un objeto de la clase cuenta_corriente
	// con nombre su_cuenta
	// Se le pasa un interés mensual cualquiera
	cuenta_corriente su_cuenta(saldo, 1.0);
	// Transferencia
	int tr = 1;
	double cantidad = 0.0;
	while (tr == 1) {
		cout<< "\n1. Transferencia de mi_cuenta a su_cuenta"
			<< "\n2. Transferencia de su_cuenta a mi_cuenta"
			<< "\n3. Deposito en mi_cuenta"
			<< "\n4. Deposito en su_cuenta"
			<< "\n5. Pago con mi_cuenta"
			<< "\n6. Pago con su_cuenta"
			<< "\n7. Abono de intereses en mi_cuenta"
			<< "\n8. Abono de intereses en su_cuenta" << endl;
		cin >> tr;

		if (tr != 7 && tr != 8) {
			cout << "\nTeclee la cantidad: " << flush;
			cin >> cantidad;
		}
		cout << "\nLos saldos antes de la operacion son:"
			<< "\n En mi_cuenta: " << mi_cuenta.obtener_saldo()
			<< "\n En su_cuenta: " << su_cuenta.obtener_saldo()
			<< endl;

		switch (tr)
		{
		case 1:
			// mi_cuenta se pasa como argumento implícito
			// su_cuenta se pasa como argumento explícito
			if (mi_cuenta.transfer(su_cuenta, cantidad) == 0.0)
				cout << "\nSaldo insuficiente en mi_cuenta"
				<< endl;
			break;
		case 2:
			if (su_cuenta.transfer(mi_cuenta, cantidad) == 0.0)
				cout << "\nSaldo insuficiente en su_cuenta"
				<< endl;
			break;
		case 3:
			mi_cuenta.deposito(cantidad); break;
		case 4:
			su_cuenta.deposito(cantidad); break;
		case 5:
			if (mi_cuenta.pago(cantidad) == 0.0)
				cout << "\nSaldo insuficiente en mi_cuenta"
				<< endl; 
			break;
		case 6:
			if (su_cuenta.pago(cantidad) == 0.0)
				cout << "\nSaldo insuficiente en su_cuenta"
				<< endl;
			break;
		case 7:
			mi_cuenta.abono_interes(); break;
		case 8:
			su_cuenta.abono_interes(); break;
		default: cout << "\nTransferencia mal definida: "
			<< "Teclee de nuevo." << endl;
			break;
		}

			cout << "\nLos saldos tras la operacion son:"
			<< "\n En mi_cuenta: " << mi_cuenta.obtener_saldo()
			<< "\n En su_cuenta: " << su_cuenta.obtener_saldo()
			<< endl;
		cout << "\nDesea hacer una nueva operacion? "
			<< " Teclee 1 (SI) o 2 (NO)" << endl;
		cin >> tr;
	} // fin del while
	cout << "Ya he terminado. " << endl;
}