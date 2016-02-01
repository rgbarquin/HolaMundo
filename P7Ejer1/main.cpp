#include "Menu.h"
#include "MiString.h"

//void main()
//{
//	int opc;
//	Menu m1("Titulo del Menu");
//	m1.Add("Opcion 1");
//	m1.Add("Opcion 2");
//	m1.Add("Salir");
//	while (true) {
//		opc = m1.Show(); //Mostrar el menu
//		if (opc == 1) {
//			cout << "Aquí va el codigo de la opcion 1:" << endl;
//		}
//		else if (opc == 2) {
//			cout << "Aquí va el codigo de la opcion 2:" << endl;
//		}
//		else if (opc == 3) {
//			break; //termina el programa
//		}
//	}
//}

//main.cpp
void main()
{
	MiString cs;
	while (1) {
		cout << "\nDar una frase:?";
		cin >> cs;
		cout << "La frase al reves es:";
		for (int i = cs.GetLen() - 1; i >= 0; i--) {
			cout << cs[i];
		}
		cout << "\nDesea Salir? SI o NO:?";
		MiString cs1;
		cin >> cs1;
		if (cs1 == "SI") break;
	}
	cout << "\nAdios.." << endl;
}