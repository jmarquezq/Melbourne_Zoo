#pragma once


namespace MelbourneZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de boleto
	/// </summary>
	public ref class boleto : public System::Windows::Forms::Form
	{
	public:
		boleto(void)
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
		~boleto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textCorreo;




	private: System::Windows::Forms::TextBox^ textCedula;

	private: System::Windows::Forms::TextBox^ textNombre;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnVender;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnCancelar;




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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnVender = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textCorreo = (gcnew System::Windows::Forms::TextBox());
			this->textCedula = (gcnew System::Windows::Forms::TextBox());
			this->textNombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->btnVender);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textCorreo);
			this->panel1->Controls->Add(this->textCedula);
			this->panel1->Controls->Add(this->textNombre);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(39, 63);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(520, 427);
			this->panel1->TabIndex = 0;
			// 
			// btnCancelar
			// 
			this->btnCancelar->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->ForeColor = System::Drawing::Color::White;
			this->btnCancelar->Location = System::Drawing::Point(306, 351);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(123, 42);
			this->btnCancelar->TabIndex = 19;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = false;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &boleto::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label6->Location = System::Drawing::Point(300, 266);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 31);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Adulto mayor:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label5->Location = System::Drawing::Point(155, 263);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 31);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Adulto:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label4->Location = System::Drawing::Point(34, 263);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 31);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Niño:";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox3->Location = System::Drawing::Point(446, 268);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(49, 24);
			this->comboBox3->TabIndex = 15;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &boleto::comboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox2->Location = System::Drawing::Point(235, 266);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(59, 24);
			this->comboBox2->TabIndex = 14;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &boleto::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox1->Location = System::Drawing::Point(96, 268);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(52, 24);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &boleto::comboBox1_SelectedIndexChanged);
			// 
			// btnVender
			// 
			this->btnVender->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->btnVender->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVender->ForeColor = System::Drawing::Color::White;
			this->btnVender->Location = System::Drawing::Point(96, 351);
			this->btnVender->Name = L"btnVender";
			this->btnVender->Size = System::Drawing::Size(107, 42);
			this->btnVender->TabIndex = 12;
			this->btnVender->Text = L"Vender";
			this->btnVender->UseVisualStyleBackColor = false;
			this->btnVender->Click += gcnew System::EventHandler(this, &boleto::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->textBox4->Location = System::Drawing::Point(55, 16);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(87, 39);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"Caja 1";
			// 
			// textCorreo
			// 
			this->textCorreo->Location = System::Drawing::Point(206, 185);
			this->textCorreo->Multiline = true;
			this->textCorreo->Name = L"textCorreo";
			this->textCorreo->Size = System::Drawing::Size(180, 36);
			this->textCorreo->TabIndex = 5;
			this->textCorreo->TextChanged += gcnew System::EventHandler(this, &boleto::textCorreo_TextChanged);
			// 
			// textCedula
			// 
			this->textCedula->Location = System::Drawing::Point(206, 132);
			this->textCedula->Multiline = true;
			this->textCedula->Name = L"textCedula";
			this->textCedula->Size = System::Drawing::Size(180, 37);
			this->textCedula->TabIndex = 4;
			this->textCedula->TextChanged += gcnew System::EventHandler(this, &boleto::textCedula_TextChanged);
			// 
			// textNombre
			// 
			this->textNombre->Location = System::Drawing::Point(206, 75);
			this->textNombre->Multiline = true;
			this->textNombre->Name = L"textNombre";
			this->textNombre->Size = System::Drawing::Size(180, 34);
			this->textNombre->TabIndex = 3;
			this->textNombre->TextChanged += gcnew System::EventHandler(this, &boleto::textNombre_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label3->Location = System::Drawing::Point(52, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Correo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label2->Location = System::Drawing::Point(52, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cedula:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label1->Location = System::Drawing::Point(52, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// boleto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(601, 546);
			this->Controls->Add(this->panel1);
			this->Name = L"boleto";
			this->Text = L"boleto";
			this->Load += gcnew System::EventHandler(this, &boleto::boleto_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void boleto_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void textNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ texto = textNombre->Text;
	for each(Char c in texto) {
		if (!Char::IsLetter(c) && !Char::IsWhiteSpace(c)) {
			MessageBox::Show("Solo se permiten letras en el nombre.", "Validación",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			textNombre->Text = "";
			return;
		}
	}
}
private: System::Void textCedula_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ ced = textCedula->Text;
	for each(Char c in ced) {
		if (!Char::IsDigit(c)) {
			MessageBox::Show("Solo números en la cédula.");
			textCedula->Text = "";
			return;
		}
	}
	if (ced->Length == 10) {

		int suma = 0;
		for (int i = 0; i < 9; i++) {
			int num = Int32::Parse(ced[i].ToString());
			if (i % 2 == 0) {
				num = num * 2;
				if (num > 9) num -= 9;  
			}
			suma += num;
		}
		int verificador = (10 - (suma % 10));
		if (verificador == 10) verificador = 0;
		int ultimo = Int32::Parse(ced[9].ToString());

		if (verificador != ultimo) {
			MessageBox::Show("La cédula no existe (inválida).");
			textCedula->Text = "";
			return;
		}
	}
	if (ced->Length > 10) {
		MessageBox::Show("La cédula debe tener 10 dígitos.");
		textCedula->Text = "";
	}
}
private: System::Void textCorreo_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textNombre->Text == "" ||
		textCedula->Text == "" ||
		textCorreo->Text == "")
	{
		MessageBox::Show("Por favor llene todos los campos.", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (comboBox1->SelectedIndex == -1 ||
		comboBox2->SelectedIndex == -1 ||
		comboBox3->SelectedIndex == -1)
	{
		MessageBox::Show("Debe seleccionar cuántos boletos desea.",
			"Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	MessageBox::Show("¡Vendido con éxito!", "Venta completada",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Owner->Show();   
	this->Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
