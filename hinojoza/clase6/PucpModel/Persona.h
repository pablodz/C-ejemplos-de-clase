#pragma once
//directiva de compilacion
//debemos crear un namespace
namespace PucpModel
{
	using namespace System;
	//creamos la clase persona
	public ref class Persona {
	// se recomienda public ref class porque
	//microsoft menciona que tiene mejor uso de
	//memoria
	private:
		String^ nombre;
		String^ apellido;
	public:
		//algunos costructores
		Persona(String^ n, String^a);
		//dos metodos para que me devuelva el nombre
		//apellido
		String^ getNombre();//solo tenemos la declaracion
		String^ getApellido();//solo es la declaracion
		
	};
}
