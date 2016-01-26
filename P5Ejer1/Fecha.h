//fichero Fecha.h
class Fecha
{
	int dia, mes, ano;
public:
	Fecha(int d = 1, int m = 1, int a = 1900); //const. con valores por defecto
	void Pidedatos();
	void Prt();
	Fecha Suma(int d);
	Fecha Resta(int d);
};
