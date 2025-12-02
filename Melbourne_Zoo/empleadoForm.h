#pragma once
#include "Empleado.h"
#include <vector>

static vector<Empleado> listaEmpleados;
namespace MelbourneZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de empleadoForm
	/// </summary>
	public ref class empleadoForm : public System::Windows::Forms::Form
	{
	public:
		empleadoForm(void)
		{
			InitializeComponent();
			panelLista->Visible = false;

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
		~empleadoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ btnAgregar;
	private: System::Windows::Forms::ToolStripButton^ btnEditar;
	private: System::Windows::Forms::ToolStripButton^ btnEliminar;
	private: System::Windows::Forms::ToolStripButton^ btnLista;

	protected:
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtCedula;
	private: System::Windows::Forms::TextBox^ txtSalario;
	private: System::Windows::Forms::ComboBox^ cmbEstado;
	private: System::Windows::Forms::DateTimePicker^ dtpFechaIngreso;

	private: System::Windows::Forms::TextBox^ txtNombre;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::ComboBox^ cmbCargo;
	private: System::Windows::Forms::ToolStripButton^ btnBuscar;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelLista;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(empleadoForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->btnAgregar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnBuscar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnEditar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnEliminar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnLista = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtCedula = (gcnew System::Windows::Forms::TextBox());
			this->txtSalario = (gcnew System::Windows::Forms::TextBox());
			this->cmbEstado = (gcnew System::Windows::Forms::ComboBox());
			this->dtpFechaIngreso = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbCargo = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelLista = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->toolStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelLista->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->btnAgregar, this->btnBuscar,
					this->btnEditar, this->btnEliminar, this->btnLista, this->toolStripButton7
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(673, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// btnAgregar
			// 
			this->btnAgregar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnAgregar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregar.Image")));
			this->btnAgregar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(29, 24);
			this->btnAgregar->Text = L"toolStripButton2";
			this->btnAgregar->Click += gcnew System::EventHandler(this, &empleadoForm::toolStripButton2_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnBuscar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBuscar.Image")));
			this->btnBuscar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(29, 24);
			this->btnBuscar->Text = L"toolStripButton1";
			this->btnBuscar->Click += gcnew System::EventHandler(this, &empleadoForm::toolStripButton1_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnEditar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditar.Image")));
			this->btnEditar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(29, 24);
			this->btnEditar->Text = L"toolStripButton3";
			this->btnEditar->Click += gcnew System::EventHandler(this, &empleadoForm::btnEditar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnEliminar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEliminar.Image")));
			this->btnEliminar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(29, 24);
			this->btnEliminar->Text = L"toolStripButton5";
			this->btnEliminar->Click += gcnew System::EventHandler(this, &empleadoForm::btnEliminar_Click);
			// 
			// btnLista
			// 
			this->btnLista->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnLista->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLista.Image")));
			this->btnLista->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnLista->Name = L"btnLista";
			this->btnLista->Size = System::Drawing::Size(29, 24);
			this->btnLista->Text = L"toolStripButton6";
			this->btnLista->Click += gcnew System::EventHandler(this, &empleadoForm::btnLista_Click);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(29, 24);
			this->toolStripButton7->Text = L"toolStripButton7";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &empleadoForm::toolStripButton7_Click);
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(229, 119);
			this->txtApellido->Multiline = true;
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(213, 31);
			this->txtApellido->TabIndex = 34;
			this->txtApellido->TextChanged += gcnew System::EventHandler(this, &empleadoForm::txtApellido_TextChanged);
			// 
			// txtCedula
			// 
			this->txtCedula->Location = System::Drawing::Point(229, 23);
			this->txtCedula->Multiline = true;
			this->txtCedula->Name = L"txtCedula";
			this->txtCedula->Size = System::Drawing::Size(213, 31);
			this->txtCedula->TabIndex = 33;
			this->txtCedula->TextChanged += gcnew System::EventHandler(this, &empleadoForm::txtCedula_TextChanged);
			// 
			// txtSalario
			// 
			this->txtSalario->Location = System::Drawing::Point(229, 220);
			this->txtSalario->Multiline = true;
			this->txtSalario->Name = L"txtSalario";
			this->txtSalario->Size = System::Drawing::Size(213, 31);
			this->txtSalario->TabIndex = 32;
			this->txtSalario->TextChanged += gcnew System::EventHandler(this, &empleadoForm::txtSalario_TextChanged);
			// 
			// cmbEstado
			// 
			this->cmbEstado->FormattingEnabled = true;
			this->cmbEstado->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Activo", L"Inactivo" });
			this->cmbEstado->Location = System::Drawing::Point(229, 332);
			this->cmbEstado->Name = L"cmbEstado";
			this->cmbEstado->Size = System::Drawing::Size(121, 24);
			this->cmbEstado->TabIndex = 30;
			this->cmbEstado->SelectedIndexChanged += gcnew System::EventHandler(this, &empleadoForm::cmbEstado_SelectedIndexChanged);
			// 
			// dtpFechaIngreso
			// 
			this->dtpFechaIngreso->Location = System::Drawing::Point(229, 289);
			this->dtpFechaIngreso->Name = L"dtpFechaIngreso";
			this->dtpFechaIngreso->Size = System::Drawing::Size(200, 22);
			this->dtpFechaIngreso->TabIndex = 29;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(229, 70);
			this->txtNombre->Multiline = true;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(213, 31);
			this->txtNombre->TabIndex = 28;
			this->txtNombre->TextChanged += gcnew System::EventHandler(this, &empleadoForm::txtNombre_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label8->Location = System::Drawing::Point(37, 70);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 31);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Nombre:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label7->Location = System::Drawing::Point(37, 325);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 31);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Estado:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label6->Location = System::Drawing::Point(37, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(168, 31);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Fecha de ingreso:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label5->Location = System::Drawing::Point(37, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 31);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Salario";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label4->Location = System::Drawing::Point(37, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 31);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Cargo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label3->Location = System::Drawing::Point(37, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 31);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Cedula:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label2->Location = System::Drawing::Point(37, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 31);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Apellido:";
			// 
			// cmbCargo
			// 
			this->cmbCargo->FormattingEnabled = true;
			this->cmbCargo->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Veterinario", L"Administrador", L"Cuidador", L"Auxiliar" });
			this->cmbCargo->Location = System::Drawing::Point(229, 174);
			this->cmbCargo->Name = L"cmbCargo";
			this->cmbCargo->Size = System::Drawing::Size(121, 24);
			this->cmbCargo->TabIndex = 36;
			this->cmbCargo->SelectedIndexChanged += gcnew System::EventHandler(this, &empleadoForm::cmbCargo_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->cmbCargo);
			this->panel1->Controls->Add(this->txtApellido);
			this->panel1->Controls->Add(this->txtCedula);
			this->panel1->Controls->Add(this->txtSalario);
			this->panel1->Controls->Add(this->cmbEstado);
			this->panel1->Controls->Add(this->dtpFechaIngreso);
			this->panel1->Controls->Add(this->txtNombre);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(79, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(486, 365);
			this->panel1->TabIndex = 38;
			// 
			// panelLista
			// 
			this->panelLista->Controls->Add(this->dataGridView1);
			this->panelLista->Location = System::Drawing::Point(12, 401);
			this->panelLista->Name = L"panelLista";
			this->panelLista->Size = System::Drawing::Size(649, 182);
			this->panelLista->TabIndex = 39;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(4, 14);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(642, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Cedula";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Apellido";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Cargo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Estado";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// empleadoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(673, 594);
			this->Controls->Add(this->panelLista);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->toolStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"empleadoForm";
			this->Text = L"rere";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelLista->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Owner->Show();  
		this->Close();
	}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(txtCedula->Text) ||
		String::IsNullOrWhiteSpace(txtNombre->Text) ||
		String::IsNullOrWhiteSpace(txtApellido->Text) ||
		String::IsNullOrWhiteSpace(txtSalario->Text) ||
		String::IsNullOrWhiteSpace(cmbCargo->Text) ||
		String::IsNullOrWhiteSpace(cmbEstado->Text))
	{
		MessageBox::Show("Debe llenar todos los campos antes de agregar.",
			"Datos incompletos",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}
	Empleado emp;
	emp.setCedula(toStdString(txtCedula->Text));
	emp.setNombre(toStdString(txtNombre->Text));
	emp.setApellido(toStdString(txtApellido->Text));
	emp.setCargo(toStdString(cmbCargo->Text));
	emp.setSalario(atof(toStdString(txtSalario->Text).c_str()));
	emp.setFechaIngreso(toStdString(dtpFechaIngreso->Text));
	emp.setEstado(toStdString(cmbEstado->Text));
	listaEmpleados.push_back(emp);
	MessageBox::Show("Empleado agregado");
	txtCedula->Clear();
	txtNombre->Clear();
	txtApellido->Clear();
	txtSalario->Clear();
	cmbCargo->SelectedIndex = -1;
	cmbEstado->SelectedIndex = -1;
	dtpFechaIngreso->Value = DateTime::Now;
}
private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
	string cedBuscada = toStdString(txtCedula->Text);
	Empleado* encontrado = nullptr;
	for (size_t i = 0; i < listaEmpleados.size(); ++i) {
		if (listaEmpleados[i].getCedula() == cedBuscada) {
			encontrado = &listaEmpleados[i];
			break;
		}
	}
	if (encontrado == nullptr) {
		MessageBox::Show("Empleado no encontrado");
		return;
	}
	encontrado->setNombre(toStdString(txtNombre->Text));
	encontrado->setApellido(toStdString(txtApellido->Text));
	encontrado->setCargo(toStdString(cmbCargo->Text));
	encontrado->setSalario(atof(toStdString(txtSalario->Text).c_str()));
	encontrado->setFechaIngreso(toStdString(dtpFechaIngreso->Text));
	encontrado->setEstado(toStdString(cmbEstado->Text));
	MessageBox::Show("Cambios guardados");
	txtCedula->Clear();
	txtNombre->Clear();
	txtApellido->Clear();
	txtSalario->Clear();
	cmbCargo->SelectedIndex = -1;
	cmbEstado->SelectedIndex = -1;
	dtpFechaIngreso->Value = DateTime::Now;
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	string cedBuscada = toStdString(txtCedula->Text);
	Empleado* encontrado = nullptr;
	for (size_t i = 0; i < listaEmpleados.size(); ++i) {
		if (listaEmpleados[i].getCedula() == cedBuscada) {
			encontrado = &listaEmpleados[i];
			break;
		}
	}
	if (encontrado == nullptr) {
		MessageBox::Show("Empleado no encontrado");
		return;
	}
	txtNombre->Text = toSystemString(encontrado->getNombre());
	txtApellido->Text = toSystemString(encontrado->getApellido());
	cmbCargo->Text = toSystemString(encontrado->getCargo());
	txtSalario->Text = toSystemString(std::to_string(encontrado->getSalario()));
	dtpFechaIngreso->Text = toSystemString(encontrado->getFechaIngreso());
	cmbEstado->Text = toSystemString(encontrado->getEstado());
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string cedBuscada = toStdString(txtCedula->Text);
	if (MessageBox::Show(
		"¿Desea eliminar este empleado?",
		"Confirmar eliminación",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
	{
		return;
	}
	bool encontrado = false;
	for (size_t i = 0; i < listaEmpleados.size(); ++i) {
		if (listaEmpleados[i].getCedula() == cedBuscada) {
			listaEmpleados.erase(listaEmpleados.begin() + i); // elimina ese empleado
			encontrado = true;
			break;
		}
	}
	if (!encontrado) {
		MessageBox::Show("Empleado no encontrado");
		return;
	}
	MessageBox::Show("Empleado eliminado");
	txtCedula->Clear();
	txtNombre->Clear();
	txtApellido->Clear();
	txtSalario->Clear();
	cmbCargo->SelectedIndex = -1;
	cmbEstado->SelectedIndex = -1;
	dtpFechaIngreso->Value = DateTime::Now;
}
private: System::Void btnLista_Click(System::Object^ sender, System::EventArgs^ e) {
	panelLista->Visible = true;
	dataGridView1->Rows->Clear();
	for (size_t i = 0; i < listaEmpleados.size(); ++i) {
		Empleado& emp = listaEmpleados[i];
		dataGridView1->Rows->Add(
			toSystemString(emp.getCedula()),      
			toSystemString(emp.getApellido()),    
			toSystemString(emp.getCargo()),       
			toSystemString(emp.getEstado())     
		);
	}
}
private: System::Void txtCedula_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ texto = txtCedula->Text;
	for (int i = 0; i < texto->Length; i++) {
		if (!Char::IsDigit(texto[i])) {
			MessageBox::Show("Ingrese solo números");
			txtCedula->Clear();   
			return;
		}
	}
	string ced = toStdString(txtCedula->Text);
	for (size_t i = 0; i < listaEmpleados.size(); i++) {
		if (listaEmpleados[i].getCedula() == ced) {
			MessageBox::Show("La cédula ingresada ya existe");
			txtCedula->Clear();
			return;
		}
	}
}
private: System::Void txtNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ t = txtNombre->Text;
	for (int i = 0; i < t->Length; i++) {
		if (!Char::IsLetter(t[i]) && t[i] != ' ') {
			MessageBox::Show("Ingrese solo letras");
			txtNombre->Clear();
			return;
		}
	}
}
private: System::Void txtApellido_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ t = txtNombre->Text;
	for (int i = 0; i < t->Length; i++) {
		if (!Char::IsLetter(t[i]) && t[i] != ' ') {
			MessageBox::Show("Ingrese solo letras");
			txtNombre->Clear();
			return;
		}
	}
}
private: System::Void cmbCargo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cmbCargo->SelectedIndex == -1 || String::IsNullOrWhiteSpace(cmbCargo->Text)) {
		MessageBox::Show("Seleccione un cargo.");
		return;
	}
}
private: System::Void txtSalario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ t = txtSalario->Text;
	if (t->Length == 0) return;
	int puntos = 0;
	for (int i = 0; i < t->Length; i++) {
		Char c = t[i];
		if (!Char::IsDigit(c)) {
			if (c == '.' && puntos == 0) { 
				puntos++;
			}
			else {
				MessageBox::Show("Solo números (enteros o con . decimal).");
				txtSalario->Text = "";
				return;
			}
		}
	}
}
private: System::Void cmbEstado_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cmbEstado->SelectedIndex == -1 || String::IsNullOrWhiteSpace(cmbEstado->Text)) {
		MessageBox::Show("Seleccione su estado.");
		return;
	}
}
};
}
