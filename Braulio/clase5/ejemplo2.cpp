/*
Titulo: Funcioes virtuales ///FALTA COMPLETAR EL EJERCICIO
Fecha: 16/09/17
Profesor: Braulio 6M3
Ciclo:2017-2
Descripción: uso de funciones virtuales y uso de punteros
Un polimorfismo puede abarcar normalmente a 
funciones virtuales


Conclusion: los espacios de memoria que se necesitan estan 
dentro del puntero
*/

#include "stdafx.h"
#include <iostream>
class Animal {
	virtual void come() { std::cout << "Yo como como un animal genérico: \n"; }
	virtual ~Animal() {}
};

class lobo :public Animal
{
	public:
		void come() { std::cout << "¡Yo como como como un lobo!\n"; }
		virtual ~lobo(); {}
};
class pez :public Animal
{
public:
	void come() { std::cout << "¡Yo como como como un pez!\n"; }
	virtual ~pez(); {}


};

class otro :public Animal
{
public:
	//void come() { std::cout << "¡Yo como como como otro animal!\n"; }
	virtual ~otro(); {}
};

int main()
{
	Animal *unAnimal[4];
	//Cada vez que necesitas de un puntero
	//El puntero "*" necesita de new para crearse
	unAnimal[0] = new Animal();
	unAnimal[1] = new lobo();
	unAnimal[2] = new pez();
	unAnimal[3] = new otro();
	
	//for (i=0;i<4;i++)


    return 0;
}

