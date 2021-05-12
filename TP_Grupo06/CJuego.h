#pragma once

#include "CJugador.h"
#include <string>
#include "CEcuacion.h"
using namespace System;
using namespace std;
class CJuego
{
private:
	CJugador** listaJugadores;
	int cantidad;
	bool Estrategia; //mixta = 0 y pura = 0;
	int tipoJuego;//cuando un juego inicia siempre es pura(ES DECIR, 3x3)
public:
	CJuego()
	{
		tipoJuego = 3; // X Y Z CAMBIO 
		listaJugadores = nullptr;
		cantidad = 0;
		Estrategia = false;
	}
	void agregarJugador(CJugador* j)
	{
		cantidad++;
		CJugador** tmp = new CJugador * [cantidad];
		tmp[cantidad - 1] = j;
		for (int i = 0; i < cantidad - 1; i++)
		{
			tmp[i] = listaJugadores[i];
		}
		listaJugadores = tmp;
		tmp = nullptr;
	}

	void agrego2Jugadores()
	{

		for (int i = 0; i < 2; i++)
		{
			agregarJugador(new CJugador(tipoJuego, 5555));// PRIMERO AGREGO UN JUGADOR
			listaJugadores[i]->rrellenarEstrategias();// LUEGO AGREGO LAS ESTRATEGIAS DE ESE JUGADOR

		}
	};

	void mostrarPruebas()
	{

		for (int x = 0; x < 2; x++)// debe recorger �ra dos jugadores
		{
			cout << "Jugador " << x + 1 << " : " << endl;
			for (int y = 0; y < tipoJuego; y++)
			{
				cout << "Estragia " << listaJugadores[x]->getListaEstrategias()[y]->getPrueba() << " :";

				for (int z = 0; z < tipoJuego; z++)
				{
					cout << listaJugadores[x]->getListaEstrategias()[y]->getListaNumeros()[z]->getNumero();
					cout << "'" << listaJugadores[x]->getListaEstrategias()[y]->getListaNumeros()[z]->getEstado() << "'  ";

				}
				cout << endl;
			}
			cout << endl << endl << endl;
		}

		if (Estrategia == 1) { cout << "Coordenadas de equilibrio: " << mostrarCoordenadaEquilibrio(); }


	}


	///*******************

	void llenarTodo()
	{
		//PRUEBA PARA MIXTA
		int vector[] = { 3,1,0,2,2,3,4,1 };//Mixta version 1
		int contador = 0;
		//*******************

		Random^ ale = gcnew Random;
		int* tmp = new int();
		for (int x = 0; x < 2; x++)// RECORRE CADA JUGADOR
		{
			for (int y = 0; y < tipoJuego; y++)// RECORRE CADA ESTRATEGIA DE UN JUGADOR
			{

				for (int z = 0; z < tipoJuego; z++)// AGREGA CADA NUMERO A ESTRATEGIA
				{
					*tmp = ale->Next(1, 12); // RANGO EN EL RANDOM


					listaJugadores[x]->getListaEstrategias()[y]->agregarNumero(new CNumero(*tmp));
					contador++;

				}
			}
			if (x == 1) {
				determinarFilaDominada(this->listaJugadores);
			}	
			listaJugadores[x]->buscarMayorFilaEstrategias();
			/******************************/
		}
	}
	string mostrarCoordenadaEquilibrio()
	{
		string cadena = "";
		int ordenada, abscisa;

		ordenada = listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[0]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[0]->getEstado();


		if (ordenada == 1 && abscisa == 1)
		{
			cadena += "(" + to_string(listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[0]->getNumero()) + "," +
				to_string(listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[0]->getNumero()) + ")";

		}


		ordenada = listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[1]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[0]->getEstado();

		if (ordenada == 1 && abscisa == 1)
		{

			cadena += "(" + to_string(listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[1]->getNumero()) + "," +
				to_string(listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[0]->getNumero()) + ")";

		}


		ordenada = listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[0]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[1]->getEstado();

		if (ordenada == 1 && abscisa == 1)
		{

			cadena += "(" + to_string(listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[0]->getNumero()) + "," +
				to_string(listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[1]->getNumero()) + ")";

		}
		ordenada = listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[1]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[1]->getEstado();


		if (ordenada == 1 && abscisa == 1)
		{

			cadena += "(" + to_string(listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[1]->getNumero()) + "," +
				to_string(listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[1]->getNumero()) + ")";
		}


		///---------------------------------------------- Z -----------------------------------------------
		ordenada = listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[2]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[0]->getEstado();

		if (ordenada == 1 && abscisa == 1)
		{

			cadena += "(" + to_string(listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[2]->getNumero()) + "," +
				to_string(listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[0]->getNumero()) + ")";

		}
		ordenada = listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[2]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[1]->getEstado();


		if (ordenada == 1 && abscisa == 1)
		{

			cadena += "(" + to_string(listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[2]->getNumero()) + "," +
				to_string(listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[1]->getNumero()) + ")";
		}

		return cadena;
	}

