#include "Persona.h"

using namespace PucpModel;
//Vamos a implementar el constructor primero
//Constructor asigna valores iniciales
Persona::Persona(String^ n, String^ a) 
{
	nombre = n;
	apellido = a;
}

String^ Persona::getNombre()//Aqui tenemos la creacion
{
	return nombre;
}

String^ Persona::getApellido()
{
	return apellido;
}
