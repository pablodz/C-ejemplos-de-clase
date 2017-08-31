/*
Título: Ejercicios de Tarea
Autor: Pablo Diaz
Descripción: Adjunto en pdf
Conclusion: -Sin uso de arreglos
*/

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "iostream"
#include "math.h"
using namespace std;

int main(void) {
	long int cantidadnumeros;
	long int numero;
	long int copianumero;
	long int digito = 1;
	long int sumacubos = 0;
	long int i = 0;
	long float nivel;

	while (1) {
		cout << "Ingresar cantidad de numeros a comprobar: ";
		cin >> cantidadnumeros;
		while (cantidadnumeros != 0) {
			cin >> numero;
			copianumero = numero;
			while (copianumero != 0) {
				digito = copianumero % 10;
				copianumero = copianumero / 10;
				sumacubos = sumacubos + pow(digito, 3);
				i++;
			}
			if (sumacubos == numero) {
				nivel = i;
			}
			else {
				if (numero <= 9 && numero > 0) {
					nivel = 2;
				}
				else {
					nivel = -1;
				}
			}
			cout << nivel<<endl;
			cantidadnumeros = cantidadnumeros - 1;
		}
	}
}
