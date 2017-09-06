/*
    Título:Suma matrices
    Autor: Hinojoza 6M2
    Descripción:Calcular suma de matrices
    Conclusion: -
 */


#include "stdafx.h"
#include <iostream>
using namespace std;

const int NF = 10;
const int NC = 10;

void ingresar(int m[NF][NC], int nf, int nc) {
	int f, c;
	for (f = 0; f < nf; f++) {
		for (c = 0; c < nc; c++) {
			cout << "Ingrese elemento" << f << "," << c << ": ";
			cin >> m[f][c];
		}
	}
}
void mostrar(int m[NF][NC], int nf, int nc) {
	int f, c;
	for (f = 0; f < nf; f++) {
		for (c = 0; c < nc; c++)
			cout << m[f][c] << "\t";
		cout << endl;

	}
}

void sumar(int m1[NF][NC],int  m2[NF][NC], int nf, int nc,int  m3[NF][NC]) {

	int f, c;
	for (f = 0; f < nf; f++) {
		for (c = 0; c < nc; c++) {
			m3[f][c] = m1[f][c] + m2[f][c];
		}
	}


}

int main()
{
	int A[NF][NC], B[NF][NC],S[NF][NC];
	int nfa, nca;
	while (1) {
		do {
			cout << "Inngrese cantidad de diflas y columnas: ";
			cin >> nfa >> nca;
		} while (nfa < 2 || nca<2 || nfa>NF || nca>NC);

		ingresar(A, nfa, nca);
		cout << "Matriz A" << endl;
		mostrar(A, nfa, nca);

		ingresar(B, nfa, nca);
		cout << "Matriz B" << endl;
		mostrar(B, nfa, nca);

		sumar(A, B, nfa, nca, S);

		cout << "La Matriz S (suma) es:" << endl;
		mostrar(S, nfa, nca);


	}
	return 0;
}
