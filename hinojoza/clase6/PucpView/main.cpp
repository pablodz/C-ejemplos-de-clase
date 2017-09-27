//main.cpp es donde empieza el programa

#include "frmPrincipal.h";

using namespace System;
using namespace System::Windows::Forms;
using namespace PucpView;

void main(array <String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	frmPrincipal Ventana;
	Application::Run(%Ventana);
}
