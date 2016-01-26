// Fichero cuenta.cpp
// Definición de las funciones de la clase cuenta_corriente
#include <iostream>
// se incluye la declaración de cuenta_corriente
#include "cuenta.h"
// funcion round() para redondear céntimos.
// No es función miembro
double round(double cantidad);
// Constructor de la clase:
// Abrir cuenta con saldo e interés en %
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
// Función para retirar cantidad.
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
// Función para calcular interés y sumarlo
void cuenta_corriente::abono_interes()
{
	// cálculo del interés
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
// Función para hacer una trasferencia.
// El objeto origen es el argumento implícito.
// El objeto destino es el argumento explícito
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
// Función para redondear los céntimos
// No es función miembro
double round(double cantidad)
{
	long centimos = long(100.0 * cantidad + 0.5);
	return double(centimos) / 100.0;
}