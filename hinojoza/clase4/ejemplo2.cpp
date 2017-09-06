/*
Titulo: Programacion orientada a objetos
Uso del constructor
*/

#include "stdafx.h"
#include <iostream>
#include "math.h"
using namespace std;

//Declaracion de la clase
class rectangulo
{
private:
	float Largo;
	float Ancho;

public:
	rectangulo();//Constructor
	rectangulo(float L, float A);//Constructor 2
	void ingresar();//largo y ancho
	void mostrar();
	void setLargo(float L);//Asignar largo
	void setAncho(float A);//Asignar ancho
	float getLargo();//Cuando vale el largo
	float getAncho();//y ancho en este momento
	float calcularPerimetro();
	float calcularArea();
	float calcularDiagonal();
};

 rectangulo::rectangulo()
{//Este constructor inicializa las variables ya por defecto
	Largo = 2;
	Ancho = 1;

}
 rectangulo::rectangulo(float L, float A)
{//A este yo le envio los valores
	Largo = L;
	Ancho = A;
}

void rectangulo::ingresar()
{//Sirve para ingresar largo y ancho mientras largo sea mayor que ancho
	do {
		cout << "Ingrese largo";
		cin >> Largo;
	} while (Largo <= 0);
	do {
		cout << "Ingrese Ancho";
		cin >> Largo;
	} while (Ancho <= 0||Ancho>=Largo);
}

void rectangulo::mostrar() {//Mostrar las dimensiones
	cout << "Largo: " << Largo << endl;
	cout << "Ancho: " << Ancho << endl;
}
void rectangulo::setLargo(float L) {//Ingresar Largo
	Largo = L;
}
void rectangulo::setAncho(float A) {//Ingresar Ancho
	Ancho = A;
}
float rectangulo::getLargo() {
	return Largo;
}
float rectangulo::getAncho() {
	return Ancho;
}
float rectangulo::calcularPerimetro() {
	return 2*(Largo+Ancho);
}
float rectangulo::calcularDiagonal() {
	return sqrt(pow(Largo,2)+pow(Ancho,2));
}
float rectangulo::calcularArea() {
	return Largo*Ancho;
}

int main()
{
	rectangulo R1, R2(8, 3),R3,R4;//R1 se inicializa con el constructor 1 y R2 con el segundo
	float pR1, aR1, dR1;
	float A3, L3;
	R1.mostrar();
	pR1 = R1.calcularPerimetro();
	aR1 = R1.calcularArea();
	dR1 = R1.calcularDiagonal();

	cout << "Perimetro de R1: " << pR1 << endl;
	cout << "Area de R1: " << aR1 << endl;
	cout << "Diagonal de R1: " << dR1 << endl;

	pR1 = R2.calcularPerimetro();
	aR1 = R2.calcularArea();
	dR1 = R2.calcularDiagonal();
	cout << "Perimetro de R2: " << pR1<< endl;
	cout << "Area de R2: " << aR1 << endl;
	cout << "Diagonal de R2: " << dR1 << endl;

	R3.mostrar();
	R3.ingresar();
	cout << "Rectangulo R3 " << endl;
	R3.mostrar();

	L3 = R3.getLargo();
	A3 = R3.getAncho();

	R4.setLargo(L3);
	R4.setAncho(A3);
	cout << "Rectangulo R4 " << endl;
	R4.mostrar();




	system("pause");
	return 0;
}
