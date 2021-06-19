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