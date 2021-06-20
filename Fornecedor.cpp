#include "Fornecedor.hpp"

Fornecedor::Fornecedor()
{
		
}
Fornecedor::Fornecedor(string n, string end, string tel, float saldo)
{
	nome = n;
	endereco = end;
	telefone = tel;
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
void Fornecedor::Adiciona()
{
	cout << " Digite o nome: ";	cin >> nome;
	cout << " Digite o endereco: "; cin >> endereco;
	cout << " Digite o telefone "; cin >> telefone;
	cout << " Digite o saldo do fornecedor: "; cin >> saldo;
	adicionaFornecedor (nome, endereco, telefone, saldo);
}
int p = 10;
void Fornecedor::Atualiza()
{
	p = 10;
	for(int i = 0; i < fornecedores.size(); i++)
	{
		cout << "\nNome do vendedor : " << fornecedores[i].getNome() << endl;
	}
		cout << "\nDigite o novo nome do fornecedor: "; cin >> nome;
	for(int i = 0; i < fornecedores.size(); i++)
	{
		if (nome == fornecedores[i].getNome ())
		{
			while(p != 0)
			{
				cout << "\n1 - Atualizar nome: " << endl;
				cout << "\n2 - Atualizar o saldo do fornecedor: " << endl;
				cout << "\n0 - Sair: " << endl;
				cin >> p;
				if (p == 1 )
				{
					cout << "\nDigite o novo nome: "; cin >> nome;
					fornecedores[i].setNome(nome);
					cout << "\nNome atualizado com sucesso: " << fornecedores[i].getNome() << endl;
				}
				if (p == 2)
				{
					cout << "\nDigite o novo saldo do fornecedor: "; cin >> saldo;
					fornecedores[i].setSaldo(saldo);
					cout << "\nValor de venda atualizado com sucesso: " << fornecedores[i].getSaldo() << endl;
				}
			break;	
			}
		}	
	}
}