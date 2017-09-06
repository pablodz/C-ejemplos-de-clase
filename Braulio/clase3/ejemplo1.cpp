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
	int maximo=0, minimo=20;

	for (i = 0; i < 5; i++) {
		cout << "Ingrese nota numero " << i + 1 << " : ";
		cin >> A[i];
		suma=suma+A[i];
		if (maximo < A[i]) {
			maximo = A[i];
		}
		if (minimo > A[i]) {
			minimo = A[i];
		}
	}
	cout << "El promedio es: "<<(suma / (i ))<<endl;
	cout << "La maxima nota es:" << maximo<<endl;
	cout << "La minima nota es:" << minimo<<endl;
	system("Pause");
    return 0;
}
