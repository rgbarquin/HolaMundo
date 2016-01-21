#include <iostream>
#include <math.h>

//# define M_PI 3.14159265358979323846  /* pi */

using namespace std;


int Menu();
double Seno(double x, int N);
double Seno(double x, double error, int &num);
double GetAngulo();
double GetError();
int GetIteraciones();
long double factorial(int num);


void main()
{
	double resultado, error, angulo;
	int iter, num=0;


	while (true) {
		int opt = Menu();
		if (opt == 3) break;
		switch (opt) {
		case 1:
			angulo = GetAngulo();
			iter = GetIteraciones();
			resultado = Seno(angulo, iter); break;
		case 2:
			angulo = GetAngulo();
			error = GetError();
			resultado = Seno(angulo, error, num); break;
		}

		if (opt < 3) {
			cout << "Seno(" << angulo << ") = " << resultado;

			if (opt == 1) cout << " con " << iter << " iteraciones" << endl;
			if (opt == 2) cout << " con " << error << " de error entre iteraciones y " << num << " iteraciones" << endl;

		}
		
	}
}


int Menu()
{
	int opt;
	while (true) {
		cout << "\n\n**** Menu ****";
		cout << "\n1. Angulo + Iteraciones";
		cout << "\n2. Angulo + Error";
		cout << "\n3. Salir";
		cout << "\n\tOpcion: ";
		cin >> opt;
		if (opt > 0 && opt < 4) return opt;
	}
}

double Seno(double x, int N) {
	
	double ans = 0;
	int fact = 1;
	bool flag = true;

	//x = x - (2 * N * M_PI);


	for (int i = 0; i < N; i++) {

		if (flag) {
			ans = ans + (pow(x, fact) / factorial(fact));			
		}
		else{
			ans = ans - (pow(x, fact) / factorial(fact));
		}

		flag = !flag;
		fact = fact + 2;
	}

	return ans;

}

double Seno(double x, double err, int &num) {

	double sin=0, term;
	term = x;
	num = 1;

	while (abs(term) >= err) {
		sin = sin + term;
		term = -term*x*x / ((num + 1)*(num + 2));
		num = num + 2;
	}

	return sin;
}

double GetAngulo() {
	double d = 0;
	cout << "Dar angulo: ";
	cin >> d;
	return d;
}

int GetIteraciones() {
	int i = 0;
	cout << "Dar el numero de iteraciones: ";
	cin >> i;
	return i;
}

double GetError() {
	double d = 0;
	cout << "Dar error entre una iteracion y otra: ";
	cin >> d;
	return d;
}

long double factorial(int num) {

	double resultado = 1;

	for (int i = 1; i <= num; i++) {
		resultado = resultado * i;
	}

	return resultado;
}