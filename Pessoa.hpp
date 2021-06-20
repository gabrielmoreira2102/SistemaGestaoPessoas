#include <iostream>
using namespace std;

#ifndef Pessoa_HPP
#define Pessoa_HPP

class Pessoa
{
public:
	Pessoa();
	Pessoa(string n, string end, string tel);
	void virtual Detalhes();
	void virtual Adiciona() = 0;
	void virtual Atualiza() = 0;

	string getNome();
	string getEndereco();
	string getTelefone();

	void setNome (string n);
	void setEndereco(string end);
	void setTelefone(string tel);

protected:
	string nome;
	string endereco;
	string telefone;
};
#endif