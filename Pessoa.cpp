#include "Pessoa.hpp"

Pessoa::Pessoa()
{

}
Pessoa::Pessoa(string n, string end, string tel)
{
	nome = n;
	endereco = end;
	telefone = tel;
}
string Pessoa::getNome()
{
	return nome;
}
string Pessoa::getEndereco()
{
	return endereco;
}
string Pessoa::getTelefone()
{
	return telefone;
}
void Pessoa::setNome(string n)
{
	nome = n; 
}
void Pessoa::setEndereco(string end)
{
	endereco = end;
}
void Pessoa::setTelefone(string tel)
{
	telefone = tel;
}
void Pessoa::Detalhes()
{
	cout << " Nome: " << nome << endl;
	cout << " Endereco: " << endereco << endl;
	cout << " Telefone: " << telefone << endl;
}
void Pessoa::Atualiza()
{
	cout << " Nome: " << nome << endl;
	cout << " Endereco: " << endereco << endl;
	cout << " Telefone: " << telefone << endl;
}
void Pessoa::Adiciona()
{
	cout << " Nome: " << nome << endl;
	cout << " Endereco: " << endereco << endl;
	cout << " Telefone: " << telefone << endl;
}