#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define NUM 5

using namespace std;

void main()
{
	char array[NUM + 1]; //uno para el checksum
	int dat;
	int num = 0;
    char chk = 0;

	for (int i = 0; i<NUM; i++) {
		cout << "Dato[" << i << "]:?";
		cin >> dat; //directamente no se puede poner array[i]
		array[i] = dat;
		chk += array[i]; //calcula el checksum
	}
	array[NUM] = chk;
	//transmitir datos
	for (int i = 0; i<NUM + 1; i++) {
		//SendData( array[i] ); //transmision
		dat = array[i] & 0xFF;
		cout << setw(3) << hex << dat;
	}
	cout << "\nEl Byte de Checksum es: " << (int)(array[NUM] & 0xff);
	cout << "\nAdios..." << endl;
	_getch();
}