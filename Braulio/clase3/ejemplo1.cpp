/*
Titulo: Clase 3 
Profesor: Braulio
Autor de código: Pablo Díaz
Descripcion: sacar promedio entero de n numeros
			en este caso n=5
*/
#include "stdafx.h"
#include "stdio.h"
#include <iostream>

using namespace std;

int main()
{
	int A[4];
	int i, suma=0;

	for (i = 0; i < 5; i++) {
		cout << "Ingrese nota numero " << i + 1 << " : ";
		cin >> A[i];
		suma=suma+A[i];
	}
	cout << "El promedio es: "<<(suma / (i ))<<endl;
	system("Pause");
    return 0;
}
