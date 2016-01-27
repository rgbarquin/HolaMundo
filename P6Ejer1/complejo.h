#include <iostream>

using namespace std;

class complejo
{
	double r, i;
public:
	complejo(double r1, double i1);
	complejo();
	double modulo();
	friend ostream & operator<< (ostream &, complejo);
	friend istream & operator>> (istream &, complejo &);

	complejo operator+(complejo &c) {
		complejo tmp;
		tmp.r = r + c.r;
		tmp.i = i + c.i;
		return tmp;
	}

	complejo operator-(complejo &c) {
		complejo cs;
		cs.r = r - c.r;
		cs.i = i - c.i;
		return cs;
	}

	complejo operator*(complejo &c) {
		complejo cm;
		cm.r = (r * c.r) - (i * c.i);
		cm.i = (r * c.i) + (i * c.r);
		return cm;
	}

	complejo operator/(complejo &c) {
		complejo cc;
		cc.r = ((r * c.r) + (i * c.i)) / (pow(c.r, 2) + pow(c.i, 2));
		cc.i = ((i * c.r) - (r * c.i)) / (pow(c.r, 2) + pow(c.i, 2));
		return cc;
	}

	bool operator==(complejo &c) {
		if (r == c.r && i == c.i) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator>(complejo &c) {
		if (modulo() >= c.modulo()) {
			return true;
		}
		else {
			return false;
		}
	}

};