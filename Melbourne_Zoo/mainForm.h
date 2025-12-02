#pragma once
#include "loginForm.h"

namespace MelbourneZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::Button^ btnSalir;



	private: System::Windows::Forms::Label^ label3;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Peru;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(176, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(278, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MELBOURNE";
			this->label1->UseMnemonic = false;
			this->label1->Click += gcnew System::EventHandler(this, &mainForm::label1_Click);
			// 
			// btnIniciar
			// 
			this->btnIniciar->BackColor = System::Drawing::Color::DarkGray;
			this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciar->ForeColor = System::Drawing::Color::Black;
			this->btnIniciar->Location = System::Drawing::Point(95, 397);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(192, 42);
			this->btnIniciar->TabIndex = 2;
			this->btnIniciar->Text = L"Iniciar sesión";
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &mainForm::btnIniciar_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::DarkGray;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->ForeColor = System::Drawing::Color::Black;
			this->btnSalir->Location = System::Drawing::Point(409, 397);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(80, 42);
			this->btnSalir->TabIndex = 3;
			this->btnSalir->Text = L"Salir\r\n";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &mainForm::btnSalir_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(-1, 455);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(375, 30);
			this->label3->TabIndex = 4;
			this->label3->Text = L"© 2025 Melbourne Zoo – Jenniffer MQ  ";
			this->label3->Click += gcnew System::EventHandler(this, &mainForm::label3_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(639, 494);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnIniciar);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		loginForm^ login = gcnew loginForm();  
		login->Show();                          
		this->Hide();
	}
    private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
