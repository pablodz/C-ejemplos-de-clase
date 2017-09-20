/*

Clase ventanas

*/

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream entrada("hola.txt");
	char c[4];

	if (entrada.good()) {
		entrada >> c;
		entrada.close();
		cout << c << endl;
	}
	else
		cout << "El archivo no se puede abrir" << endl;
	ofstream salida("salida.txt");
	char d[10] = "Adios";
	salida << d;
	salida.close();

	system("pause");
	return 0;
}
