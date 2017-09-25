#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project12::MyForm form;
	Application::Run(%form);
}

System::Void Project12::MyForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	String^ as = maskedTextBox1->Text;
	String^ bs = maskedTextBox2->Text;
	String^ cs ;
	long int a = System::Convert::ToInt16(as);
	long int b = System::Convert::ToInt16(bs);
	long int c;
	c = a * b;
	cs = System::Convert::ToString(c);
	maskedTextBox3->Text = cs;

	return System::Void();
}
