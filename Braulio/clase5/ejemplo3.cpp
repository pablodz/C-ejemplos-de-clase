/************************************************************
Fuente: Zhiwei Wang
		Filename: opover.cpp
		Author: Zhiwei Wang
		Date: July, 1997
		Description:
		overload operators using member functions.

Comentarios: Pablo Díaz

		Proposito: Educación
		Ciclo: 2017-2
		Fecha: 16/09/17
		Descripcion: comentarios sobre las operaciones uqe se hace

		Ejercico adicional: hacer sobrecarga con matrices
************************************************************/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
class vector {
	float x, y;
public:
	vector() {};
	vector(float a, float b) { x = a; y = b; }
	void display() { cout << "x=" << x << ", y=" << y << endl; }
	vector operator+(vector v);
	float operator*(vector v);
};

//Esto es la sobrecarga de operadores-------
vector vector::operator+(vector v) {
//Nótese el vector al inicio, es decir el tipo de dato que
//se devuelve
	vector temp;
	temp.x = v.x + x;
	temp.y = v.y + y;
	return temp;//devuelve un vector
}
float vector::operator*(vector v) {
	return (v.x * x + v.y * y);//devuelve un numero 
}
//----------------------------------------
int main() {
	vector f1(19, 97), f2(7, 11), g;
	cout << "vector 1 is: ";
	f1.display();
	cout << "vector 2 is: ";
	f2.display();
	cout << "The sum of the two vectors is: ";
	g = f1 + f2;
	g.display();
	cout << "The inner product of the two vectors is: " << f1 * f2 << endl;//Se imprime directo el valor 
	//getch();
	system("pause");
	return 0;
}
