#pragma once

namespace MelbourneZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RolPago
	/// </summary>
	public ref class RolPago : public System::Windows::Forms::Form
	{
	public:
		RolPago(void)
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
		~RolPago()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::TextBox^ textCargo;
	private: System::Windows::Forms::TextBox^ textSalario;


	private: System::Windows::Forms::TextBox^ textNombre;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtCedula;
	private: System::Windows::Forms::Label^ label7;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RolPago::typeid));
			this->textCargo = (gcnew System::Windows::Forms::TextBox());
			this->textSalario = (gcnew System::Windows::Forms::TextBox());
			this->textNombre = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtCedula = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textCargo
			// 
			this->textCargo->Location = System::Drawing::Point(282, 194);
			this->textCargo->Multiline = true;
			this->textCargo->Name = L"textCargo";
			this->textCargo->Size = System::Drawing::Size(213, 31);
			this->textCargo->TabIndex = 56;
			// 
			// textSalario
			// 
			this->textSalario->Location = System::Drawing::Point(281, 244);
			this->textSalario->Multiline = true;
			this->textSalario->Name = L"textSalario";
			this->textSalario->Size = System::Drawing::Size(213, 31);
			this->textSalario->TabIndex = 55;
			// 
			// textNombre
			// 
			this->textNombre->Location = System::Drawing::Point(282, 146);
			this->textNombre->Multiline = true;
			this->textNombre->Name = L"textNombre";
			this->textNombre->Size = System::Drawing::Size(213, 31);
			this->textNombre->TabIndex = 52;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label8->Location = System::Drawing::Point(113, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 31);
			this->label8->TabIndex = 51;
			this->label8->Text = L"Nombre:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label5->Location = System::Drawing::Point(112, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 31);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Sueldo Base:";
			this->label5->Click += gcnew System::EventHandler(this, &RolPago::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label4->Location = System::Drawing::Point(113, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 31);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Cargo:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(281, 295);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 31);
			this->textBox1->TabIndex = 58;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label2->Location = System::Drawing::Point(112, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 31);
			this->label2->TabIndex = 57;
			this->label2->Text = L"Bonos totales:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(281, 346);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 31);
			this->textBox2->TabIndex = 60;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label3->Location = System::Drawing::Point(119, 346);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 31);
			this->label3->TabIndex = 59;
			this->label3->Text = L"Descuentos:\r\n";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(281, 396);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(213, 31);
			this->textBox4->TabIndex = 62;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label6->Location = System::Drawing::Point(119, 396);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 31);
			this->label6->TabIndex = 61;
			this->label6->Text = L"Aporte IESS:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(186, 455);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(213, 31);
			this->textBox9->TabIndex = 64;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label11->Location = System::Drawing::Point(37, 455);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(143, 31);
			this->label11->TabIndex = 63;
			this->label11->Text = L"Total a pagar:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(440, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 40);
			this->button1->TabIndex = 65;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RolPago::button1_Click);
			// 
			// txtCedula
			// 
			this->txtCedula->Location = System::Drawing::Point(280, 95);
			this->txtCedula->Multiline = true;
			this->txtCedula->Name = L"txtCedula";
			this->txtCedula->Size = System::Drawing::Size(213, 31);
			this->txtCedula->TabIndex = 98;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label7->Location = System::Drawing::Point(119, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 31);
			this->label7->TabIndex = 97;
			this->label7->Text = L"Cedula:";
			// 
			// RolPago
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(599, 567);
			this->Controls->Add(this->txtCedula);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textCargo);
			this->Controls->Add(this->textSalario);
			this->Controls->Add(this->textNombre);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RolPago";
			this->Text = L"RolPago";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Owner != nullptr) {
		this->Owner->Show();
	}
	this->Close();
}
};
}
