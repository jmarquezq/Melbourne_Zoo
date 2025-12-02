#pragma once
#include "menuDueno.h"
#include "menuAdministrador.h"
#include "menuCajero.h"
#include "Usuario.h"

namespace MelbourneZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{

	public:
		loginForm()
		{
			InitializeComponent();

		}
	private:
		static std::string toStdString(System::String^ s) {
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr ptr = Marshal::StringToHGlobalAnsi(s);
			std::string result = static_cast<char*>(ptr.ToPointer());
			Marshal::FreeHGlobal(ptr);
			return result;
		}

		static System::String^ toSystemString(const std::string& s) {
			return gcnew System::String(s.c_str());
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnCancelar;
	protected:

	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::TextBox^ textContraseña;


	private: System::Windows::Forms::TextBox^ textUsuario;
	private: System::Windows::Forms::Label^ LabelPass;


	private: System::Windows::Forms::Label^ LabelUser;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->textContraseña = (gcnew System::Windows::Forms::TextBox());
			this->textUsuario = (gcnew System::Windows::Forms::TextBox());
			this->LabelPass = (gcnew System::Windows::Forms::Label());
			this->LabelUser = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->btnIngresar);
			this->panel1->Controls->Add(this->textContraseña);
			this->panel1->Controls->Add(this->textUsuario);
			this->panel1->Controls->Add(this->LabelPass);
			this->panel1->Controls->Add(this->LabelUser);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(80, 38);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(363, 382);
			this->panel1->TabIndex = 0;
			// 
			// btnCancelar
			// 
			this->btnCancelar->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->ForeColor = System::Drawing::Color::White;
			this->btnCancelar->Location = System::Drawing::Point(171, 299);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(124, 45);
			this->btnCancelar->TabIndex = 6;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = false;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &loginForm::btnCancelar_Click);
			// 
			// btnIngresar
			// 
			this->btnIngresar->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->btnIngresar->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIngresar->ForeColor = System::Drawing::Color::Transparent;
			this->btnIngresar->Location = System::Drawing::Point(30, 299);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(117, 45);
			this->btnIngresar->TabIndex = 5;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = false;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &loginForm::btnIngresar_Click);
			// 
			// textContraseña
			// 
			this->textContraseña->Location = System::Drawing::Point(30, 224);
			this->textContraseña->Multiline = true;
			this->textContraseña->Name = L"textContraseña";
			this->textContraseña->PasswordChar = '*';
			this->textContraseña->Size = System::Drawing::Size(216, 33);
			this->textContraseña->TabIndex = 4;
			// 
			// textUsuario
			// 
			this->textUsuario->Location = System::Drawing::Point(30, 131);
			this->textUsuario->Multiline = true;
			this->textUsuario->Name = L"textUsuario";
			this->textUsuario->Size = System::Drawing::Size(222, 35);
			this->textUsuario->TabIndex = 3;
			this->textUsuario->TextChanged += gcnew System::EventHandler(this, &loginForm::textUsuario_TextChanged);
			// 
			// LabelPass
			// 
			this->LabelPass->AutoSize = true;
			this->LabelPass->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelPass->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->LabelPass->Location = System::Drawing::Point(27, 181);
			this->LabelPass->Name = L"LabelPass";
			this->LabelPass->Size = System::Drawing::Size(154, 40);
			this->LabelPass->TabIndex = 2;
			this->LabelPass->Text = L"Contraseña:";
			// 
			// LabelUser
			// 
			this->LabelUser->AutoSize = true;
			this->LabelUser->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelUser->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->LabelUser->Location = System::Drawing::Point(27, 88);
			this->LabelUser->Name = L"LabelUser";
			this->LabelUser->Size = System::Drawing::Size(111, 40);
			this->LabelUser->TabIndex = 1;
			this->LabelUser->Text = L"Usuario:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label1->Location = System::Drawing::Point(48, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingreso al sistema";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(12, 429);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(375, 30);
			this->label3->TabIndex = 5;
			this->label3->Text = L"© 2025 Melbourne Zoo – Jenniffer MQ  ";
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(522, 468);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"loginForm";
			this->Text = L"loginForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {

		std::string user = toStdString(textUsuario->Text);
		std::string pass = toStdString(textContraseña->Text);

		Usuario u;

		if (u.verificarUsuario(user, pass)) {

			System::String^ perfilForm = toSystemString(u.getPerfil());

			if (perfilForm == "dueno") {
				menuDueno^ menu = gcnew menuDueno();
				MessageBox::Show("¡Bienvenido al menú Dueño!");
				menu->Show();
				textUsuario->Clear();
				textContraseña->Clear();
				textUsuario->Focus();
			}
			else if (perfilForm == "admin") {
				menuAdministrador^ menu = gcnew menuAdministrador();
				MessageBox::Show("¡Bienvenido al menú Administrador!");
				menu->Show();
				textUsuario->Clear();
				textContraseña->Clear();
				textUsuario->Focus();
			}
			else if (perfilForm == "cajero") {
				menuCajero^ menu = gcnew menuCajero();
				MessageBox::Show("¡Bienvenido al menú Cajero!");
				menu->Show();
				textUsuario->Clear();
				textContraseña->Clear();
				textUsuario->Focus();
			}

			this->Hide();
			return;
		}

		MessageBox::Show("Usuario o contraseña incorrectos.",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);;
		
	}
    private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::OpenForms["mainForm"]->Show();
		this->Close();
	}
private: System::Void textUsuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
