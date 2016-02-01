#include "Menu.h"

// Menu.cpp
Menu::~Menu() {
	for (int i = 0; i<cont; i++) delete[] texto[i];
}
void Menu::Add(char *t) {
	texto[cont] = new char[strlen(t) + 1];
	strcpy(texto[cont], t);
	cont++;
}
int Menu::Show() {
	int opc;
	do {
		cout << "*** " << Titulo << " ***" << endl;
		for (int i = 0; i<cont; i++)
			cout << i + 1 << "." << texto[i] << endl;
		cout << "\tOpc:?";
		cin >> opc;
	} while (opc <0 || opc > cont);
	return opc;
}