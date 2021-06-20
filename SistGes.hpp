#include "Vendedor.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include <vector>

#ifndef SistGes_HPP
#define SistGes_HPP

class SistGes
{
public:
	SistGes();
	void adicionaVendedor(string n, string end, string tel, float s, float v);
	void adicionaAdministrador(string n, string end, string tel, float s, float ac);
	void adicionaFornecedor(string n, string end, string tel, float saldo);
	void adicionaOperario(string n, string end, string tel, float salB, float p);
	void adicionaEmpregado(string n, string end, float cod, float salB);

	void Detalhes();

private:
	void relatorio();
	string nome;
	string endereco;
	string telefone;
	vector <Vendedor> vendedores;
	vector <Administrador> administradores;
	vector <Fornecedor> fornecedores;
	vector <Operario> operarios;
	float lucro;
	float despesa;
	float recebiveis;
	float tributos;
};
#endif

