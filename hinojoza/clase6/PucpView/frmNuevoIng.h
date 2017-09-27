#pragma once

namespace PucpView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmNuevoIng
	/// </summary>
	public ref class frmNuevoIng : public System::Windows::Forms::Form
	{
	public:
		frmNuevoIng(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevoIng()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textCod;
	private: System::Windows::Forms::TextBox^  textNom;
	private: System::Windows::Forms::TextBox^  textApe;
	private: System::Windows::Forms::TextBox^  textEsp;
	private: System::Windows::Forms::Button^  btnAceptar;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textCod = (gcnew System::Windows::Forms::TextBox());
			this->textNom = (gcnew System::Windows::Forms::TextBox());
			this->textApe = (gcnew System::Windows::Forms::TextBox());
			this->textEsp = (gcnew System::Windows::Forms::TextBox());
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Especialidad";
			// 
			// textCod
			// 
			this->textCod->Location = System::Drawing::Point(158, 27);
			this->textCod->Name = L"textCod";
			this->textCod->Size = System::Drawing::Size(261, 20);
			this->textCod->TabIndex = 4;
			// 
			// textNom
			// 
			this->textNom->Location = System::Drawing::Point(158, 63);
			this->textNom->Name = L"textNom";
			this->textNom->Size = System::Drawing::Size(261, 20);
			this->textNom->TabIndex = 5;
			// 
			// textApe
			// 
			this->textApe->Location = System::Drawing::Point(158, 96);
			this->textApe->Name = L"textApe";
			this->textApe->Size = System::Drawing::Size(261, 20);
			this->textApe->TabIndex = 6;
			// 
			// textEsp
			// 
			this->textEsp->Location = System::Drawing::Point(158, 129);
			this->textEsp->Name = L"textEsp";
			this->textEsp->Size = System::Drawing::Size(261, 20);
			this->textEsp->TabIndex = 7;
			// 
			// btnAceptar
			// 
			this->btnAceptar->Location = System::Drawing::Point(62, 223);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(176, 93);
			this->btnAceptar->TabIndex = 8;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &frmNuevoIng::btnAceptar_Click);
			// 
			// frmNuevoIng
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 418);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->textEsp);
			this->Controls->Add(this->textApe);
			this->Controls->Add(this->textNom);
			this->Controls->Add(this->textCod);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmNuevoIng";
			this->Text = L"frmNuevoIng";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAceptar_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
