#include "Fornecedor.hpp"

	Fornecedor::Fornecedor(string n, string end, string tel, float cred, float div, float saldo)
	{
		nome = n;
		endereco = end;
		telefone = tel;
		credito = cred;
		divida = div;
		this->saldo = saldo; 
	}
	float Fornecedor::getSaldo()
	{
		return saldo;
	}
	float Fornecedor::getCredito()
	{
		return credito;
	}
	float Fornecedor::getDivida()
	{
		return divida;
	}
	void Fornecedor::ObterSaldo()
	{
		saldo = credito - divida;
	}
	void Fornecedor::setCredito(float cred)
	{
		credito = cred;
		ObterSaldo();
	}
	void Fornecedor::setDivida(float div)
	{
		divida = div;
		ObterSaldo();
	}
	void Fornecedor::setSaldo(float saldo)
	{
		this->saldo = saldo;
	}
	void Fornecedor::Detalhes()
{
	cout << "\nNome: " << nome << endl;
	cout << "\nEndereco: " << endereco << endl;
	cout << "\nTelefone: " << telefone << endl;
	cout << "\nSaldo: " << saldo << endl;
}