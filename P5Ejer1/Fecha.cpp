#include "Fecha.h"
#include <iostream>
#include <iomanip>

using namespace std;

//fichero Fecha.cpp
Fecha::Fecha(int d, int m, int a)
{
	dia = d; mes = m; ano = a;
}

Fecha Fecha::Suma(int dias)
{
	Fecha temp;
	//hacer el algoritmo de sumar días, considerando los meses de 30 días
	int anios = dias / 365;
	dias = dias - 365 * anios;
	int meses = dias / 30;
	dias = dias - 30 * meses;

	temp.ano = ano + anios;
	temp.mes = mes + meses;
	temp.dia = dia + dias;

	if (temp.dia > 30) {
		temp.mes++;
		temp.dia = temp.dia - 30;
	}


	if (temp.mes > 12) {
		temp.ano++;
		temp.mes = temp.mes - 12;
	}

	return temp;
}

Fecha Fecha::Resta(int dias)
{
	Fecha temp;
	//hacer el algoritmo de restar días, considerando los meses de 30 días
	int anios = dias / 365;
	dias = dias - 365 * anios;
	int meses = dias / 30;
	dias = dias - 30 * meses;

	temp.ano = ano - anios;
	temp.mes = mes - meses;
	temp.dia = dia - dias;

	if (temp.dia < 1) {
		temp.mes--;
		temp.dia = 30 + temp.dia;
	}


	if (temp.mes < 1) {
		temp.ano--;
		temp.mes = 12 + temp.mes;
	}

	return temp;
}

void Fecha::Prt()
{
	cout << setfill('0') << setw(2) << dia << '/'
		<< setw(2) << mes << '/' << setw(4) << ano;
}
void Fecha::Pidedatos()
{
	char ch;
	cout << "Escriba Fecha de la forma dd/mm/aa:";
	cin >> dia >> ch >> mes >> ch >> ano;
}