#include "Pessoa.hpp"
#include <vector>

#ifndef Fornecedor_HPP
#define Fornecedor_HPP

class Fornecedor : public Pessoa
{
public:
	Fornecedor();
	Fornecedor(string n, string end, string tel, float saldo);
	void adicionaFornecedor(string n, string end, string tel, float saldo);
	void ObterSaldo();
	void Detalhes();
	void Adiciona();
	void Atualiza();


	float getSaldo();
	float getCredito();
	float getDivida();

	void setCredito(float cred);
	void setDivida(float div);
	void setSaldo(float saldo);

private:
	vector <Fornecedor> fornecedores;
	float credito;
	float divida;
	float saldo;
};
#endif