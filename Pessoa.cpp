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
	cout << "\nNome: " << nome << endl;
	cout << "\nEndereco: " << endereco << endl;
	cout << "\nTelefone: " << telefone << endl;
}
void Pessoa::Adiciona()
{
	cout << "\nDigite o nome: " << nome << endl;
	cout << "\nDigite o endereco: " << endereco << endl;
	cout << "\nDigite o telefone: " << telefone << endl;
}
void Pessoa::Atualiza()
{
	cout << "\nDigite novo nome: "; cin >> nome;
	cout << "\nDigite novo endereco: "; cin >> endereco;
	cout << "\nDigite o telefone: "; cin >> telefone;
}