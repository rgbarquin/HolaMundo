// Fichero cuenta.h
class cuenta_corriente {
private:
	// declaración de variables miembro -privadas, por defectodouble
	double saldo; // saldo actual de la cuenta
	double interes; // interes en tanto por 1
public:
	// declaración de funciones miembro
	// constructor de la clase
	cuenta_corriente(double inicio, double int100);
	void deposito(double cantidad); // hacer un deposito
	double pago(double cantidad); // hacer pago (si se puede)
	void abono_interes(); // abonar intereses
	double obtener_saldo(); // preguntar el saldo
							// transferencia de objeto implícito a objeto “destino”
	double transfer(cuenta_corriente& destino, double cantidad);
};