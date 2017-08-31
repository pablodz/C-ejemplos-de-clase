
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
	long int n = 0, i = 0;
	long int ultimofibo = 317811;
	long int penultimofibo = 196418;
	long int numerofibo = 0;
	long int cociente;
	long int contador=0;
	while (1) {
		cout << "Ingrese el numero n:";
		cin >> n;

		if (n > 0 && n <= 60) {//verificacion de que el numero este entre 0 y 60
			cout << "El fibonaccci en suma de "<<contador<<"es: ";
			while (n != 0) {//Mientras que no sea 0 el residuo

				if (n >= ultimofibo&&n > 0)	{
					cociente = n / ultimofibo;//Entra a guardar cocientes
					n = n%ultimofibo;
					cout << cociente << '*' << ultimofibo << "+";
				}
				else {
					numerofibo = ultimofibo-penultimofibo;
					ultimofibo = penultimofibo;
					penultimofibo = numerofibo;

				}
			}
			if (n == 0) {
				cout << endl;
			}
			n = 0,
			i = 0;
			ultimofibo = 317811;
			penultimofibo = 196418;
			numerofibo = 0;
			contador = 0;
		}
		else {
			cout << "El numero esta fuera del rango";

		}
		system("pause");
	}

}