	void Detectar_tipo_Estrategia()
	{
		int CantEquilibrio = 0;
		int ordenada, abscisa;
		ordenada = listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[0]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[0]->getEstado();
		if (ordenada == 1 && abscisa == 1) { CantEquilibrio++; }

		ordenada = listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[1]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[0]->getEstado();
		if (ordenada == 1 && abscisa == 1) { CantEquilibrio++; }


		ordenada = listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[0]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[1]->getEstado();
		if (ordenada == 1 && abscisa == 1) { CantEquilibrio++; }

		ordenada = listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[1]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[1]->getEstado();
		if (ordenada == 1 && abscisa == 1) { CantEquilibrio++; }

		ordenada = listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[2]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[0]->getEstado();
		if (ordenada == 1 && abscisa == 1) { CantEquilibrio++; }

		ordenada = listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[2]->getEstado();
		abscisa = listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[1]->getEstado();
		if (ordenada == 1 && abscisa == 1) { CantEquilibrio++; }

		if (CantEquilibrio >= 1) { Estrategia = true; }
	}
	bool get_estrategia() { return Estrategia; }


	void crearEcuacion()
	{
		int a, b, c, d;
		CEcuacion* ecua;
		a = listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[0]->getNumero();
		b = listaJugadores[0]->getListaEstrategias()[0]->getListaNumeros()[1]->getNumero();
		c = listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[0]->getNumero();
		d = listaJugadores[0]->getListaEstrategias()[1]->getListaNumeros()[1]->getNumero();

		ecua = new CEcuacion(a, b, c, d, 1);

		a = listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[0]->getNumero();
		b = listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[0]->getNumero();
		c = listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[1]->getNumero();
		d = listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[1]->getNumero();

		ecua = new CEcuacion(a, b, c, d, 2);

		cout << "A: " << a << endl;
		cout << "B: " << b << endl;
		cout << "C: " << c << endl;
		cout << "D: " << d << endl;

		string cadena = ecua->toda_ecuacion();
		cout << cadena << endl;
		//cout << ecua->pruebaRangos();
	}

	CJugador** getListaJugadores() { return listaJugadores; };


	////*****************************

	void determinarFilaDominada(CJugador** listaJugadores) {

		int numeroAXY0 = this->listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[0]->getNumero();
		int numeroAXY1 = this->listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[0]->getNumero();
		int numeroBXY0 = this->listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[1]->getNumero();
		int numeroBXY1 = this->listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[1]->getNumero();

		int numeroAYZ1 = this->listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[0]->getNumero();
		int numeroAYZ2 = this->listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[0]->getNumero();
		int numeroBYZ1 = this->listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[1]->getNumero();
		int numeroBYZ2 = this->listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[1]->getNumero();

		int numeroAXZ0 = this->listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[0]->getNumero();
		int numeroAXZ2 = this->listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[0]->getNumero();
		int numeroBXZ0 = this->listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[1]->getNumero();
		int numeroBXZ2 = this->listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[1]->getNumero();

		if (numeroAXY0 > numeroAXY1) { this->listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[0]->setNumeromenor(true); }
		if (numeroBXY0 > numeroBXY1) { this->listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[1]->setNumeromenor(true); }

		if (numeroAYZ1 > numeroAYZ2) { this->listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[0]->setNumeromenor(true); }
		if (numeroBYZ1 > numeroBYZ2) { this->listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[1]->setNumeromenor(true); }

		if (numeroAXZ0 > numeroAXZ2) { this->listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[0]->setNumeromenor(true); }
		if (numeroBXZ0 > numeroBXZ2) { this->listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[1]->setNumeromenor(true); }


		if (numeroAXY0 < numeroAXY1) { this->listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[0]->setNumeromenor(true); }
		if (numeroBXY0 < numeroBXY1) { this->listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[1]->setNumeromenor(true); }

		if (numeroAYZ1 < numeroAYZ2) { this->listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[0]->setNumeromenor(true); }
		if (numeroBYZ1 < numeroBYZ2) { this->listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[1]->setNumeromenor(true); }

		if (numeroAXZ0 < numeroAXZ2) { this->listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[0]->setNumeromenor(true); }
		if (numeroBXZ0 < numeroBXZ2) { this->listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[1]->setNumeromenor(true); }


		if (this->listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[0]->getNumeromenor() == true && this->listaJugadores[1]->getListaEstrategias()[0]->getListaNumeros()[1]->getNumeromenor() == true) {
			listaJugadores[1]->getListaEstrategias()[0]->setFilaDominada(true);
		}

		if (this->listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[0]->getNumeromenor() == true && this->listaJugadores[1]->getListaEstrategias()[1]->getListaNumeros()[1]->getNumeromenor() == true) {
			this->listaJugadores[1]->getListaEstrategias()[1]->setFilaDominada(true);
		}
		if (this->listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[0]->getNumeromenor() == true && this->listaJugadores[1]->getListaEstrategias()[2]->getListaNumeros()[1]->getNumeromenor() == true) {
			this->listaJugadores[1]->getListaEstrategias()[2]->setFilaDominada(true);
		}
	}

};