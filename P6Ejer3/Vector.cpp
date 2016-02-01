#include "Vector.h"

Vector::Vector(int i)
{
	num = i;
	pV = new int[i];

}


void Vector::Ordena(bool ord) {
	int temp;

	if (ord) { //asc
		for (int i = 1; i < num; i++) {
			for (int j = 0; j < num - 1; j++) {
				if (pV[j] > pV[j + 1]) {
					temp = pV[j];
					pV[j] = pV[j + 1];
					pV[j + 1] = temp;
				}
			}
		}
	}
	else { //desc
		for (int i = 1; i < num; i++) {
			for (int j = 0; j < num - 1; j++) {
				if (pV[j] < pV[j + 1]) {
					temp = pV[j];
					pV[j] = pV[j + 1];
					pV[j + 1] = temp;
				}
			}
		}
	}
}

int& Vector::operator[](int index) {
	return pV[index];
}

Vector::~Vector() {
	delete[] pV;
}