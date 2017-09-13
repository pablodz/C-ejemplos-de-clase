
#include "stdafx.h"
#include <iostream>
using namespace std;

class Fecha
{
private:
	int dia;
	int mes;
	int anio;
public:
	void Iniciar(void);
	void Fijar(int, int, int);
	void Mostrar(void);
	void cambiar(void);
};

void Fecha::Iniciar(void) {
	dia = 12;
	mes = 9;
	anio = 2017;
}
void Fecha::Fijar(int d, int m, int a) {
	dia = d;
	mes = m;
	anio = a;
}
void Fecha::Mostrar(void) {
	cout << dia << "/" << mes << "/" << anio << endl;

}

void Fecha::cambiar(void) {
	
	cout << dia<<" de ";
	switch (mes) {
	case 1:
		cout << "Enero";
		break;
	case 2:
		cout << "Febrero";
		break;
	case 3:
		cout << "Marzo";
		break;
	case 4:
		cout << "Abril";
		break;
	case 5:
		cout << "Mayo";
		break;
	case 6:
		cout << "Junio";
		break;
	case 7:
		cout << "Julio";
		break;
	case 8:
		cout << "Agosto";
		break;
	case 9:
		cout << "Setiembre";
		break;
	case 10:
		cout << "Octubre";
		break;
	case 11:
		cout << "Noviembre";
		break;
	case 12:
		cout << "Diciembre";
		break;
	default: 
		break;
	}
	cout << " del " << anio << endl;
}
int main()
{
	Fecha fecha;
	fecha.Iniciar();
	fecha.Mostrar();
	fecha.Fijar(31, 12, 2017);
	fecha.Mostrar();
	fecha.cambiar();
	system("pause");

}
