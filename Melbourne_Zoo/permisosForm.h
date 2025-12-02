#pragma once
#include "Permiso.h"
#include <vector>

static vector<Permiso> listaPermisos;

namespace MelbourneZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de permisosForm
	/// </summary>
	public ref class permisosForm : public System::Windows::Forms::Form
	{
	public:
		permisosForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
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
		~permisosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ btnAgregar;
	private: System::Windows::Forms::ToolStripButton^ btnEliminar;
	protected:


	private: System::Windows::Forms::ToolStripButton^ btnBuscar;
	private: System::Windows::Forms::ToolStripButton^ btnEditar;
	private: System::Windows::Forms::ToolStripButton^ btnSalir;




	private: System::Windows::Forms::ToolStripButton^ btnLista;
	private: System::Windows::Forms::TextBox^ txtMotivo;
	private: System::Windows::Forms::DateTimePicker^ dtpFin;






	private: System::Windows::Forms::DateTimePicker^ dtpInicio;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::ComboBox^ cmbArea;



	private: System::Windows::Forms::ComboBox^ cmbResponsable;

	private: System::Windows::Forms::ComboBox^ cmbTipoPermiso;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(permisosForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->btnAgregar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnBuscar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnEditar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnEliminar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnLista = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnSalir = (gcnew System::Windows::Forms::ToolStripButton());
			this->txtMotivo = (gcnew System::Windows::Forms::TextBox());
			this->dtpFin = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cmbArea = (gcnew System::Windows::Forms::ComboBox());
			this->cmbResponsable = (gcnew System::Windows::Forms::ComboBox());
			this->cmbTipoPermiso = (gcnew System::Windows::Forms::ComboBox());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->btnAgregar, this->btnBuscar,
					this->btnEditar, this->btnEliminar, this->btnLista, this->btnSalir
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(700, 27);
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
			this->btnAgregar->Text = L"toolStripButton1";
			this->btnAgregar->Click += gcnew System::EventHandler(this, &permisosForm::toolStripButton1_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnBuscar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBuscar.Image")));
			this->btnBuscar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(29, 24);
			this->btnBuscar->Text = L"toolStripButton3";
			this->btnBuscar->Click += gcnew System::EventHandler(this, &permisosForm::btnBuscar_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnEditar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditar.Image")));
			this->btnEditar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(29, 24);
			this->btnEditar->Text = L"toolStripButton4";
			this->btnEditar->Click += gcnew System::EventHandler(this, &permisosForm::btnEditar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnEliminar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEliminar.Image")));
			this->btnEliminar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(29, 24);
			this->btnEliminar->Text = L"toolStripButton2";
			this->btnEliminar->Click += gcnew System::EventHandler(this, &permisosForm::btnEliminar_Click);
			// 
			// btnLista
			// 
			this->btnLista->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnLista->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLista.Image")));
			this->btnLista->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnLista->Name = L"btnLista";
			this->btnLista->Size = System::Drawing::Size(29, 24);
			this->btnLista->Text = L"toolStripButton6";
			this->btnLista->Click += gcnew System::EventHandler(this, &permisosForm::btnLista_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->btnSalir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSalir.Image")));
			this->btnSalir->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(29, 24);
			this->btnSalir->Text = L"toolStripButton5";
			this->btnSalir->Click += gcnew System::EventHandler(this, &permisosForm::btnSalir_Click);
			// 
			// txtMotivo
			// 
			this->txtMotivo->Location = System::Drawing::Point(275, 293);
			this->txtMotivo->Multiline = true;
			this->txtMotivo->Name = L"txtMotivo";
			this->txtMotivo->Size = System::Drawing::Size(220, 31);
			this->txtMotivo->TabIndex = 71;
			// 
			// dtpFin
			// 
			this->dtpFin->Location = System::Drawing::Point(275, 253);
			this->dtpFin->Name = L"dtpFin";
			this->dtpFin->Size = System::Drawing::Size(200, 22);
			this->dtpFin->TabIndex = 67;
			// 
			// dtpInicio
			// 
			this->dtpInicio->Location = System::Drawing::Point(275, 212);
			this->dtpInicio->Name = L"dtpInicio";
			this->dtpInicio->Size = System::Drawing::Size(200, 22);
			this->dtpInicio->TabIndex = 66;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label6->Location = System::Drawing::Point(71, 293);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 31);
			this->label6->TabIndex = 65;
			this->label6->Text = L"Motivo/Detalles:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label5->Location = System::Drawing::Point(71, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 31);
			this->label5->TabIndex = 64;
			this->label5->Text = L"Fecha fin:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label4->Location = System::Drawing::Point(71, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 31);
			this->label4->TabIndex = 63;
			this->label4->Text = L"Responsable:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label3->Location = System::Drawing::Point(71, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 31);
			this->label3->TabIndex = 62;
			this->label3->Text = L"Area/Habitat:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label2->Location = System::Drawing::Point(71, 208);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 31);
			this->label2->TabIndex = 61;
			this->label2->Text = L"Fecha inicio:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label8->Location = System::Drawing::Point(71, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(164, 31);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Tipo de permiso:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 339);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(676, 150);
			this->dataGridView1->TabIndex = 72;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Tipo";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Responsable";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Area/Habit";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Inicio";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fin";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// cmbArea
			// 
			this->cmbArea->FormattingEnabled = true;
			this->cmbArea->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Selva Tropical – Aviario", L"Zona de Felinos",
					L"Acuario – Peces Exóticos", L"Reptilario – Serpientes y Lagartos", L"Pradera – Herbívoros", L"Invernadero – Plantas y Mariposas"
			});
			this->cmbArea->Location = System::Drawing::Point(275, 163);
			this->cmbArea->Name = L"cmbArea";
			this->cmbArea->Size = System::Drawing::Size(220, 24);
			this->cmbArea->TabIndex = 75;
			// 
			// cmbResponsable
			// 
			this->cmbResponsable->FormattingEnabled = true;
			this->cmbResponsable->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Dr. Juan Pérez – Veterinario", L"Lic. María Gómez – Coordinadora de Conservación",
					L"Ing. Carlos Ramírez – Encargado de Mantenimiento", L"Dra. Ana López – Investigadora", L"Sr. José Martínez – Supervisor de Hábitats",
					L"Lic. Laura Torres – Guía Educativa"
			});
			this->cmbResponsable->Location = System::Drawing::Point(275, 106);
			this->cmbResponsable->Name = L"cmbResponsable";
			this->cmbResponsable->Size = System::Drawing::Size(220, 24);
			this->cmbResponsable->TabIndex = 74;
			// 
			// cmbTipoPermiso
			// 
			this->cmbTipoPermiso->FormattingEnabled = true;
			this->cmbTipoPermiso->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Ingreso de Animales Exóticos", L"Mantenimiento de Áreas Restringidas",
					L"Uso de Maquinaria Pesada", L"Experimentos Científicos Autorizados", L"Visitas Educativas Especiales", L"Traslado de Animales entre Hábitats"
			});
			this->cmbTipoPermiso->Location = System::Drawing::Point(275, 55);
			this->cmbTipoPermiso->Name = L"cmbTipoPermiso";
			this->cmbTipoPermiso->Size = System::Drawing::Size(220, 24);
			this->cmbTipoPermiso->TabIndex = 73;
			// 
			// permisosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(700, 545);
			this->Controls->Add(this->cmbArea);
			this->Controls->Add(this->cmbResponsable);
			this->Controls->Add(this->cmbTipoPermiso);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txtMotivo);
			this->Controls->Add(this->dtpFin);
			this->Controls->Add(this->dtpInicio);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->toolStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"permisosForm";
			this->Text = L"permisosForm";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(cmbTipoPermiso->Text)) 
		{ MessageBox::Show("Seleccione el tipo de permiso."); cmbTipoPermiso->Focus(); return; }
		if (String::IsNullOrWhiteSpace(cmbResponsable->Text)) 
		{ MessageBox::Show("Seleccione el responsable."); cmbResponsable->Focus(); return; }
		if (String::IsNullOrWhiteSpace(cmbArea->Text)) 
		{ MessageBox::Show("Seleccione el área/hábitat."); cmbArea->Focus(); return; }
		if (String::IsNullOrWhiteSpace(txtMotivo->Text)) 
		{ MessageBox::Show("Ingrese el motivo del permiso."); txtMotivo->Focus(); return; }

		Permiso p;
		p.setTipo(toStdString(cmbTipoPermiso->Text));
		p.setResponsable(toStdString(cmbResponsable->Text));
		p.setArea(toStdString(cmbArea->Text));
		p.setFechaInicio(toStdString(dtpInicio->Text));
		p.setFechaFin(toStdString(dtpFin->Text));
		p.setMotivo(toStdString(txtMotivo->Text));

		listaPermisos.push_back(p);
		MessageBox::Show("Permiso agregado");

		cmbTipoPermiso->SelectedIndex = -1;
		cmbResponsable->SelectedIndex = -1;
		cmbArea->SelectedIndex = -1;
		txtMotivo->Clear();
		dtpInicio->Value = DateTime::Now;
		dtpFin->Value = DateTime::Now;
	}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(cmbTipoPermiso->Text)) {
		MessageBox::Show("Seleccione o escriba el tipo de permiso a buscar.");
		cmbTipoPermiso->Focus();
		return;
	}

	std::string tipo = toStdString(cmbTipoPermiso->Text);
	bool encontrado = false;

	for (size_t i = 0; i < listaPermisos.size(); ++i) {
		if (listaPermisos[i].getTipo() == tipo) {
			Permiso& p = listaPermisos[i];

			cmbResponsable->Text = toSystemString(p.getResponsable());
			cmbArea->Text = toSystemString(p.getArea());
			dtpInicio->Text = toSystemString(p.getFechaInicio());
			dtpFin->Text = toSystemString(p.getFechaFin());
			txtMotivo->Text = toSystemString(p.getMotivo());

			encontrado = true;
			break;
		}
	}

	if (!encontrado)
		MessageBox::Show("No se encontró permiso con ese tipo.");
}
private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(cmbTipoPermiso->Text)) {
        MessageBox::Show("Seleccione o escriba el tipo de permiso a editar.");
        cmbTipoPermiso->Focus();
        return;
    }

    std::string tipo = toStdString(cmbTipoPermiso->Text);
    bool encontrado = false;

    for (size_t i = 0; i < listaPermisos.size(); ++i) {
        if (listaPermisos[i].getTipo() == tipo) {

            listaPermisos[i].setResponsable( toStdString(cmbResponsable->Text) );
            listaPermisos[i].setArea(        toStdString(cmbArea->Text) );
            listaPermisos[i].setFechaInicio( toStdString(dtpInicio->Text) );
            listaPermisos[i].setFechaFin(    toStdString(dtpFin->Text) );
            listaPermisos[i].setMotivo(      toStdString(txtMotivo->Text) );

            MessageBox::Show("Permiso actualizado.");
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        MessageBox::Show("No se encontró permiso con ese tipo.");
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(cmbTipoPermiso->Text)) {
		MessageBox::Show("Seleccione o escriba el tipo de permiso a eliminar.");
		cmbTipoPermiso->Focus();
		return;
	}

	std::string tipo = toStdString(cmbTipoPermiso->Text);

	if (MessageBox::Show("¿Desea eliminar el permiso de este tipo?",
		"Confirmar eliminación",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
		return;
	for (size_t i = 0; i < listaPermisos.size(); ++i) {
		if (listaPermisos[i].getTipo() == tipo) {
			listaPermisos.erase(listaPermisos.begin() + i);
			MessageBox::Show("Permiso eliminado.");
			return;
		}
	}

	MessageBox::Show("No se encontró permiso de ese tipo.");
}
private: System::Void btnLista_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();

	for (size_t i = 0; i < listaPermisos.size(); ++i) {
		Permiso& p = listaPermisos[i];
		dataGridView1->Rows->Add(
			toSystemString(p.getTipo()),
			toSystemString(p.getResponsable()),
			toSystemString(p.getArea()),
			toSystemString(p.getFechaInicio()),
			toSystemString(p.getFechaFin())
		);
	}
}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Owner->Show();
	this->Close();

}
};
}
