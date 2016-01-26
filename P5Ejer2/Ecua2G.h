class Ecua2G
{
	double A, B, C;
public:
	Ecua2G() { A = 0; B = 0; C = 0; }
	Ecua2G(double a, double b, double c) {
		A = a; B = b; C = c;
	}
	void PideDatos(); //Pide los coeficientes por la consola
	double Disc(); //devuelve el discriminante
	void Prt(); //Imprime ecuacion AX^2 + BX + C = 0
				//tipo=true raices reales tipo=false raices complejas
	void Raices(bool &tipo, double &x1, double &x2);
};
