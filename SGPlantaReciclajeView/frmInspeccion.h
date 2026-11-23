#pragma once
#include "ComboHelper.h"

namespace SGPlantaReciclajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace SGPlantaReciclajeController;
	using namespace SGPlantaReciclajeModel;

	/// <summary>
	/// Resumen de frmInspeccion
	/// </summary>
	public ref class frmInspeccion : public System::Windows::Forms::Form
	{
	public:
		frmInspeccion(void)
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
		~frmInspeccion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvCabecera;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dtpFechaInspeccion;
	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::DataGridView^ dgvInspeccionDetalle;
	private: System::Windows::Forms::TextBox^ txtResultadoGeneral;
	private: System::Windows::Forms::TextBox^ txtInspector;
	private: System::Windows::Forms::TextBox^ txtCodigoLote;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cmbEstacion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colInspeccionId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEstacion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCodigoLote;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colInspector;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFechaInspeccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colResultadoGeneral;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colParametro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colResultadoParametro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNotas;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dgvDetalle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIdDetalle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colParametroDetalle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colResultadoDetalle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNotasDetalle;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgvCabecera = (gcnew System::Windows::Forms::DataGridView());
			this->colInspeccionId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEstacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCodigoLote = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colInspector = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFechaInspeccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colResultadoGeneral = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dtpFechaInspeccion = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->dgvInspeccionDetalle = (gcnew System::Windows::Forms::DataGridView());
			this->colParametro = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colResultadoParametro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNotas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtResultadoGeneral = (gcnew System::Windows::Forms::TextBox());
			this->txtInspector = (gcnew System::Windows::Forms::TextBox());
			this->txtCodigoLote = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbEstacion = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dgvDetalle = (gcnew System::Windows::Forms::DataGridView());
			this->colIdDetalle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colParametroDetalle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colResultadoDetalle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNotasDetalle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCabecera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInspeccionDetalle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetalle))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvCabecera
			// 
			this->dgvCabecera->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvCabecera->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dgvCabecera->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCabecera->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->colInspeccionId,
					this->colEstacion, this->colCodigoLote, this->colInspector, this->colFechaInspeccion, this->colResultadoGeneral
			});
			this->dgvCabecera->Location = System::Drawing::Point(795, 58);
			this->dgvCabecera->Margin = System::Windows::Forms::Padding(4);
			this->dgvCabecera->Name = L"dgvCabecera";
			this->dgvCabecera->RowHeadersWidth = 51;
			this->dgvCabecera->RowTemplate->Height = 24;
			this->dgvCabecera->Size = System::Drawing::Size(972, 309);
			this->dgvCabecera->TabIndex = 37;
			this->dgvCabecera->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmInspeccion::dgvCabecera_CellClick);
			// 
			// colInspeccionId
			// 
			this->colInspeccionId->HeaderText = L"Id";
			this->colInspeccionId->MinimumWidth = 6;
			this->colInspeccionId->Name = L"colInspeccionId";
			this->colInspeccionId->Width = 70;
			// 
			// colEstacion
			// 
			this->colEstacion->HeaderText = L"Estacion";
			this->colEstacion->Name = L"colEstacion";
			// 
			// colCodigoLote
			// 
			this->colCodigoLote->HeaderText = L"CodigoLote";
			this->colCodigoLote->MinimumWidth = 6;
			this->colCodigoLote->Name = L"colCodigoLote";
			this->colCodigoLote->Width = 150;
			// 
			// colInspector
			// 
			this->colInspector->HeaderText = L"Inspector";
			this->colInspector->MinimumWidth = 6;
			this->colInspector->Name = L"colInspector";
			this->colInspector->Width = 250;
			// 
			// colFechaInspeccion
			// 
			this->colFechaInspeccion->HeaderText = L"Fec.Inspeccion";
			this->colFechaInspeccion->MinimumWidth = 6;
			this->colFechaInspeccion->Name = L"colFechaInspeccion";
			this->colFechaInspeccion->Width = 160;
			// 
			// colResultadoGeneral
			// 
			this->colResultadoGeneral->HeaderText = L"ResultadoGeneral";
			this->colResultadoGeneral->Name = L"colResultadoGeneral";
			this->colResultadoGeneral->Width = 180;
			// 
			// dtpFechaInspeccion
			// 
			this->dtpFechaInspeccion->CalendarMonthBackground = System::Drawing::SystemColors::Info;
			this->dtpFechaInspeccion->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFechaInspeccion->Location = System::Drawing::Point(240, 179);
			this->dtpFechaInspeccion->Margin = System::Windows::Forms::Padding(5);
			this->dtpFechaInspeccion->MinDate = System::DateTime(2026, 1, 1, 0, 0, 0, 0);
			this->dtpFechaInspeccion->Name = L"dtpFechaInspeccion";
			this->dtpFechaInspeccion->Size = System::Drawing::Size(140, 29);
			this->dtpFechaInspeccion->TabIndex = 36;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnRegistrar->ForeColor = System::Drawing::Color::White;
			this->btnRegistrar->Location = System::Drawing::Point(219, 556);
			this->btnRegistrar->Margin = System::Windows::Forms::Padding(7);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(292, 61);
			this->btnRegistrar->TabIndex = 35;
			this->btnRegistrar->Text = L"Registrar inspección";
			this->btnRegistrar->UseVisualStyleBackColor = false;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &frmInspeccion::btnRegistrar_Click);
			// 
			// dgvInspeccionDetalle
			// 
			this->dgvInspeccionDetalle->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dgvInspeccionDetalle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInspeccionDetalle->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colParametro,
					this->colResultadoParametro, this->colNotas
			});
			this->dgvInspeccionDetalle->Location = System::Drawing::Point(21, 276);
			this->dgvInspeccionDetalle->Margin = System::Windows::Forms::Padding(4);
			this->dgvInspeccionDetalle->Name = L"dgvInspeccionDetalle";
			this->dgvInspeccionDetalle->RowHeadersVisible = false;
			this->dgvInspeccionDetalle->RowHeadersWidth = 82;
			this->dgvInspeccionDetalle->RowTemplate->Height = 28;
			this->dgvInspeccionDetalle->Size = System::Drawing::Size(766, 269);
			this->dgvInspeccionDetalle->TabIndex = 34;
			// 
			// colParametro
			// 
			this->colParametro->HeaderText = L"Parámetro evaluado";
			this->colParametro->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Pureza del Material", L"Contaminación Cruzada",
					L"Temperatura Operativa", L"Presión de Trabajo", L"Alineación", L"Acabado Superficial", L"Funcionalidad Eléctrica"
			});
			this->colParametro->MinimumWidth = 10;
			this->colParametro->Name = L"colParametro";
			this->colParametro->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->colParametro->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->colParametro->Width = 250;
			// 
			// colResultadoParametro
			// 
			this->colResultadoParametro->HeaderText = L"Resultado del parámetro";
			this->colResultadoParametro->MaxInputLength = 10;
			this->colResultadoParametro->MinimumWidth = 10;
			this->colResultadoParametro->Name = L"colResultadoParametro";
			this->colResultadoParametro->Width = 250;
			// 
			// colNotas
			// 
			this->colNotas->HeaderText = L"Observaciones";
			this->colNotas->MaxInputLength = 200;
			this->colNotas->MinimumWidth = 10;
			this->colNotas->Name = L"colNotas";
			this->colNotas->Width = 250;
			// 
			// txtResultadoGeneral
			// 
			this->txtResultadoGeneral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtResultadoGeneral->Location = System::Drawing::Point(240, 228);
			this->txtResultadoGeneral->Margin = System::Windows::Forms::Padding(4);
			this->txtResultadoGeneral->MaxLength = 20;
			this->txtResultadoGeneral->Name = L"txtResultadoGeneral";
			this->txtResultadoGeneral->Size = System::Drawing::Size(140, 29);
			this->txtResultadoGeneral->TabIndex = 33;
			// 
			// txtInspector
			// 
			this->txtInspector->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtInspector->Location = System::Drawing::Point(240, 129);
			this->txtInspector->Margin = System::Windows::Forms::Padding(4);
			this->txtInspector->MaxLength = 100;
			this->txtInspector->Name = L"txtInspector";
			this->txtInspector->Size = System::Drawing::Size(369, 29);
			this->txtInspector->TabIndex = 32;
			// 
			// txtCodigoLote
			// 
			this->txtCodigoLote->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtCodigoLote->Location = System::Drawing::Point(240, 78);
			this->txtCodigoLote->Margin = System::Windows::Forms::Padding(4);
			this->txtCodigoLote->MaxLength = 50;
			this->txtCodigoLote->Name = L"txtCodigoLote";
			this->txtCodigoLote->Size = System::Drawing::Size(262, 29);
			this->txtCodigoLote->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 231);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 24);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Resultado general";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 183);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 24);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Fecha de inspección";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 134);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 24);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Inspector responsable";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 81);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(175, 24);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Lote inspeccionado";
			// 
			// cmbEstacion
			// 
			this->cmbEstacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cmbEstacion->FormattingEnabled = true;
			this->cmbEstacion->Location = System::Drawing::Point(240, 24);
			this->cmbEstacion->Name = L"cmbEstacion";
			this->cmbEstacion->Size = System::Drawing::Size(502, 32);
			this->cmbEstacion->TabIndex = 38;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 32);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 24);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Estación clasificadora:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(791, 24);
			this->label6->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(524, 24);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Cabecera, dar clic a una fila para recargar el detalle asociado:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(794, 373);
			this->label7->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 24);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Detalle:";
			// 
			// dgvDetalle
			// 
			this->dgvDetalle->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dgvDetalle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDetalle->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->colIdDetalle,
					this->colParametroDetalle, this->colResultadoDetalle, this->colNotasDetalle
			});
			this->dgvDetalle->Location = System::Drawing::Point(798, 404);
			this->dgvDetalle->Margin = System::Windows::Forms::Padding(7);
			this->dgvDetalle->Name = L"dgvDetalle";
			this->dgvDetalle->RowHeadersVisible = false;
			this->dgvDetalle->RowHeadersWidth = 82;
			this->dgvDetalle->RowTemplate->Height = 28;
			this->dgvDetalle->Size = System::Drawing::Size(966, 213);
			this->dgvDetalle->TabIndex = 41;
			// 
			// colIdDetalle
			// 
			this->colIdDetalle->HeaderText = L"Id";
			this->colIdDetalle->Name = L"colIdDetalle";
			// 
			// colParametroDetalle
			// 
			this->colParametroDetalle->HeaderText = L"Parametro";
			this->colParametroDetalle->MinimumWidth = 10;
			this->colParametroDetalle->Name = L"colParametroDetalle";
			this->colParametroDetalle->Width = 600;
			// 
			// colResultadoDetalle
			// 
			this->colResultadoDetalle->HeaderText = L"Resultado";
			this->colResultadoDetalle->Name = L"colResultadoDetalle";
			this->colResultadoDetalle->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->colResultadoDetalle->Width = 150;
			// 
			// colNotasDetalle
			// 
			this->colNotasDetalle->HeaderText = L"Notas";
			this->colNotasDetalle->Name = L"colNotasDetalle";
			// 
			// frmInspeccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->ClientSize = System::Drawing::Size(1780, 654);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dgvDetalle);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cmbEstacion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvCabecera);
			this->Controls->Add(this->dtpFechaInspeccion);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->dgvInspeccionDetalle);
			this->Controls->Add(this->txtResultadoGeneral);
			this->Controls->Add(this->txtInspector);
			this->Controls->Add(this->txtCodigoLote);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"frmInspeccion";
			this->Text = L"Registro de Inspecciones";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmInspeccion::frmInspeccion_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmInspeccion::frmInspeccion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCabecera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInspeccionDetalle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetalle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*************************************************************************************/
	// Paso 1. Se implementara el hilo
	Thread^ miHilo;				// Hilo para actualizar la grilla en segundo plano
	delegate void MyDelegate(); // Delegado sin parámetros
	bool ejecutandoHilo;		// Bandera para controlar la ejecución del hilo

	private: void ActualizarInspeccionesEnSegundoPlano() {
		// Este método se ejecutará en un hilo separado y actualizará la grilla cada 10 segundos
		while (ejecutandoHilo) {
			try {
				System::Threading::Thread::Sleep(10000); // Esperar 10 segundos

				// Verificar nuevamente por si se cerró el form mientras dormía
				if (ejecutandoHilo) {
					// Invocar al hilo principal para actualizar la UI
					Invoke(gcnew MyDelegate(this, &frmInspeccion::CargarInspecciones));
				}
			}
			catch (Exception^) {
				// Si el formulario se está cerrando, el Invoke puede fallar. Ignorar.
				break;
			}
		}
	}
	
	// Paso 2. Se implementara el método para cargar las inspecciones en el DataGridView
	private: void CargarInspecciones() {
		try {
			InspeccionController^ controller = gcnew InspeccionController();
			List<InspeccionCabecera^>^ lista = controller->ListarInspecciones();

			// Guardar la posición actual del scroll para no interrumpir la lectura del usuario
			int primerFilaVisible = -1;
			if (dgvCabecera->FirstDisplayedScrollingRowIndex >= 0) {
				primerFilaVisible = dgvCabecera->FirstDisplayedScrollingRowIndex;
			}

			dgvCabecera->Rows->Clear();
			dgvCabecera->AutoGenerateColumns = false;

			for each (InspeccionCabecera ^ cab in lista) {
				array<String^>^ fila = gcnew array<String^>(6);
				fila[0] = cab->getInspeccionId().ToString();
				int id = cab->getEstacionId();
				EstacionController^ controller = gcnew EstacionController();
				Estacion^ estacion = controller->ConsultarEstacion(id);
				fila[1] = estacion->getAlias(); 
				fila[2] = cab->getCodigoLote();
				fila[3] = cab->getInspector();
				fila[4] = cab->getFechaInspeccion().ToString("dd/MM/yyyy HH:mm");
				fila[5] = cab->getResultadoGeneral();

				dgvCabecera->Rows->Add(fila);
			}

			// Restaurar la posición del scroll si es posible
			if (primerFilaVisible >= 0 && primerFilaVisible < dgvCabecera->Rows->Count) {
				dgvCabecera->FirstDisplayedScrollingRowIndex = primerFilaVisible;
			}
		}
		catch (Exception^ ex) {
			// Es mejor no mostrar un MessageBox aquí si se ejecuta cada 5 segs, 
			// podría llenar la pantalla de errores si la BD se cae. Solo imprimir en consola o ignorar.
			Console::WriteLine("Error al cargar inspecciones: " + ex->Message);
		}
	}
	/*************************************************************************************/

	private: System::Void frmInspeccion_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dtpFechaInspeccion->Value = DateTime::Now;
		try {
			// 1. Poblar el ComboBox de Estaciones llamando al Helper
			ComboHelper::LlenarComboEstaciones(cmbEstacion, 0);

			// 2. Configurar el DataGridView (esto se queda en la vista)
			dgvCabecera->AllowUserToAddRows = true;
			dgvCabecera->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

			/*************************************************************************************************/
			// Paso 3. Configurar e iniciar el hilo secundario
			ejecutandoHilo = true;	// Bandera para controlar la ejecución del hilo
			// Crear el hilo y asignarle el método que se ejecutará en segundo plano
			miHilo = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(this, &frmInspeccion::ActualizarInspeccionesEnSegundoPlano));
			miHilo->IsBackground = true; // Se cierra automáticamente al cerrar la app
			miHilo->Start(); // Iniciar el hilo
			/*************************************************************************************************/
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al cargar el formulario: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1. VALIDACIONES BÁSICAS (Cabecera)
		if (cmbEstacion->SelectedIndex == -1) {
			MessageBox::Show("Debe seleccionar una estación clasificadora.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (String::IsNullOrWhiteSpace(txtCodigoLote->Text)) {
			MessageBox::Show("Debe ingresar el código de lote.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (String::IsNullOrWhiteSpace(txtInspector->Text)) {
			MessageBox::Show("Debe ingresar el nombre del inspector.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (String::IsNullOrWhiteSpace(txtResultadoGeneral->Text)) {
			MessageBox::Show("Debe ingresar el resultado general (Aprobado / Observado).", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Validar que haya al menos un detalle en la grilla
		if (dgvInspeccionDetalle->Rows->Count <= 1 && dgvInspeccionDetalle->Rows[0]->IsNewRow) {
			MessageBox::Show("Debe agregar al menos un parámetro de inspección en el detalle.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		try {
			// 2. CREAR LA CABECERA
			int idEstacion = Convert::ToInt32(cmbEstacion->SelectedValue);
			String^ codigoLote = txtCodigoLote->Text->Trim();
			String^ inspector = txtInspector->Text->Trim();
			String^ resultadoGeneral = txtResultadoGeneral->Text->Trim();

			InspeccionCabecera^ cabecera = gcnew InspeccionCabecera(codigoLote, idEstacion, inspector, resultadoGeneral);
			cabecera->setFechaInspeccion(dtpFechaInspeccion->Value); // Asignar la fecha del DateTimePicker

			// 3. RECORRER EL DATAGRIDVIEW DE DETALLES
			for (int i = 0; i < dgvInspeccionDetalle->Rows->Count; i++) {
				DataGridViewRow^ fila = dgvInspeccionDetalle->Rows[i];

				// Ignorar la fila "nueva" vacía del DataGridView
				if (fila->IsNewRow) continue;

				// Obtener los valores de manera segura
				String^ parametro = (fila->Cells[0]->Value != nullptr) ? fila->Cells[0]->Value->ToString() : "";
				String^ resultadoParam = (fila->Cells[1]->Value != nullptr) ? fila->Cells[1]->Value->ToString() : "";
				String^ notas = (fila->Cells[2]->Value != nullptr) ? fila->Cells[2]->Value->ToString() : "";

				// Validar que el parámetro y el resultado no estén vacíos
				if (String::IsNullOrWhiteSpace(parametro) || String::IsNullOrWhiteSpace(resultadoParam)) {
					MessageBox::Show("El parámetro y el resultado son obligatorios en la fila " + (i + 1) + ".", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}

				// Crear el detalle y agregarlo a la cabecera
				InspeccionDetalle^ detalle = gcnew InspeccionDetalle(parametro, resultadoParam, notas);
				cabecera->agregarDetalle(detalle);
			}

			// 4. LLAMAR AL CONTROLADOR (Ejecuta la transacción)
			InspeccionController^ controller = gcnew InspeccionController();
			String^ resultado = controller->RegistrarInspeccionCompleta(cabecera);

			// 5. MOSTRAR RESULTADO
			if (resultado == "") {
				MessageBox::Show("Inspección registrada exitosamente con ID: " + cabecera->getInspeccionId().ToString(), "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Limpiar el formulario para un nuevo registro
				LimpiarFormulario();

				// Opcional: Recargar la grilla de listado (dgvCabecera) si es que ya implementaste ese método
				// CargarInspecciones(); 
			}
			else {
				MessageBox::Show(resultado, "Error al guardar", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ocurrió un error inesperado: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void LimpiarFormulario() {
		// Limpiar Controles de Cabecera
		cmbEstacion->SelectedIndex = -1;
		txtCodigoLote->Clear();
		txtInspector->Clear();
		txtResultadoGeneral->Clear();
		dtpFechaInspeccion->Value = DateTime::Now;

		// Limpiar Grilla de Detalles
		dgvInspeccionDetalle->Rows->Clear();

		// Agregar una fila vacía para que el usuario pueda empezar a escribir
		dgvInspeccionDetalle->Rows->Add();

		// Poner el foco en el primer control
		txtCodigoLote->Focus();
	}

	/********************************************************************************************************************/
	// Paso 4. Detener el hilo cuando se cierre el formulario
	private: System::Void frmInspeccion_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		ejecutandoHilo = false; // Esto hará que el hilo termine su bucle y salga
		if (miHilo != nullptr && miHilo->IsAlive) {
			miHilo->Join(); // Esperar a que el hilo termine antes de cerrar el formulario
		}
	}
	private: System::Void dgvCabecera_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Validar que se haya hecho clic en una fila de datos (no en los encabezados)
		if (e->RowIndex >= 0) {
			try {
				// 1. Obtener el ID de la inspección de la primera celda (columna "Id")
				if (dgvCabecera->Rows[e->RowIndex]->Cells[0]->Value == nullptr) return;

				int idInspeccion = Convert::ToInt32(dgvCabecera->Rows[e->RowIndex]->Cells[0]->Value);

				// 2. Consultar los detalles a la base de datos a través del Controlador
				InspeccionController^ controller = gcnew InspeccionController();
				List<InspeccionDetalle^>^ listaDetalles = controller->ListarDetalles(idInspeccion);

				// 3. Limpiar el DataGridView de detalles antes de llenarlo
				dgvDetalle->Rows->Clear();
				dgvDetalle->AutoGenerateColumns = false; // Evitar columnas automáticas

				// 4. Llenar la grilla de detalles
				for each (InspeccionDetalle ^ det in listaDetalles) {
					// Creamos un arreglo con los datos en el mismo orden de las columnas
					array<Object^>^ fila = gcnew array<Object^>(4);
					fila[0] = det->getInspeccionDetalleId();
					fila[1] = det->getParametro();
					fila[2] = det->getResultadoParametro();
					fila[3] = det->getNotas();

					dgvDetalle->Rows->Add(fila);
				}

				// Opcional: Ajustar el ancho de las columnas al contenido
				dgvDetalle->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al cargar los detalles de la inspección: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
};
}