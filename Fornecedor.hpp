#include "Pessoa.hpp"

#ifndef Fornecedor_HPP
#define Fornecedor_HPP

class Fornecedor : public Pessoa
{
public:
	Fornecedor();
	Fornecedor(string n, string end, string tel, float cred, float div);
	void ObterSaldo();
	void Detalhes();

	float getSaldo();
	float getCredito();
	float getDivida();

	void setCredito(float cred);
	void setDivida(float div);

private:
	float credito;
	float divida;
	float saldo;
};
#endif