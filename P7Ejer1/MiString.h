#include <iostream>

using namespace std;

class MiString
{
	char *str; //cadena
public:
	MiString();
	MiString(char *t);
	~MiString() { delete[] str; } //destructor
	friend istream &operator>>(istream &ci, MiString &s);
	friend ostream &operator<<(ostream &co, MiString &s);
	char operator[](int i);
	bool operator==(char*t);
	void operator=(char *t); //sobrecarga
	int GetLen() { return strlen(str); }
};
