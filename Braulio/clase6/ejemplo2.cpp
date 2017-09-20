/*

Clase ventanas

*/

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream vector1("vector1.txt");
	ifstream vector2("vector2.txt");
	int a[10];
	int b[10];
	int c[10];
	int i;

	if (vector1.good()) {
		for (i = 0; i < 3; i++) {
			vector1 >> a[i];
			vector1.close();
		}
		cout << a<< endl;
	}
	else {
		cout << "El archivo no se puede abrir" << endl;
	}
		
	
	if (vector2.good()) {
		for (i = 0; i < 3; i++) {
			vector2 >> b[i];
			vector2.close();
		}
		cout << b<< endl;
	}
	else {
		cout << "El archivo no se puede abrir" << endl;
	}

	ofstream salida("salida.txt");
	for (i = 0; i < 3; i++) {
		salida << a[i] + b[i] << endl;
	}
	
	

	system("pause");
	return 0;
}
