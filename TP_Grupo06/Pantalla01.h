#pragma once
#include "CJuego.h"
//#include "CGraficos.h"
#include <vcclr.h>
//#include "Inicio.h"
#include "CGraficoENEM.h"

namespace TPGrupo06 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pantalla01
	/// </summary>
	public ref class Pantalla01 : public System::Windows::Forms::Form
	{
	public:
		Pantalla01(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			juego = new CJuego();
			tipo = 0;

			CJugador* j1, * j2;
			CEcuacion* Ecuacion_j1;
			CEcuacion* Ecuacion_j2;
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Pantalla01()
		{
			if (components)
			{
				delete components;
			}
		}

		//Mixta

	private: System::Windows::Forms::Panel^ panelCabecera;
	protected:
	private: System::Windows::Forms::Button^ btnRestaurar;
	private: System::Windows::Forms::Button^ btnMinimizar;
	private: System::Windows::Forms::Button^ btnMaximizar;
	private: System::Windows::Forms::Button^ btnCerrar;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


		//Declaracion de CJuego // KHT
		CJuego* juego;
		int tipo;
	private: System::Windows::Forms::ListView^ lstTabla;
	private: System::Windows::Forms::Label^ lblTipoEstrategia;

	private: System::Windows::Forms::Label^ lbl1menosQ;
	private: System::Windows::Forms::Label^ lblQ;
	private: System::Windows::Forms::Label^ lbl1menosP;
	private: System::Windows::Forms::Label^ lblP;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnCargar;

		   CJugador* j1, * j2;
		   CEcuacion* Ecuacion_j1;
		   CEcuacion* Ecuacion_j2;
	private: System::Windows::Forms::Label^ lblResultado;
	private: System::Windows::Forms::Button^ btnGrafico;
	private: System::Windows::Forms::GroupBox^ grpBoxENEM;


	private: System::Windows::Forms::Label^ lblFila3Jugador2;
	private: System::Windows::Forms::Label^ lblFila2Jugador2;
	private: System::Windows::Forms::Label^ lblFila1Jugador2;
	private: System::Windows::Forms::Label^ lblFila3Jugador1;
	private: System::Windows::Forms::Label^ lblFila2Jugador1;
	private: System::Windows::Forms::Label^ lblFila1Jugador1;


	private: System::Windows::Forms::Label^ lblJugador1;
	private: System::Windows::Forms::Label^ lblJugador2;
	private: System::Windows::Forms::Label^ lblEcuacionJugador2;
	private: System::Windows::Forms::Label^ lblEcuacionJugador1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;




		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Método necesario para admitir el Diseñador. No se puede modificar
		   /// el contenido de este método con el editor de código.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pantalla01::typeid));
			   this->panelCabecera = (gcnew System::Windows::Forms::Panel());
			   this->btnRestaurar = (gcnew System::Windows::Forms::Button());
			   this->btnMinimizar = (gcnew System::Windows::Forms::Button());
			   this->btnMaximizar = (gcnew System::Windows::Forms::Button());
			   this->btnCerrar = (gcnew System::Windows::Forms::Button());
			   this->lstTabla = (gcnew System::Windows::Forms::ListView());
			   this->lblTipoEstrategia = (gcnew System::Windows::Forms::Label());
			   this->lbl1menosQ = (gcnew System::Windows::Forms::Label());
			   this->lblQ = (gcnew System::Windows::Forms::Label());
			   this->lbl1menosP = (gcnew System::Windows::Forms::Label());
			   this->lblP = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->btnCargar = (gcnew System::Windows::Forms::Button());
			   this->lblResultado = (gcnew System::Windows::Forms::Label());
			   this->btnGrafico = (gcnew System::Windows::Forms::Button());
			   this->grpBoxENEM = (gcnew System::Windows::Forms::GroupBox());
			   this->lblFila3Jugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblFila2Jugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblFila1Jugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblFila3Jugador1 = (gcnew System::Windows::Forms::Label());
			   this->lblFila2Jugador1 = (gcnew System::Windows::Forms::Label());
			   this->lblFila1Jugador1 = (gcnew System::Windows::Forms::Label());
			   this->lblJugador1 = (gcnew System::Windows::Forms::Label());
			   this->lblJugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblEcuacionJugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblEcuacionJugador1 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->panelCabecera->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->grpBoxENEM->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // panelCabecera
			   // 
			   this->panelCabecera->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->panelCabecera->Controls->Add(this->btnRestaurar);
			   this->panelCabecera->Controls->Add(this->btnMinimizar);
			   this->panelCabecera->Controls->Add(this->btnMaximizar);
			   this->panelCabecera->Controls->Add(this->btnCerrar);
			   this->panelCabecera->Dock = System::Windows::Forms::DockStyle::Top;
			   this->panelCabecera->Location = System::Drawing::Point(0, 0);
			   this->panelCabecera->Name = L"panelCabecera";
			   this->panelCabecera->Size = System::Drawing::Size(482, 40);
			   this->panelCabecera->TabIndex = 1;
			   // 
			   // btnRestaurar
			   // 
			   this->btnRestaurar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->btnRestaurar->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->btnRestaurar->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnRestaurar->FlatAppearance->BorderSize = 0;
			   this->btnRestaurar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			   this->btnRestaurar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			   this->btnRestaurar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnRestaurar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRestaurar.Image")));
			   this->btnRestaurar->Location = System::Drawing::Point(396, 0);
			   this->btnRestaurar->Name = L"btnRestaurar";
			   this->btnRestaurar->Size = System::Drawing::Size(40, 40);
			   this->btnRestaurar->TabIndex = 4;
			   this->btnRestaurar->UseVisualStyleBackColor = false;
			   this->btnRestaurar->Visible = false;
			   this->btnRestaurar->Click += gcnew System::EventHandler(this, &Pantalla01::btnRestaurar_Click);
			   // 
			   // btnMinimizar
			   // 
			   this->btnMinimizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->btnMinimizar->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnMinimizar->FlatAppearance->BorderSize = 0;
			   this->btnMinimizar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			   this->btnMinimizar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			   this->btnMinimizar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimizar.Image")));
			   this->btnMinimizar->Location = System::Drawing::Point(350, 0);
			   this->btnMinimizar->Name = L"btnMinimizar";
			   this->btnMinimizar->Size = System::Drawing::Size(40, 40);
			   this->btnMinimizar->TabIndex = 3;
			   this->btnMinimizar->UseVisualStyleBackColor = true;
			   this->btnMinimizar->Click += gcnew System::EventHandler(this, &Pantalla01::btnMinimizar_Click);
			   // 
			   // btnMaximizar
			   // 
			   this->btnMaximizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->btnMaximizar->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnMaximizar->FlatAppearance->BorderSize = 0;
			   this->btnMaximizar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			   this->btnMaximizar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			   this->btnMaximizar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnMaximizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaximizar.Image")));
			   this->btnMaximizar->Location = System::Drawing::Point(396, 0);
			   this->btnMaximizar->Name = L"btnMaximizar";
			   this->btnMaximizar->Size = System::Drawing::Size(40, 40);
			   this->btnMaximizar->TabIndex = 2;
			   this->btnMaximizar->UseVisualStyleBackColor = true;
			   this->btnMaximizar->Click += gcnew System::EventHandler(this, &Pantalla01::btnMaximizar_Click);
			   // 
			   // btnCerrar
			   // 
			   this->btnCerrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->btnCerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnCerrar->FlatAppearance->BorderSize = 0;
			   this->btnCerrar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			   this->btnCerrar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			   this->btnCerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnCerrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCerrar.Image")));
			   this->btnCerrar->Location = System::Drawing::Point(442, 0);
			   this->btnCerrar->Name = L"btnCerrar";
			   this->btnCerrar->Size = System::Drawing::Size(40, 40);
			   this->btnCerrar->TabIndex = 1;
			   this->btnCerrar->UseVisualStyleBackColor = true;
			   this->btnCerrar->Click += gcnew System::EventHandler(this, &Pantalla01::btnCerrar_Click);
			   // 
			   // lstTabla
			   // 
			   this->lstTabla->HideSelection = false;
			   this->lstTabla->Location = System::Drawing::Point(127, 175);
			   this->lstTabla->Name = L"lstTabla";
			   this->lstTabla->Size = System::Drawing::Size(248, 113);
			   this->lstTabla->TabIndex = 3;
			   this->lstTabla->UseCompatibleStateImageBehavior = false;
			   // 
			   // lblTipoEstrategia
			   // 
			   this->lblTipoEstrategia->AutoSize = true;
			   this->lblTipoEstrategia->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblTipoEstrategia->Location = System::Drawing::Point(59, 327);
			   this->lblTipoEstrategia->Name = L"lblTipoEstrategia";
			   this->lblTipoEstrategia->Size = System::Drawing::Size(106, 16);
			   this->lblTipoEstrategia->TabIndex = 4;
			   this->lblTipoEstrategia->Text = L"lblTipoEstrategia";
			   // 
			   // lbl1menosQ
			   // 
			   this->lbl1menosQ->AutoSize = true;
			   this->lbl1menosQ->Location = System::Drawing::Point(292, 152);
			   this->lbl1menosQ->Name = L"lbl1menosQ";
			   this->lbl1menosQ->Size = System::Drawing::Size(28, 13);
			   this->lbl1menosQ->TabIndex = 6;
			   this->lbl1menosQ->Text = L"1 - q";
			   this->lbl1menosQ->Visible = false;
			   // 
			   // lblQ
			   // 
			   this->lblQ->AutoSize = true;
			   this->lblQ->Location = System::Drawing::Point(190, 152);
			   this->lblQ->Name = L"lblQ";
			   this->lblQ->Size = System::Drawing::Size(13, 13);
			   this->lblQ->TabIndex = 7;
			   this->lblQ->Text = L"q";
			   this->lblQ->Visible = false;
			   // 
			   // lbl1menosP
			   // 
			   this->lbl1menosP->AutoSize = true;
			   this->lbl1menosP->Location = System::Drawing::Point(81, 233);
			   this->lbl1menosP->Name = L"lbl1menosP";
			   this->lbl1menosP->Size = System::Drawing::Size(28, 13);
			   this->lbl1menosP->TabIndex = 8;
			   this->lbl1menosP->Text = L"1 - p";
			   this->lbl1menosP->Visible = false;
			   // 
			   // lblP
			   // 
			   this->lblP->AutoSize = true;
			   this->lblP->Location = System::Drawing::Point(90, 190);
			   this->lblP->Name = L"lblP";
			   this->lblP->Size = System::Drawing::Size(13, 13);
			   this->lblP->TabIndex = 9;
			   this->lblP->Text = L"p";
			   this->lblP->Visible = false;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->label1->Location = System::Drawing::Point(167, 62);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(147, 25);
			   this->label1->TabIndex = 11;
			   this->label1->Text = L"Teoría de juegos";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::Maroon;
			   this->label2->Location = System::Drawing::Point(175, 95);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(124, 23);
			   this->label2->TabIndex = 12;
			   this->label2->Text = L"Equilibrio de Nash";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			   this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->pictureBox1->Location = System::Drawing::Point(347, 62);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(89, 85);
			   this->pictureBox1->TabIndex = 13;
			   this->pictureBox1->TabStop = false;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(41, 302);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(90, 19);
			   this->label3->TabIndex = 14;
			   this->label3->Text = L"Resultado: ";
			   // 
			   // btnCargar
			   // 
			   this->btnCargar->BackColor = System::Drawing::Color::Brown;
			   this->btnCargar->FlatAppearance->BorderSize = 0;
			   this->btnCargar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Firebrick;
			   this->btnCargar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			   this->btnCargar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnCargar->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnCargar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->btnCargar->Location = System::Drawing::Point(326, 327);
			   this->btnCargar->Name = L"btnCargar";
			   this->btnCargar->Size = System::Drawing::Size(71, 38);
			   this->btnCargar->TabIndex = 15;
			   this->btnCargar->Text = L"Volver a Cargar";
			   this->btnCargar->UseVisualStyleBackColor = false;
			   this->btnCargar->Click += gcnew System::EventHandler(this, &Pantalla01::btnMenu_Click);
			   // 
			   // lblResultado
			   // 
			   this->lblResultado->AutoSize = true;
			   this->lblResultado->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblResultado->Location = System::Drawing::Point(59, 354);
			   this->lblResultado->Name = L"lblResultado";
			   this->lblResultado->Size = System::Drawing::Size(81, 16);
			   this->lblResultado->TabIndex = 5;
			   this->lblResultado->Text = L"lblResultado";
			   // 
			   // btnGrafico
			   // 
			   this->btnGrafico->BackColor = System::Drawing::Color::Brown;
			   this->btnGrafico->FlatAppearance->BorderSize = 0;
			   this->btnGrafico->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Firebrick;
			   this->btnGrafico->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			   this->btnGrafico->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnGrafico->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnGrafico->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->btnGrafico->Location = System::Drawing::Point(158, 109);
			   this->btnGrafico->Name = L"btnGrafico";
			   this->btnGrafico->Size = System::Drawing::Size(70, 25);
			   this->btnGrafico->TabIndex = 10;
			   this->btnGrafico->Text = L"Ver Gráfico";
			   this->btnGrafico->UseVisualStyleBackColor = false;
			   this->btnGrafico->Visible = false;
			   this->btnGrafico->Click += gcnew System::EventHandler(this, &Pantalla01::btnGrafico_Click_1);
			   // 
			   // grpBoxENEM
			   // 
			   this->grpBoxENEM->Controls->Add(this->lblFila3Jugador2);
			   this->grpBoxENEM->Controls->Add(this->lblFila2Jugador2);
			   this->grpBoxENEM->Controls->Add(this->lblFila1Jugador2);
			   this->grpBoxENEM->Controls->Add(this->lblFila3Jugador1);
			   this->grpBoxENEM->Controls->Add(this->lblFila2Jugador1);
			   this->grpBoxENEM->Controls->Add(this->lblFila1Jugador1);
			   this->grpBoxENEM->Controls->Add(this->btnGrafico);
			   this->grpBoxENEM->Controls->Add(this->lblJugador1);
			   this->grpBoxENEM->Controls->Add(this->lblJugador2);
			   this->grpBoxENEM->Controls->Add(this->lblEcuacionJugador2);
			   this->grpBoxENEM->Controls->Add(this->lblEcuacionJugador1);
			   this->grpBoxENEM->Location = System::Drawing::Point(45, 371);
			   this->grpBoxENEM->Name = L"grpBoxENEM";
			   this->grpBoxENEM->Size = System::Drawing::Size(386, 140);
			   this->grpBoxENEM->TabIndex = 16;
			   this->grpBoxENEM->TabStop = false;
			   this->grpBoxENEM->Text = L"...";
			   this->grpBoxENEM->Visible = false;
			   this->grpBoxENEM->Enter += gcnew System::EventHandler(this, &Pantalla01::groupBox1_Enter);
			   // 
			   // lblFila3Jugador2
			   // 
			   this->lblFila3Jugador2->AutoSize = true;
			   this->lblFila3Jugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFila3Jugador2->Location = System::Drawing::Point(258, 85);
			   this->lblFila3Jugador2->Name = L"lblFila3Jugador2";
			   this->lblFila3Jugador2->Size = System::Drawing::Size(82, 14);
			   this->lblFila3Jugador2->TabIndex = 23;
			   this->lblFila3Jugador2->Text = L"Resultado J1 3";
			   // 
			   // lblFila2Jugador2
			   // 
			   this->lblFila2Jugador2->AutoSize = true;
			   this->lblFila2Jugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFila2Jugador2->Location = System::Drawing::Point(257, 66);
			   this->lblFila2Jugador2->Name = L"lblFila2Jugador2";
			   this->lblFila2Jugador2->Size = System::Drawing::Size(82, 14);
			   this->lblFila2Jugador2->TabIndex = 22;
			   this->lblFila2Jugador2->Text = L"Resultado J1 2";
			   // 
			   // lblFila1Jugador2
			   // 
			   this->lblFila1Jugador2->AutoSize = true;
			   this->lblFila1Jugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFila1Jugador2->Location = System::Drawing::Point(257, 44);
			   this->lblFila1Jugador2->Name = L"lblFila1Jugador2";
			   this->lblFila1Jugador2->Size = System::Drawing::Size(82, 14);
			   this->lblFila1Jugador2->TabIndex = 21;
			   this->lblFila1Jugador2->Text = L"Resultado J2 1";
			   // 
			   // lblFila3Jugador1
			   // 
			   this->lblFila3Jugador1->AutoSize = true;
			   this->lblFila3Jugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFila3Jugador1->Location = System::Drawing::Point(23, 88);
			   this->lblFila3Jugador1->Name = L"lblFila3Jugador1";
			   this->lblFila3Jugador1->Size = System::Drawing::Size(82, 14);
			   this->lblFila3Jugador1->TabIndex = 20;
			   this->lblFila3Jugador1->Text = L"Resultado J1 3";
			   // 
			   // lblFila2Jugador1
			   // 
			   this->lblFila2Jugador1->AutoSize = true;
			   this->lblFila2Jugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFila2Jugador1->Location = System::Drawing::Point(23, 66);
			   this->lblFila2Jugador1->Name = L"lblFila2Jugador1";
			   this->lblFila2Jugador1->Size = System::Drawing::Size(82, 14);
			   this->lblFila2Jugador1->TabIndex = 19;
			   this->lblFila2Jugador1->Text = L"Resultado J1 2";
			   // 
			   // lblFila1Jugador1
			   // 
			   this->lblFila1Jugador1->AutoSize = true;
			   this->lblFila1Jugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFila1Jugador1->Location = System::Drawing::Point(23, 44);
			   this->lblFila1Jugador1->Name = L"lblFila1Jugador1";
			   this->lblFila1Jugador1->Size = System::Drawing::Size(80, 14);
			   this->lblFila1Jugador1->TabIndex = 18;
			   this->lblFila1Jugador1->Text = L"Resultado J1 1";
			   // 
			   // lblJugador1
			   // 
			   this->lblJugador1->AutoSize = true;
			   this->lblJugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblJugador1->ForeColor = System::Drawing::Color::Green;
			   this->lblJugador1->Location = System::Drawing::Point(23, 16);
			   this->lblJugador1->Name = L"lblJugador1";
			   this->lblJugador1->Size = System::Drawing::Size(23, 14);
			   this->lblJugador1->TabIndex = 15;
			   this->lblJugador1->Text = L"J1 :";
			   // 
			   // lblJugador2
			   // 
			   this->lblJugador2->AutoSize = true;
			   this->lblJugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblJugador2->ForeColor = System::Drawing::Color::Navy;
			   this->lblJugador2->Location = System::Drawing::Point(257, 16);
			   this->lblJugador2->Name = L"lblJugador2";
			   this->lblJugador2->Size = System::Drawing::Size(25, 14);
			   this->lblJugador2->TabIndex = 14;
			   this->lblJugador2->Text = L"J2 :";
			   // 
			   // lblEcuacionJugador2
			   // 
			   this->lblEcuacionJugador2->AutoSize = true;
			   this->lblEcuacionJugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblEcuacionJugador2->Location = System::Drawing::Point(288, 16);
			   this->lblEcuacionJugador2->Name = L"lblEcuacionJugador2";
			   this->lblEcuacionJugador2->Size = System::Drawing::Size(19, 14);
			   this->lblEcuacionJugador2->TabIndex = 13;
			   this->lblEcuacionJugador2->Text = L"J2";
			   // 
			   // lblEcuacionJugador1
			   // 
			   this->lblEcuacionJugador1->AutoSize = true;
			   this->lblEcuacionJugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblEcuacionJugador1->Location = System::Drawing::Point(51, 16);
			   this->lblEcuacionJugador1->Name = L"lblEcuacionJugador1";
			   this->lblEcuacionJugador1->Size = System::Drawing::Size(17, 14);
			   this->lblEcuacionJugador1->TabIndex = 12;
			   this->lblEcuacionJugador1->Text = L"J1";
			   this->lblEcuacionJugador1->Click += gcnew System::EventHandler(this, &Pantalla01::lblEcuacionJugador1_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(225, 132);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(63, 16);
			   this->label6->TabIndex = 17;
			   this->label6->Text = L"Jugador 1";
			   this->label6->Click += gcnew System::EventHandler(this, &Pantalla01::label6_Click);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(17, 214);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(66, 16);
			   this->label7->TabIndex = 18;
			   this->label7->Text = L"Jugador 2";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(96, 291);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(309, 14);
			   this->label4->TabIndex = 19;
			   this->label4->Text = L"Nota: Los asteriscos se posicionan en la fila o columna dominada.";
			   // 
			   // Pantalla01
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(482, 523);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->grpBoxENEM);
			   this->Controls->Add(this->btnCargar);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->lblP);
			   this->Controls->Add(this->lbl1menosP);
			   this->Controls->Add(this->lblQ);
			   this->Controls->Add(this->lbl1menosQ);
			   this->Controls->Add(this->lblResultado);
			   this->Controls->Add(this->lblTipoEstrategia);
			   this->Controls->Add(this->lstTabla);
			   this->Controls->Add(this->panelCabecera);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Name = L"Pantalla01";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Pantalla01";
			   this->Load += gcnew System::EventHandler(this, &Pantalla01::Pantalla01_Load);
			   this->panelCabecera->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->grpBoxENEM->ResumeLayout(false);
			   this->grpBoxENEM->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void btnCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(1);
	}
	private: System::Void btnRestaurar_Click(System::Object^ sender, System::EventArgs^ e) {
		btnRestaurar->Visible = false;
		btnMaximizar->Visible = true;
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
	}
	private: System::Void btnMaximizar_Click(System::Object^ sender, System::EventArgs^ e) {
		btnMaximizar->Visible = false;
		btnRestaurar->Visible = true;
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
	}
	private: System::Void btnMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
	}
	private: System::Void Pantalla01_Load(System::Object^ sender, System::EventArgs^ e) {

		//configurarTabla();
		empezarJuego();

	}

		   void configurarTabla()
		   {
			   lstTabla->View = View::Details;
			   lstTabla->GridLines = true;
			   lstTabla->Columns->Add("");
			   lstTabla->Columns->Add("X");
			   lstTabla->Columns->Add("Y");
			   lstTabla->Columns->Add("Z");

		   }

	private: System::Void btnEmpezar_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   void empezarJuego()
		   {
			   //lstTabla=NULL;
			   configurarTabla();
			   this->Location = System::Drawing::Point(500, 100);
			   this->ClientSize = System::Drawing::Size(500, 400);
			   juego->agrego2Jugadores();//  2 jugadores con su estrategias
			   juego->llenarTodo();
			   int tmp;
			   String^ cadena;
			   int numero;

			   for (int i = 0; i < 2; i++)
			   {
				   if (i == 0) { lstTabla->Items->Add("A"); }
				   if (i == 1) { lstTabla->Items->Add("B"); }


				   for (int j = 0; j < 3; j++) ///X Y Z CAMBIO
				   {
					   cadena = "";
					   if (juego->getListaJugadores()[0]->getListaEstrategias()[i]->getListaNumeros()[j]->getEstado() != false) { cadena += "("; }
					   cadena += juego->getListaJugadores()[0]->getListaEstrategias()[i]->getListaNumeros()[j]->getNumero();
					   if (juego->getListaJugadores()[0]->getListaEstrategias()[i]->getListaNumeros()[j]->getEstado() != false) { cadena += ")"; }

					   cadena += ",";

					   if (juego->getListaJugadores()[1]->getListaEstrategias()[j]->getListaNumeros()[i]->getEstado() != false) { cadena += "("; }

					   if (juego->getListaJugadores()[1]->getListaEstrategias()[j]->getListaNumeros()[i]->getNumeromenor() == true) {
						   cadena += juego->getListaJugadores()[1]->getListaEstrategias()[j]->getListaNumeros()[i]->getNumero() + "*";
					   }
					   else {
						   cadena += juego->getListaJugadores()[1]->getListaEstrategias()[j]->getListaNumeros()[i]->getNumero();
					   }

					   if (juego->getListaJugadores()[1]->getListaEstrategias()[j]->getListaNumeros()[i]->getEstado() != false) { cadena += ")"; }

					   lstTabla->Items[i]->SubItems->Add(cadena);

				   }

			   }
			   juego->Detectar_tipo_Estrategia();
			   juego->mostrarPruebas();

			   if (juego->get_estrategia())
			   {
				   lblTipoEstrategia->Text = "Estrategia Pura";
				   String^ coordenadas = gcnew System::String(juego->mostrarCoordenadaEquilibrio().c_str());
				   lblResultado->Text = "ENEP={" + coordenadas + "}";

			   }
			   else
			   {
				   //Crear_Ecuaciones();
				   this->ClientSize = System::Drawing::Size(500, 550);
				   j1 = juego->getListaJugadores()[0];
				   j2 = juego->getListaJugadores()[1];

				   estrategiaMixta();

				   lblTipoEstrategia->Text = "Estrategia Mixta";
				   lbl1menosQ->Visible = true;
				   lblQ->Visible = true;
				   lbl1menosP->Visible = true;
				   lblP->Visible = true;
				   btnGrafico->Visible = true;
				   lblResultado->Visible = false;
				   grpBoxENEM->Visible = true;

			   }
			   lblTipoEstrategia->Visible = true;

		   }

	private: System::Void btnGrafico_Click(System::Object^ sender, System::EventArgs^ e) {
		CGraficoENEM^ frm = gcnew CGraficoENEM(juego);
		frm->ShowDialog();
	}
	private: System::Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		this->ClientSize = System::Drawing::Size(500, 400);

		Pantalla01().ShowDialog();
	}


		   //Estrategia mixta 

		   void Crear_Ecuaciones()
		   {
			   int a, b, c, d;

			   a = j1->getListaEstrategias()[0]->getListaNumeros()[0]->getNumero();
			   b = j1->getListaEstrategias()[0]->getListaNumeros()[1]->getNumero();
			   c = j1->getListaEstrategias()[1]->getListaNumeros()[0]->getNumero();
			   d = j1->getListaEstrategias()[1]->getListaNumeros()[1]->getNumero();

			   Ecuacion_j1 = new CEcuacion(a, b, c, d, 1);



			   a = j2->getListaEstrategias()[0]->getListaNumeros()[0]->getNumero();
			   b = j2->getListaEstrategias()[1]->getListaNumeros()[0]->getNumero();
			   c = j2->getListaEstrategias()[0]->getListaNumeros()[1]->getNumero();
			   d = j2->getListaEstrategias()[1]->getListaNumeros()[1]->getNumero();

			   Ecuacion_j2 = new CEcuacion(a, b, c, d, 2);


		   }


		   void estrategiaMixta() {


			   Crear_Ecuaciones();
			   String^ tmpSTRING; string tmpString;

			   //______________JUGADOR 1___________________//



			   tmpString = Ecuacion_j1->get_Uno();
			   tmpSTRING = gcnew System::String(tmpString.c_str());


			   tmpString = Ecuacion_j1->toda_ecuacion();
			   tmpSTRING = gcnew System::String(tmpString.c_str());
			   lblEcuacionJugador1->Text = tmpSTRING;


			   tmpString = Ecuacion_j1->get_verticePrincipal() + "=" + Ecuacion_j1->get_Uno() + "    " + Ecuacion_j1->get_verticeSecundario() + "=" + to_string(Ecuacion_j1->get_UnoUno());
			   tmpSTRING = gcnew System::String(tmpString.c_str());
			   lblFila1Jugador1->Text = tmpSTRING;

			   tmpString = Ecuacion_j1->get_verticePrincipal() + Ecuacion_j1->get_Dos() + Ecuacion_j1->get_Uno() + "    " + Ecuacion_j1->get_verticeSecundario() + "=" + to_string(Ecuacion_j1->get_DosDos());
			   tmpSTRING = gcnew System::String(tmpString.c_str());
			   lblFila2Jugador1->Text = tmpSTRING;



			   if (Ecuacion_j1->get_Uno() == "1")
			   {


				   lblFila2Jugador1->Visible = false;

				   lblFila3Jugador1->Location = Point(22, 112);

				   tmpString = Ecuacion_j1->get_verticePrincipal() + Ecuacion_j1->get_Tres() + Ecuacion_j1->get_Uno() + "    " + Ecuacion_j1->get_verticeSecundario() + "=" + to_string(Ecuacion_j1->get_TresTres());
				   tmpSTRING = gcnew System::String(tmpString.c_str());
				   lblFila3Jugador1->Text = tmpSTRING;
			   }

			   else
			   {
				   if (Ecuacion_j1->get_p() != 0)
				   {
					   tmpString = Ecuacion_j1->get_verticePrincipal() + Ecuacion_j1->get_Tres() + Ecuacion_j1->get_Uno() + "    " + Ecuacion_j1->get_verticeSecundario() + "=" + to_string(Ecuacion_j1->get_TresTres());
					   tmpSTRING = gcnew System::String(tmpString.c_str());
					   lblFila3Jugador1->Text = tmpSTRING;
				   }
				   else
				   {
					   lblFila3Jugador1->Text = "";
					   lblFila3Jugador1->Visible = false;


				   }
			   }

			   //______________JUGADOR 2___________________//



			   tmpString = Ecuacion_j2->get_Uno();
			   tmpSTRING = gcnew System::String(tmpString.c_str());



			   tmpString = Ecuacion_j2->toda_ecuacion();
			   tmpSTRING = gcnew System::String(tmpString.c_str());
			   lblEcuacionJugador2->Text = tmpSTRING;


			   tmpString = Ecuacion_j2->get_verticePrincipal() + "=" + Ecuacion_j2->get_Uno() + "    " + Ecuacion_j2->get_verticeSecundario() + "=" + to_string(Ecuacion_j2->get_UnoUno());
			   tmpSTRING = gcnew System::String(tmpString.c_str());
			   lblFila1Jugador2->Text = tmpSTRING;

			   tmpString = Ecuacion_j2->get_verticePrincipal() + Ecuacion_j2->get_Dos() + Ecuacion_j2->get_Uno() + "    " + Ecuacion_j2->get_verticeSecundario() + "=" + to_string(Ecuacion_j2->get_DosDos());
			   tmpSTRING = gcnew System::String(tmpString.c_str());
			   lblFila2Jugador2->Text = tmpSTRING;

			   if (Ecuacion_j2->get_Uno() == "1")
			   {


				   lblFila2Jugador2->Visible = false;

				   lblFila3Jugador2->Location = Point(286, 112);

				   tmpString = Ecuacion_j2->get_verticePrincipal() + Ecuacion_j2->get_Tres() + Ecuacion_j2->get_Uno() + "    " + Ecuacion_j2->get_verticeSecundario() + "=" + to_string(Ecuacion_j2->get_TresTres());
				   tmpSTRING = gcnew System::String(tmpString.c_str());
				   lblFila3Jugador2->Text = tmpSTRING;
			   }

			   else
			   {
				   if (Ecuacion_j2->get_q() != 0)
				   {

					   tmpString = Ecuacion_j2->get_verticePrincipal() + Ecuacion_j2->get_Tres() + Ecuacion_j2->get_Uno() + "    " + Ecuacion_j2->get_verticeSecundario() + "=" + to_string(Ecuacion_j2->get_TresTres());
					   tmpSTRING = gcnew System::String(tmpString.c_str());
					   lblFila3Jugador2->Text = tmpSTRING;
				   }
				   else
				   {
					   lblFila3Jugador2->Visible = false;
					   lblFila3Jugador2->Text = "";


				   }

			   }


		   }


	private: System::Void btnGrafico_Click_1(System::Object^ sender, System::EventArgs^ e) {
		CGraficoENEM^ frm = gcnew CGraficoENEM(juego);
		frm->ShowDialog();

	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lblEcuacionJugador1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
