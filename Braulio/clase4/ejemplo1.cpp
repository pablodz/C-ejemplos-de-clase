
#include "stdafx.h"
#include <iostream>

using namespace std;

//Declaracion de clases

class persona
{
private:
	char nombre[50];
public:
	void darNombre();
	void imprimirNombre();
	void contar();
	void dormir();
};

void persona::darNombre()
{
	cout << "Soy una persona. Ingrese mi nombre: ";
	cin >> nombre;

}
void persona::imprimirNombre()
{
	cout << "Mi nombre es: " << nombre << endl;
	cin >> nombre;
}

void persona::contar()
{
	cout << "1,2,3,4,5 ...." << endl;
}
void persona::dormir()
{
	cout << "zzz ZZZ zzz" << endl;
}

int main() {
	int respuesta = 0;
	persona p;
	p.darNombre();
	p.imprimirNombre();
	p.contar();
	p.dormir();
	system("pause");
}
