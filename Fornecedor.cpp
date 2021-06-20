#include "Fornecedor.hpp"

Fornecedor::Fornecedor()
{
		
}
Fornecedor::Fornecedor(string n, string end, string tel, float cred, float div)
{
	nome = n;
	endereco = end;
	telefone = tel;
	credito = cred;
	divida = div;
	ObterSaldo(); 
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
void Fornecedor::Detalhes()
{
	cout << " Nome: " << nome << endl;
	cout << " Endereco: " << endereco << endl;
	cout << " Telefone: " << telefone << endl;
	cout << " Saldo: " << saldo << endl;
	cout << endl;
}
