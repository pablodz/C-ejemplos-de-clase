#pragma once
//voy a agregar la clase persona.h
//porque de ahi hereda
#include "Persona.h"
namespace PucpModel
{
	using namespace System;
	//para hacer la herencia 
	//Notese los ":" y no los "::"
	public ref class Ingeniero : public Persona
	{
	private:
		//Observar un detalle
		//solo declaro los nuevos atributos
		//por herencia esta recibiendo el nombre
		// y apellido
		int codigo;
		String^ espe;//espe=especialidad
	public:
		//constructor de ingeniero / 4 elementos
		Ingeniero(int c,String^ n, String^ a, String^ e);
		//Donde 
		// c= codigo, n=nombre, a=apellido, e=especialidad
		//Notese que inicializamos las 4 variables cuando es herencia
		//PD: No interesa el orden de los parámetros
		int getCodigo();
		String^ getEspe();

	};

}
