#pragma once
#include "GestorIngeniero.h"
using namespace System;
using namespace System::Collections::Generic;//Para usar arreglos
using namespace PucpModel;

namespace PucpController
{
	//Creamos una clase para el GestorIng
	public ref class GestorIng
	{
	private:
		//El primer circunflejo ^ es para la lista,
		//y el otro es para la lista de ingenieros
		//Arreglos de objeto del tipo ingeniero
		//El circunflejo es un puntero de memoria
		List<Ingeniero^>^ listaIng;
	public:
		//TODOS LOS METODOS QUE NECESITA LA CLASE
		GestorIng();
		void agregarIng(Ingeniero^ x);
		int obtenerCantIng();
		Ingeniero^ obtenerIng(int pos);//Sirve para extraer posiciones del arreglo
		Ingeniero^ buscarIng(int cod);//este lo busca lo encuentra y me lo devuelve

	};
}
