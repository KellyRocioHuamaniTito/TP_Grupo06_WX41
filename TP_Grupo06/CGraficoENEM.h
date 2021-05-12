#pragma once
#include <vcclr.h>
#include "CJuego.h"
namespace TPGrupo06 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CGraficoENEM
	/// </summary>
	public ref class CGraficoENEM : public System::Windows::Forms::Form
	{
	public:

		CGraficoENEM(CJuego* juego)
		{

			j1 = juego->getListaJugadores()[0];
			j2 = juego->getListaJugadores()[1];
			InitializeComponent();


		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.

		/// </summary>
		~CGraficoENEM()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		CJugador* j1, * j2;
		CEcuacion* Ecuacion_j1;
		CEcuacion* Ecuacion_j2;

		Graphics^ graficador;
	private: System::Windows::Forms::Label^ lblEcuacionJugador1;
	private: System::Windows::Forms::Label^ lblEcuacionJugador2;
	private: System::Windows::Forms::Label^ lblJugador2;
	private: System::Windows::Forms::Label^ lblJugador1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblFila1Jugador1;
	private: System::Windows::Forms::Label^ lblFila2Jugador1;
	private: System::Windows::Forms::Label^ lblFila3Jugador1;
	private: System::Windows::Forms::Label^ lblFila3Jugador2;
	private: System::Windows::Forms::Label^ lblFila2Jugador2;
	private: System::Windows::Forms::Label^ lblFila1Jugador2;
	private: System::Windows::Forms::Label^ lblCoordenadaQ;
	private: System::Windows::Forms::Label^ lblCoordenadaP;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblQJugador1;
	private: System::Windows::Forms::Label^ lblPJugador2;
	private: System::Windows::Forms::Label^ lblPResultado;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ lblQResultado;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnRestaurar;
	private: System::Windows::Forms::Button^ btnMinimizar;
	private: System::Windows::Forms::Button^ btnCerrar;
	private: System::Windows::Forms::Panel^ panelCabecera;
	private: System::Windows::Forms::Button^ btnMaximizar;


		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Método necesario para admitir el Diseñador. No se puede modificar
		   /// el contenido de este método con el editor de código.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CGraficoENEM::typeid));
			   this->lblEcuacionJugador1 = (gcnew System::Windows::Forms::Label());
			   this->lblEcuacionJugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblJugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblJugador1 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->lblFila1Jugador1 = (gcnew System::Windows::Forms::Label());
			   this->lblFila2Jugador1 = (gcnew System::Windows::Forms::Label());
			   this->lblFila3Jugador1 = (gcnew System::Windows::Forms::Label());
			   this->lblFila3Jugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblFila2Jugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblFila1Jugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblCoordenadaQ = (gcnew System::Windows::Forms::Label());
			   this->lblCoordenadaP = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->lblQJugador1 = (gcnew System::Windows::Forms::Label());
			   this->lblPJugador2 = (gcnew System::Windows::Forms::Label());
			   this->lblPResultado = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->lblQResultado = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->btnRestaurar = (gcnew System::Windows::Forms::Button());
			   this->btnMinimizar = (gcnew System::Windows::Forms::Button());
			   this->btnCerrar = (gcnew System::Windows::Forms::Button());
			   this->panelCabecera = (gcnew System::Windows::Forms::Panel());
			   this->btnMaximizar = (gcnew System::Windows::Forms::Button());
			   this->panelCabecera->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // lblEcuacionJugador1
			   // 
			   this->lblEcuacionJugador1->AutoSize = true;
			   this->lblEcuacionJugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblEcuacionJugador1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->lblEcuacionJugador1->Location = System::Drawing::Point(79, 63);
			   this->lblEcuacionJugador1->Name = L"lblEcuacionJugador1";
			   this->lblEcuacionJugador1->Size = System::Drawing::Size(16, 16);
			   this->lblEcuacionJugador1->TabIndex = 0;
			   this->lblEcuacionJugador1->Text = L"J1";
			   // 
			   // lblEcuacionJugador2
			   // 
			   this->lblEcuacionJugador2->AutoSize = true;
			   this->lblEcuacionJugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblEcuacionJugador2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->lblEcuacionJugador2->Location = System::Drawing::Point(347, 63);
			   this->lblEcuacionJugador2->Name = L"lblEcuacionJugador2";
			   this->lblEcuacionJugador2->Size = System::Drawing::Size(18, 16);
			   this->lblEcuacionJugador2->TabIndex = 1;
			   this->lblEcuacionJugador2->Text = L"J2";
			   // 
			   // lblJugador2
			   // 
			   this->lblJugador2->AutoSize = true;
			   this->lblJugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblJugador2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->lblJugador2->Location = System::Drawing::Point(286, 38);
			   this->lblJugador2->Name = L"lblJugador2";
			   this->lblJugador2->Size = System::Drawing::Size(55, 16);
			   this->lblJugador2->TabIndex = 2;
			   this->lblJugador2->Text = L"Jugador 2 :";
			   // 
			   // lblJugador1
			   // 
			   this->lblJugador1->AutoSize = true;
			   this->lblJugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblJugador1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->lblJugador1->Location = System::Drawing::Point(21, 38);
			   this->lblJugador1->Name = L"lblJugador1";
			   this->lblJugador1->Size = System::Drawing::Size(53, 16);
			   this->lblJugador1->TabIndex = 3;
			   this->lblJugador1->Text = L"Jugador 1 :";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->label1->Location = System::Drawing::Point(286, 63);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(54, 16);
			   this->label1->TabIndex = 4;
			   this->label1->Text = L"Ecuacion  :";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(21, 63);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(54, 16);
			   this->label2->TabIndex = 5;
			   this->label2->Text = L"Ecuacion  :";
			   // 
			   // lblFila1Jugador1
			   // 
			   this->lblFila1Jugador1->AutoSize = true;
			   this->lblFila1Jugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblFila1Jugador1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->lblFila1Jugador1->Location = System::Drawing::Point(22, 90);
			   this->lblFila1Jugador1->Name = L"lblFila1Jugador1";
			   this->lblFila1Jugador1->Size = System::Drawing::Size(67, 16);
			   this->lblFila1Jugador1->TabIndex = 6;
			   this->lblFila1Jugador1->Text = L"Resultado J1 1";
			   // 
			   // lblFila2Jugador1
			   // 
			   this->lblFila2Jugador1->AutoSize = true;
			   this->lblFila2Jugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblFila2Jugador1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->lblFila2Jugador1->Location = System::Drawing::Point(22, 112);
			   this->lblFila2Jugador1->Name = L"lblFila2Jugador1";
			   this->lblFila2Jugador1->Size = System::Drawing::Size(69, 16);
			   this->lblFila2Jugador1->TabIndex = 7;
			   this->lblFila2Jugador1->Text = L"Resultado J1 2";
			   // 
			   // lblFila3Jugador1
			   // 
			   this->lblFila3Jugador1->AutoSize = true;
			   this->lblFila3Jugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblFila3Jugador1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->lblFila3Jugador1->Location = System::Drawing::Point(22, 134);
			   this->lblFila3Jugador1->Name = L"lblFila3Jugador1";
			   this->lblFila3Jugador1->Size = System::Drawing::Size(69, 16);
			   this->lblFila3Jugador1->TabIndex = 8;
			   this->lblFila3Jugador1->Text = L"Resultado J1 3";
			   // 
			   // lblFila3Jugador2
			   // 
			   this->lblFila3Jugador2->AutoSize = true;
			   this->lblFila3Jugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblFila3Jugador2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->lblFila3Jugador2->Location = System::Drawing::Point(286, 134);
			   this->lblFila3Jugador2->Name = L"lblFila3Jugador2";
			   this->lblFila3Jugador2->Size = System::Drawing::Size(69, 16);
			   this->lblFila3Jugador2->TabIndex = 11;
			   this->lblFila3Jugador2->Text = L"Resultado J1 3";
			   // 
			   // lblFila2Jugador2
			   // 
			   this->lblFila2Jugador2->AutoSize = true;
			   this->lblFila2Jugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblFila2Jugador2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->lblFila2Jugador2->Location = System::Drawing::Point(286, 112);
			   this->lblFila2Jugador2->Name = L"lblFila2Jugador2";
			   this->lblFila2Jugador2->Size = System::Drawing::Size(69, 16);
			   this->lblFila2Jugador2->TabIndex = 10;
			   this->lblFila2Jugador2->Text = L"Resultado J1 2";
			   // 
			   // lblFila1Jugador2
			   // 
			   this->lblFila1Jugador2->AutoSize = true;
			   this->lblFila1Jugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblFila1Jugador2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->lblFila1Jugador2->Location = System::Drawing::Point(286, 90);
			   this->lblFila1Jugador2->Name = L"lblFila1Jugador2";
			   this->lblFila1Jugador2->Size = System::Drawing::Size(67, 16);
			   this->lblFila1Jugador2->TabIndex = 9;
			   this->lblFila1Jugador2->Text = L"Resultado J1 1";
			   // 
			   // lblCoordenadaQ
			   // 
			   this->lblCoordenadaQ->AutoSize = true;
			   this->lblCoordenadaQ->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCoordenadaQ->Location = System::Drawing::Point(4, 180);
			   this->lblCoordenadaQ->Name = L"lblCoordenadaQ";
			   this->lblCoordenadaQ->Size = System::Drawing::Size(13, 16);
			   this->lblCoordenadaQ->TabIndex = 12;
			   this->lblCoordenadaQ->Text = L"q";
			   // 
			   // lblCoordenadaP
			   // 
			   this->lblCoordenadaP->AutoSize = true;
			   this->lblCoordenadaP->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCoordenadaP->Location = System::Drawing::Point(164, 335);
			   this->lblCoordenadaP->Name = L"lblCoordenadaP";
			   this->lblCoordenadaP->Size = System::Drawing::Size(13, 16);
			   this->lblCoordenadaP->TabIndex = 13;
			   this->lblCoordenadaP->Text = L"p";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(429, 335);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(13, 16);
			   this->label3->TabIndex = 15;
			   this->label3->Text = L"p";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(269, 180);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(13, 16);
			   this->label4->TabIndex = 14;
			   this->label4->Text = L"q";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(269, 222);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(11, 16);
			   this->label5->TabIndex = 16;
			   this->label5->Text = L"1";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(392, 335);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(11, 16);
			   this->label6->TabIndex = 17;
			   this->label6->Text = L"1";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(127, 335);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(11, 16);
			   this->label7->TabIndex = 19;
			   this->label7->Text = L"1";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(4, 222);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(11, 16);
			   this->label8->TabIndex = 18;
			   this->label8->Text = L"1";
			   // 
			   // lblQJugador1
			   // 
			   this->lblQJugador1->AutoSize = true;
			   this->lblQJugador1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblQJugador1->Location = System::Drawing::Point(-2, 271);
			   this->lblQJugador1->Name = L"lblQJugador1";
			   this->lblQJugador1->Size = System::Drawing::Size(13, 16);
			   this->lblQJugador1->TabIndex = 20;
			   this->lblQJugador1->Text = L"q";
			   // 
			   // lblPJugador2
			   // 
			   this->lblPJugador2->AutoSize = true;
			   this->lblPJugador2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblPJugador2->Location = System::Drawing::Point(331, 335);
			   this->lblPJugador2->Name = L"lblPJugador2";
			   this->lblPJugador2->Size = System::Drawing::Size(13, 16);
			   this->lblPJugador2->TabIndex = 21;
			   this->lblPJugador2->Text = L"p";
			   // 
			   // lblPResultado
			   // 
			   this->lblPResultado->AutoSize = true;
			   this->lblPResultado->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblPResultado->Location = System::Drawing::Point(590, 334);
			   this->lblPResultado->Name = L"lblPResultado";
			   this->lblPResultado->Size = System::Drawing::Size(13, 16);
			   this->lblPResultado->TabIndex = 26;
			   this->lblPResultado->Text = L"p";
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label10->Location = System::Drawing::Point(651, 334);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(11, 16);
			   this->label10->TabIndex = 25;
			   this->label10->Text = L"1";
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label11->Location = System::Drawing::Point(528, 219);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(11, 16);
			   this->label11->TabIndex = 24;
			   this->label11->Text = L"1";
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label12->Location = System::Drawing::Point(690, 332);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(13, 16);
			   this->label12->TabIndex = 23;
			   this->label12->Text = L"p";
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label13->Location = System::Drawing::Point(530, 177);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(13, 16);
			   this->label13->TabIndex = 22;
			   this->label13->Text = L"q";
			   // 
			   // lblQResultado
			   // 
			   this->lblQResultado->AutoSize = true;
			   this->lblQResultado->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblQResultado->Location = System::Drawing::Point(523, 271);
			   this->lblQResultado->Name = L"lblQResultado";
			   this->lblQResultado->Size = System::Drawing::Size(13, 16);
			   this->lblQResultado->TabIndex = 27;
			   this->lblQResultado->Text = L"q";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label9->Location = System::Drawing::Point(602, 121);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(60, 29);
			   this->label9->TabIndex = 28;
			   this->label9->Text = L"J1   J2";
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
			   this->btnRestaurar->Location = System::Drawing::Point(712, 0);
			   this->btnRestaurar->Name = L"btnRestaurar";
			   this->btnRestaurar->Size = System::Drawing::Size(40, 40);
			   this->btnRestaurar->TabIndex = 4;
			   this->btnRestaurar->UseVisualStyleBackColor = false;
			   this->btnRestaurar->Visible = false;
			   this->btnRestaurar->Click += gcnew System::EventHandler(this, &CGraficoENEM::btnRestaurar_Click_1);
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
			   this->btnMinimizar->Location = System::Drawing::Point(666, 0);
			   this->btnMinimizar->Name = L"btnMinimizar";
			   this->btnMinimizar->Size = System::Drawing::Size(40, 40);
			   this->btnMinimizar->TabIndex = 3;
			   this->btnMinimizar->UseVisualStyleBackColor = true;
			   this->btnMinimizar->Click += gcnew System::EventHandler(this, &CGraficoENEM::btnMinimizar_Click_1);
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
			   this->btnCerrar->Location = System::Drawing::Point(758, 0);
			   this->btnCerrar->Name = L"btnCerrar";
			   this->btnCerrar->Size = System::Drawing::Size(40, 40);
			   this->btnCerrar->TabIndex = 1;
			   this->btnCerrar->UseVisualStyleBackColor = true;
			   this->btnCerrar->Click += gcnew System::EventHandler(this, &CGraficoENEM::btnCerrar_Click_1);
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
			   this->panelCabecera->Size = System::Drawing::Size(798, 40);
			   this->panelCabecera->TabIndex = 29;
			   this->panelCabecera->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CGraficoENEM::panelCabecera_Paint);
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
			   this->btnMaximizar->Location = System::Drawing::Point(712, 0);
			   this->btnMaximizar->Name = L"btnMaximizar";
			   this->btnMaximizar->Size = System::Drawing::Size(40, 40);
			   this->btnMaximizar->TabIndex = 2;
			   this->btnMaximizar->UseVisualStyleBackColor = true;
			   // 
			   // CGraficoENEM
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(798, 371);
			   this->Controls->Add(this->panelCabecera);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->lblQResultado);
			   this->Controls->Add(this->lblPResultado);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->label13);
			   this->Controls->Add(this->lblPJugador2);
			   this->Controls->Add(this->lblQJugador1);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->lblCoordenadaP);
			   this->Controls->Add(this->lblCoordenadaQ);
			   this->Controls->Add(this->lblFila3Jugador2);
			   this->Controls->Add(this->lblFila2Jugador2);
			   this->Controls->Add(this->lblFila1Jugador2);
			   this->Controls->Add(this->lblFila3Jugador1);
			   this->Controls->Add(this->lblFila2Jugador1);
			   this->Controls->Add(this->lblFila1Jugador1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->lblJugador1);
			   this->Controls->Add(this->lblJugador2);
			   this->Controls->Add(this->lblEcuacionJugador2);
			   this->Controls->Add(this->lblEcuacionJugador1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Name = L"CGraficoENEM";
			   this->Text = L"CGraficoENEM";
			   this->Load += gcnew System::EventHandler(this, &CGraficoENEM::CGraficoENEM_Load);
			   this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CGraficoENEM::CGraficoENEM_Paint);
			   this->panelCabecera->ResumeLayout(false);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void CGraficoENEM_Load(System::Object^ sender, System::EventArgs^ e) {


		Crear_Ecuaciones();
		String^ tmpSTRING; string tmpString;
		tmpString = Ecuacion_j1->get_Uno();
		tmpSTRING = gcnew System::String(tmpString.c_str());
		lblQJugador1->Text = tmpSTRING;
		lblQResultado->Text = tmpSTRING;

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
			lblQJugador1->Visible = false;
			lblQResultado->Visible = false;

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

				lblQJugador1->Visible = false;
				lblQResultado->Visible = false;

			}
		}





















		//______________JUGADOR 2___________________//



		tmpString = Ecuacion_j2->get_Uno();
		tmpSTRING = gcnew System::String(tmpString.c_str());
		lblPJugador2->Text = tmpSTRING;
		lblPResultado->Text = tmpSTRING;


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
			lblPJugador2->Visible = false;
			lblPResultado->Visible = false;

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

				lblPJugador2->Visible = false;
				lblPResultado->Visible = false;

			}

		}




	}
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


	private: System::Void CGraficoENEM_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		DibujaLinea(e);
	}
		   void DibujaLinea(PaintEventArgs^ e)
		   {
			   // Crea lapicero.  
			   Pen^ negro = gcnew Pen(Color::Black, 1.0f);
			   Pen^ linea_discontinuas = gcnew Pen(Color::Red, 2.0F); linea_discontinuas->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot;
			   Pen^ lapiz_J1 = gcnew Pen(Color::Green, 5.0f);
			   Pen^ lapiz_J2 = gcnew Pen(Color::Blue, 5.0f);

			   // EJE DE COORDENADA PARA EL JUGADOR 1
			   Point coordana_X_inicio_j1 = Point(25, 180);
			   Point coordana_X_final_j1 = Point(25, 330);


			   Point coordana_Y_inicio_j1 = Point(25, 330);
			   Point coordana_Y_final_j1 = Point(175, 330);

			   e->Graphics->DrawLine(negro, coordana_X_inicio_j1, coordana_X_final_j1);
			   e->Graphics->DrawLine(negro, coordana_Y_inicio_j1, coordana_Y_final_j1);


			   Point horizontal_inicio_j1 = Point(25, 230);
			   Point horizontal_fin_j1 = Point(135, 230);


			   Point vertical_inicio_j1 = Point(135, 230);
			   Point vertical_fin_j1 = Point(135, 330);

			   e->Graphics->DrawLine(linea_discontinuas, horizontal_inicio_j1, horizontal_fin_j1);
			   e->Graphics->DrawLine(linea_discontinuas, vertical_inicio_j1, vertical_fin_j1);

			   /************************************************************/
			   Point trazo_UNO_inicio_j1;
			   Point trazo_UNO_final_j1;
			   Point trazo_DOS_inicio_j1;
			   Point trazo_DOS_final_j1;

			   if (Ecuacion_j1->get_p() != 0)
			   {
				   if (Ecuacion_j1->get_Uno() == "1")
				   {

					   if (Ecuacion_j1->get_UnoUno() == 1)
					   {

						   //Arriba
						   trazo_UNO_inicio_j1 = Point(135, 230);
						   trazo_UNO_final_j1 = Point(135, 330);

					   }
					   else
					   {
						   //Abajo
						   trazo_UNO_inicio_j1 = Point(25, 230);
						   trazo_UNO_final_j1 = Point(25, 330);

					   }

					   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_UNO_final_j1);

					   if (Ecuacion_j1->get_TresTres() == 1)
					   {
						   cout << "valoooooooooooooooooooooooooooooooooooooooooooooooooooor:    " << Ecuacion_j1->get_TresTres() << endl << endl;

						   //Arriba
						   trazo_DOS_inicio_j1 = Point(25, 330);
						   trazo_DOS_final_j1 = Point(135, 330);

					   }
					   else
					   {
						   //Abajo
						   trazo_DOS_inicio_j1 = Point(25, 330);
						   trazo_DOS_final_j1 = Point(25, 330);
					   }



					   e->Graphics->DrawLine(lapiz_J1, trazo_DOS_inicio_j1, trazo_DOS_final_j1);
					   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_DOS_inicio_j1);



				   }
				   else {


					   if (Ecuacion_j1->get_TresTres() == 0)
					   {
						   //Izquierda
						   trazo_UNO_inicio_j1 = Point(25, 280);
						   trazo_UNO_final_j1 = Point(25, 330);
					   }
					   else
					   {
						   //Derecha
						   trazo_UNO_inicio_j1 = Point(135, 280);
						   trazo_UNO_final_j1 = Point(135, 330);
					   }


					   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_UNO_final_j1);

					   if (Ecuacion_j1->get_DosDos() == 0)
					   {
						   //Izquierda
						   trazo_DOS_inicio_j1 = Point(25, 280);
						   trazo_DOS_final_j1 = Point(25, 230);
					   }

					   else
					   {
						   //Derecha
						   trazo_DOS_inicio_j1 = Point(135, 280);
						   trazo_DOS_final_j1 = Point(135, 230);
					   }

					   e->Graphics->DrawLine(lapiz_J1, trazo_DOS_inicio_j1, trazo_DOS_final_j1);
					   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_DOS_inicio_j1);
				   }
			   }
			   else
			   {



				   trazo_UNO_inicio_j1 = Point(25, 330);
				   trazo_UNO_final_j1 = Point(135, 330);



				   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_UNO_final_j1);


				   if (Ecuacion_j1->get_DosDos() == 1)
				   {
					   //Derecha
					   trazo_DOS_inicio_j1 = Point(135, 330);
					   trazo_DOS_final_j1 = Point(135, 230);

				   }
				   else
				   {
					   //Izquierda
					   trazo_DOS_inicio_j1 = Point(25, 330);
					   trazo_DOS_final_j1 = Point(25, 230);
				   }

				   e->Graphics->DrawLine(lapiz_J1, trazo_DOS_inicio_j1, trazo_DOS_final_j1);
				   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_DOS_inicio_j1);




			   }






			   //

			// EJE DE COORDENADA PARA EL JUGADOR 2


			   Point coordana_Y_inicio_j2 = Point(290, 180);
			   Point coordana_Y_final_j2 = Point(290, 330);

			   Point  coordana_X_inicio_j2 = Point(290, 330);
			   Point  coordana_X_final_j2 = Point(440, 330);


			   e->Graphics->DrawLine(negro, coordana_Y_inicio_j2, coordana_Y_final_j2);
			   e->Graphics->DrawLine(negro, coordana_X_inicio_j2, coordana_X_final_j2);


			   Point horizontal_inicio_j2 = Point(290, 230);
			   Point horizontal_fin_j2 = Point(400, 230);

			   Point vertical_inicio_j2 = Point(400, 230);
			   Point vertical_fin_j2 = Point(400, 330);

			   e->Graphics->DrawLine(linea_discontinuas, horizontal_inicio_j2, horizontal_fin_j2);
			   e->Graphics->DrawLine(linea_discontinuas, vertical_inicio_j2, vertical_fin_j2);



			   /***************************************************/

			   Point trazo_UNO_inicio_j2;
			   Point trazo_UNO_final_j2;
			   Point trazo_DOS_inicio_j2;
			   Point trazo_DOS_final_j2;


			   if (Ecuacion_j2->get_q() != 0)
			   {

				   if (Ecuacion_j2->get_Uno() == "1")

				   {
					   if (Ecuacion_j2->get_UnoUno() == 1)
					   {
						   //Arriba
						   trazo_UNO_inicio_j2 = Point(400, 230);
						   trazo_UNO_final_j2 = Point(290, 230);
					   }
					   else
					   {
						   //Abajo
						   trazo_UNO_inicio_j2 = Point(400, 330);
						   trazo_UNO_final_j2 = Point(290, 330);
					   }
					   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_UNO_final_j2);


					   if (Ecuacion_j2->get_TresTres() == 1)
					   {
						   //Arriba
						   trazo_DOS_inicio_j2 = Point(400, 230);
						   trazo_DOS_final_j2 = Point(290, 230);
					   }
					   else
					   {
						   //Abajo
						   trazo_DOS_inicio_j2 = Point(400, 330);
						   trazo_DOS_final_j2 = Point(290, 330);
					   }
					   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_DOS_inicio_j2);



					   e->Graphics->DrawLine(lapiz_J2, trazo_DOS_inicio_j2, trazo_DOS_final_j2);

				   }
				   else
				   {
					   if (Ecuacion_j2->get_DosDos() == 1)//Arriba
					   {
						   trazo_UNO_inicio_j2 = Point(345, 230);
						   trazo_UNO_final_j2 = Point(400, 230);
					   }
					   else//Abajo
					   {
						   trazo_UNO_inicio_j2 = Point(345, 330);
						   trazo_UNO_final_j2 = Point(400, 330);
					   }

					   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_UNO_final_j2);



					   if (Ecuacion_j2->get_TresTres() == 1)//Arriba
					   {
						   //Arriba
						   trazo_DOS_inicio_j2 = Point(345, 230);
						   trazo_DOS_final_j2 = Point(290, 230);
					   }
					   else {

						   //Abajo

						   trazo_DOS_inicio_j2 = Point(345, 330);
						   trazo_DOS_final_j2 = Point(290, 330);
					   }

					   e->Graphics->DrawLine(lapiz_J2, trazo_DOS_inicio_j2, trazo_DOS_final_j2);

					   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_DOS_inicio_j2);
				   }
			   }
			   else
			   {
				   trazo_UNO_inicio_j2 = Point(290, 330);
				   trazo_UNO_final_j2 = Point(290, 230);

				   if (Ecuacion_j2->get_DosDos() == 1)//Arriba
				   {

					   //Arriba
					   trazo_DOS_inicio_j2 = Point(290, 230);
					   trazo_DOS_final_j2 = Point(400, 230);
				   }
				   else
				   {
					   trazo_DOS_inicio_j2 = Point(290, 330);
					   trazo_DOS_final_j2 = Point(400, 330);
				   }



				   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_UNO_final_j2);
				   e->Graphics->DrawLine(lapiz_J2, trazo_DOS_inicio_j2, trazo_DOS_final_j2);

				   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_DOS_inicio_j2);
			   }


			   /****************************************************************************/




			   lapiz_J1 = gcnew Pen(Color::Green, 5.0f);
			   lapiz_J2 = gcnew Pen(Color::Blue, 3.0f);

			   Point coordana_X_inicio_resultado = Point(550, 330);
			   Point coordana_X_final_resultado = Point(700, 330);

			   Point coordana_Y_inicio_resultado = Point(550, 330);
			   Point coordana_Y_final_resultado = Point(550, 180);


			   e->Graphics->DrawLine(negro, coordana_X_inicio_resultado, coordana_X_final_resultado);
			   e->Graphics->DrawLine(negro, coordana_Y_inicio_resultado, coordana_Y_final_resultado);



			   Point horizontalDiscontinuas_inicio_j2 = Point(550, 230);
			   Point horizontalDiscontinuas_fin_j2 = Point(660, 230);

			   Point verticalDiscontinuas_inicio_j2 = Point(660, 230);
			   Point verticalDiscontinuas_fin_j2 = Point(660, 330);

			   e->Graphics->DrawLine(linea_discontinuas, horizontalDiscontinuas_inicio_j2, horizontalDiscontinuas_fin_j2);
			   e->Graphics->DrawLine(linea_discontinuas, verticalDiscontinuas_inicio_j2, verticalDiscontinuas_fin_j2);


			   //jugador1


			   if (Ecuacion_j1->get_p() != 0)
			   {

				   if (Ecuacion_j1->get_Uno() == "1")
				   {

					   if (Ecuacion_j1->get_UnoUno() == 1)
					   {
						   //Arriba

						   trazo_UNO_inicio_j1 = Point(660, 230);
						   trazo_UNO_final_j1 = Point(660, 230);
					   }
					   else
					   {
						   //Abajo
						   trazo_UNO_inicio_j1 = Point(550, 230);
						   trazo_UNO_final_j1 = Point(550, 330);
					   }

					   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_UNO_final_j1);



					   if (Ecuacion_j1->get_TresTres() == 1)
					   {
						   //Arriba

						   trazo_DOS_inicio_j1 = Point(550, 330);
						   trazo_DOS_final_j1 = Point(660, 330);

					   }
					   else
					   {
						   //Abajo

						   trazo_DOS_inicio_j1 = Point(550, 330);
						   trazo_DOS_final_j1 = Point(550, 330);
					   }



					   e->Graphics->DrawLine(lapiz_J1, trazo_DOS_inicio_j1, trazo_DOS_final_j1);
					   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_DOS_inicio_j1);


				   }
				   else {
					   if (Ecuacion_j1->get_TresTres() == 1)
					   {
						   //Derecha

						   trazo_UNO_inicio_j1 = Point(660, 280);
						   trazo_UNO_final_j1 = Point(660, 330);
					   }
					   else
					   {
						   // Izquierda

						   trazo_UNO_inicio_j1 = Point(550, 280);
						   trazo_UNO_final_j1 = Point(550, 330);
					   }



					   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_UNO_final_j1);


					   if (Ecuacion_j1->get_DosDos() == 0)
					   {
						   /*izquierda*/
						   trazo_DOS_inicio_j1 = Point(550, 280);
						   trazo_DOS_final_j1 = Point(550, 230);
					   }
					   else {

						   //* Derecha
						   trazo_DOS_inicio_j1 = Point(660, 280);
						   trazo_DOS_final_j1 = Point(660, 230);
					   }



					   e->Graphics->DrawLine(lapiz_J1, trazo_DOS_inicio_j1, trazo_DOS_final_j1);
					   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_DOS_inicio_j1);
				   }

			   }
			   else
			   {
				   trazo_UNO_inicio_j1 = Point(550, 330);
				   trazo_UNO_final_j1 = Point(660, 330);
				   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_UNO_final_j1);


				   if (Ecuacion_j1->get_DosDos() == 1)
				   {
					   //Derecha
					   trazo_DOS_inicio_j1 = Point(660, 330);
					   trazo_DOS_final_j1 = Point(660, 230);

				   }
				   else
				   {
					   //Izquierda
					   trazo_DOS_inicio_j1 = Point(550, 330);
					   trazo_DOS_final_j1 = Point(550, 230);
				   }

				   e->Graphics->DrawLine(lapiz_J1, trazo_DOS_inicio_j1, trazo_DOS_final_j1);
				   e->Graphics->DrawLine(lapiz_J1, trazo_UNO_inicio_j1, trazo_DOS_inicio_j1);
			   }


			   //Jugador2
			   if (Ecuacion_j2->get_q() != 0)
			   {

				   //
				   if (Ecuacion_j2->get_Uno() == "1")
				   {


					   if (Ecuacion_j2->get_UnoUno() == 1)
					   {
						   //Arriba
						   trazo_UNO_inicio_j2 = Point(660, 230);
						   trazo_UNO_final_j2 = Point(550, 230);

					   }
					   else
					   {

						   ////Abajo

						   trazo_UNO_inicio_j2 = Point(660, 330);
						   trazo_UNO_final_j2 = Point(550, 330);

					   }
					   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_UNO_final_j2);

					   /********************************************************************************/


					   if (Ecuacion_j2->get_TresTres() == 1)
					   {
						   //Arriba
						   trazo_DOS_inicio_j2 = Point(660, 230);
						   trazo_DOS_final_j2 = Point(550, 230);
					   }
					   else
					   {
						   //Abajo
						   trazo_DOS_inicio_j2 = Point(660, 330);
						   trazo_DOS_final_j2 = Point(550, 330);
					   }
					   e->Graphics->DrawLine(lapiz_J2, trazo_DOS_inicio_j2, trazo_DOS_final_j2);

					   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_DOS_inicio_j2);

				   }
				   else {
					   if (Ecuacion_j2->get_DosDos() == 1)
					   {
						   //Arriba
						   trazo_UNO_inicio_j2 = Point(605, 230);
						   trazo_UNO_final_j2 = Point(660, 230);

					   }
					   else
					   {
						   //Abajo
						   trazo_UNO_inicio_j2 = Point(605, 329);
						   trazo_UNO_final_j2 = Point(660, 329);
					   }
					   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_UNO_final_j2);


					   if (Ecuacion_j2->get_TresTres() == 1)
					   {
						   //Arriba
						   trazo_DOS_inicio_j2 = Point(605, 230);
						   trazo_DOS_final_j2 = Point(550, 230);
					   }
					   else
					   {
						   //Abajo
						   trazo_DOS_inicio_j2 = Point(605, 329);
						   trazo_DOS_final_j2 = Point(550, 329);
					   }

					   e->Graphics->DrawLine(lapiz_J2, trazo_DOS_inicio_j2, trazo_DOS_final_j2);

					   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_DOS_inicio_j2);
				   }
			   }
			   else
			   {
				   trazo_UNO_inicio_j2 = Point(550, 230);
				   trazo_UNO_final_j2 = Point(550, 330);



				   //Arriba

				   if (Ecuacion_j2->get_DosDos() == 1)//Arriba
				   {
					   trazo_DOS_inicio_j2 = Point(550, 230);
					   trazo_DOS_final_j2 = Point(660, 230);
				   }
				   else
				   {
					   trazo_DOS_inicio_j2 = Point(550, 330);
					   trazo_DOS_final_j2 = Point(660, 330);
				   }

				   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_UNO_final_j2);
				   e->Graphics->DrawLine(lapiz_J2, trazo_DOS_inicio_j2, trazo_DOS_final_j2);

				   e->Graphics->DrawLine(lapiz_J2, trazo_UNO_inicio_j2, trazo_DOS_inicio_j2);




			   }




		   }

	private: System::Void btnRestaurar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnMinimizar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Minimized;

	}
	private: System::Void btnRestaurar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		btnRestaurar->Visible = false;
		btnMaximizar->Visible = true;
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
	}
	private: System::Void btnCerrar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void panelCabecera_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}
