#pragma once
class CNumero
{
private:
	int numero;
	bool estado;
	bool numeromenor;
public:
	CNumero(int numero)
	{
		this->numero = numero;
		estado = false;
		numeromenor = false;
	}
	int getNumero()
	{
		return numero;
	}
	bool getEstado() { return estado; }
	void setEstado(bool estado) { this->estado = estado; }
	bool getNumeromenor() { return numeromenor; }
	void setNumeromenor(bool numeromenor) { this->numeromenor = numeromenor; }
	void setNumero(int numero) { this->numero = numero; }

};