#pragma once
#include "empleadoForm.h"
#include "registrarCalcularForm.h"
#include "RolPago.h"
#include "horariosForm.h"
#include "permisosForm.h"
#include "centroControlForm.h"

namespace MelbourneZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuDueno
	/// </summary>
	public ref class menuDueno : public System::Windows::Forms::Form
	{
	public:
		menuDueno(void)
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
		~menuDueno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSalir;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ empleadosToolStripMenuItem;






	private: System::Windows::Forms::ToolStripMenuItem^ nominaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ calcularPagosToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ rolDePagoToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ horariosToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ permisosDelZooToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ configuracionesToolStripMenuItem;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuDueno::typeid));
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->empleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nominaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calcularPagosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rolDePagoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->horariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->permisosDelZooToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuracionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->ForeColor = System::Drawing::Color::White;
			this->btnSalir->Location = System::Drawing::Point(534, 393);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(124, 45);
			this->btnSalir->TabIndex = 11;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &menuDueno::btnSalir_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(12, 428);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(375, 30);
			this->label3->TabIndex = 10;
			this->label3->Text = L"© 2025 Melbourne Zoo – Jenniffer MQ  ";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Location = System::Drawing::Point(219, 89);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(266, 284);
			this->panel1->TabIndex = 9;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->empleadosToolStripMenuItem,
					this->nominaToolStripMenuItem, this->horariosToolStripMenuItem, this->permisosDelZooToolStripMenuItem, this->configuracionesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(771, 39);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->empleadosToolStripMenuItem->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(119, 35);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			this->empleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDueno::empleadosToolStripMenuItem_Click);
			// 
			// nominaToolStripMenuItem
			// 
			this->nominaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->calcularPagosToolStripMenuItem,
					this->rolDePagoToolStripMenuItem
			});
			this->nominaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nominaToolStripMenuItem->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->nominaToolStripMenuItem->Name = L"nominaToolStripMenuItem";
			this->nominaToolStripMenuItem->Size = System::Drawing::Size(99, 35);
			this->nominaToolStripMenuItem->Text = L"Nomina";
			this->nominaToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDueno::nominaToolStripMenuItem_Click);
			// 
			// calcularPagosToolStripMenuItem
			// 
			this->calcularPagosToolStripMenuItem->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->calcularPagosToolStripMenuItem->Name = L"calcularPagosToolStripMenuItem";
			this->calcularPagosToolStripMenuItem->Size = System::Drawing::Size(328, 36);
			this->calcularPagosToolStripMenuItem->Text = L"Registar y calcular pagos";
			this->calcularPagosToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDueno::calcularPagosToolStripMenuItem_Click);
			// 
			// rolDePagoToolStripMenuItem
			// 
			this->rolDePagoToolStripMenuItem->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->rolDePagoToolStripMenuItem->Name = L"rolDePagoToolStripMenuItem";
			this->rolDePagoToolStripMenuItem->Size = System::Drawing::Size(328, 36);
			this->rolDePagoToolStripMenuItem->Text = L"Rol de pago";
			this->rolDePagoToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDueno::rolDePagoToolStripMenuItem_Click);
			// 
			// horariosToolStripMenuItem
			// 
			this->horariosToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->horariosToolStripMenuItem->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->horariosToolStripMenuItem->Name = L"horariosToolStripMenuItem";
			this->horariosToolStripMenuItem->Size = System::Drawing::Size(101, 35);
			this->horariosToolStripMenuItem->Text = L"Horarios";
			this->horariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDueno::horariosToolStripMenuItem_Click);
			// 
			// permisosDelZooToolStripMenuItem
			// 
			this->permisosDelZooToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->permisosDelZooToolStripMenuItem->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->permisosDelZooToolStripMenuItem->Name = L"permisosDelZooToolStripMenuItem";
			this->permisosDelZooToolStripMenuItem->Size = System::Drawing::Size(175, 35);
			this->permisosDelZooToolStripMenuItem->Text = L"Permisos del Zoo";
			this->permisosDelZooToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDueno::permisosDelZooToolStripMenuItem_Click);
			// 
			// configuracionesToolStripMenuItem
			// 
			this->configuracionesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->configuracionesToolStripMenuItem->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->configuracionesToolStripMenuItem->Name = L"configuracionesToolStripMenuItem";
			this->configuracionesToolStripMenuItem->Size = System::Drawing::Size(185, 35);
			this->configuracionesToolStripMenuItem->Text = L"Centro de Control";
			this->configuracionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDueno::configuracionesToolStripMenuItem_Click);
			// 
			// menuDueno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(771, 512);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->Name = L"menuDueno";
			this->Text = L"menuDueno";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void boletoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void empleadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		empleadoForm^ frm = gcnew empleadoForm();
		frm->Owner = this;   
		this->Hide();        
		frm->Show();
    }
private: System::Void nominaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Application::OpenForms["loginForm"]->Show();
}

private: System::Void permisosDelZooToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	permisosForm^ frm = gcnew permisosForm();
	frm->Owner = this;
	this->Hide();
	frm->Show();
}
private: System::Void verHorariosPorEmpleadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void calcularPagosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	registrarCalcularForm^ frm = gcnew registrarCalcularForm();
	frm->Owner = this;
	this->Hide();
	frm->Show();
}
private: System::Void rolDePagoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	RolPago^ frm = gcnew RolPago();
	frm->Owner = this;
	this->Hide();
	frm->Show();
}
private: System::Void horariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	horariosForm^ frm = gcnew horariosForm();
	frm->Owner = this;
	this->Hide();
	frm->Show();
}
private: System::Void configuracionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	centroControlForm^ frm = gcnew centroControlForm();
	frm->Owner = this;
	this->Hide();
	frm->Show();
}
};
}
