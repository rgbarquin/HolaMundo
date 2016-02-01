#include <string>
#include <iostream>

using namespace std;

// Menu.h
class Menu
{
	char Titulo[80];
	char *texto[20];
	int cont;
public:
	Menu(char *t) { strcpy(Titulo, t); cont = 0; };
	~Menu();
	void Add(char *t);
	int Show();
};
