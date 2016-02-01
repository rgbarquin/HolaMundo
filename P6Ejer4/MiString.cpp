#include "MiString.h"

MiString::MiString() {
	str = new char[150];
}

MiString::MiString(char *c) {
	str = new char[strlen(c)];
	for (int i = 0; i < GetLen(); i++) {
		str[i] = c[i];
	}
}

ostream & operator<< (ostream & co, MiString & s) {
	co << s.str;
	return co;
}


istream & operator>> (istream & ci, MiString & s) {
	ci.getline(s.str, 150);
	return ci;
}

bool MiString::operator==(char * t) {
	bool val = true;
	
	if (GetLen() != strlen(t)) {
		val = false;
	}
	else {
		for (int i = 0; i < GetLen(); i++) {
			if (str[i] != t[i]) {
				val = false;
				break;
			}
		}
	}

	return val;
}

void MiString::operator= (char * t)
{
		delete[] str;
		str = new char[strlen(t) + 1];
		strcpy(str, t);
}

char MiString::operator[](int index) {
	return str[index];
}
