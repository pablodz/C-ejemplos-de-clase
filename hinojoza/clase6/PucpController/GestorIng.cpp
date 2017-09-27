#include "GestorIngeniero.h"
//include "GestorIng.h"

using namespace PucpController;

GestorIng::GestorIng()
{
	listaIng = gcnew List<Ingeniero^>();

}
void GestorIng::agregarIng(Ingeniero^ x)
{
	listaIng->Add(x);

}

int GestorIng::obtenerCantIng()
{
	return listaIng->Count;
}

Ingeniero^ GestorIng::obtenerIng(int pos)
{
	return listaIng[pos];
}

Ingeniero^ GestorIng::buscarIng(int cod)
{
	Ingeniero^ x = nullptr;//el puntero inicia nulo cuando no encuentra algo devuelve el valor nulo
	int cant, i;
	cant = listaIng->Count;
	for (i = 0; i < cant; i++) {
		if (cod == listaIng[i]->getCodigo()) {
			x = listaIng[i];
			break;
		}
	}
	return x;
}
