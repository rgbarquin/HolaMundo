// Fichero cuenta.cpp
// Definici�n de las funciones de la clase cuenta_corriente
#include <iostream>
// se incluye la declaraci�n de cuenta_corriente
#include "cuenta.h"
// funcion round() para redondear c�ntimos.
// No es funci�n miembro
double round(double cantidad);
// Constructor de la clase:
// Abrir cuenta con saldo e inter�s en %
cuenta_corriente::cuenta_corriente(double inicio, double int100)
{
	saldo = inicio;
	interes = int100 / 100.0;
}
// Depositar cantidad en cuenta.
// No se chequea si el valor es positivo
void cuenta_corriente::deposito(double cantidad)
{
	saldo += cantidad;
}
// Funci�n para retirar cantidad.
// Se devuelve cantidad o cero (si no hay saldo)
double cuenta_corriente::pago(double cantidad)
{
	// Si hay saldo suficiente
	if (cantidad <= saldo) {
		saldo -= cantidad;
		return cantidad;
	}
	// No hay saldo suficiente
	else
		return 0.0;
}
// Funci�n para calcular inter�s y sumarlo
void cuenta_corriente::abono_interes()
{
	// c�lculo del inter�s
	double intereses = round(saldo * interes);
	// se incrementa el saldo
	saldo += intereses;
}
// Preguntar el saldo
double cuenta_corriente::obtener_saldo()
{
	// de devuelve el valor del saldo
	return saldo;
}
// Funci�n para hacer una trasferencia.
// El objeto origen es el argumento impl�cito.
// El objeto destino es el argumento expl�cito
double cuenta_corriente::transfer(cuenta_corriente& destino, double
	cantidad)
{
	// Se accede directamente a la variable saldo
	// del objeto origen. Para acceder a saldo de
	// destino se utiliza el operador punto.
	if (saldo < cantidad)
		return 0.0;
	saldo -= cantidad;
	destino.saldo += cantidad;
	return cantidad;
}
// Funci�n para redondear los c�ntimos
// No es funci�n miembro
double round(double cantidad)
{
	long centimos = long(100.0 * cantidad + 0.5);
	return double(centimos) / 100.0;
}