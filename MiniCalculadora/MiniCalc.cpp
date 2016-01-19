#include <iostream>
#include <string>
#include <math.h>
#include <conio.h>
#include <sstream>

using namespace std;

void main()
{
	char str[30];
	bool ope = false;
	char op1[20], op2[20];
	int cont = 0;
	char chope; //operador
	double dop1 = 0, dop2 = 0, val, ans = 0;
	int div = 0, divs = 0;

	while (true) {
		cout << ">>"; cin.getline(str, 30);
		if (str[0] == 'E') break;
		ope = false; cont = 0;
		for (int i = 0; i<strlen(str); i++) {
			if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%') {
				ope = true;
				op1[cont] = 0; //fin de cadena op1
				cont = 0; //para segundo contador
				chope = str[i]; //almacena qué operador es
			}
			else {
				if (!ope) op1[cont++] = str[i];
				else op2[cont++] = str[i];
			}
		}

		op2[cont] = 0;

		ostringstream strs;
		string op1s;
		string op2s;


		if (op1[0] == 'a') {
			dop1 = ans;

			strs << ans;
			op1s = strs.str();
		}
		else {
			dop1 = atof(op1);
			op1s = op1;
		}

		if (op2[0] == 'a') {
			dop2 = ans;

			strs << ans;
			op2s = strs.str();
		}
		else {
			dop2 = atof(op2);
			op2s = op2;
		}
		
		switch (chope) {
		case '+': val = dop1 + dop2; break;
		case '-': val = dop1 - dop2; break;
		case '*': val = dop1 * dop2; break;
		case '/': val = dop1 / dop2; break;
		case '%':
			if  (op1s.find(".") == std::string::npos && op2s.find(".") == std::string::npos) {
				
				if (op1[0] == 'a') {
					div = ans;
				}
				else {
					div = atof(op1);
				}

				if (op2[0] == 'a') {
					divs = ans;
				}
				else {
					divs = atof(op2);
				}

				val = div % divs;
			}
			else {
				val = 0;
				cout << "\tNo se puede calcular el resto si no son números enteros." << endl;

			}
			break;
		default: val = 0;
		}
		cout << "\tans = " << val << endl;
		chope = '?';
		ans = val;
	}
	cout << "Fin de la MiniCalculadora" << endl;

	_getch();
}