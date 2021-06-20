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
	void adicionaVendedor(string n, string end, float s, float v);
	void adicionaAdministrador(string n, string end, float s, float ac);
	void adicionaFornecedor(string n, string end, string tel, float cred, float div);
	void adicionaOperario(string n, string end, float s, float p);
	void adicionaEmpregado(string n, string end, float cod, float salB);

private:
	void financeiro();
	string nome;
	vector <Vendedor> vendedores;
	vector <Administrador> administradores;
	vector <Fornecedor> fornecedores;
	vector <Operario> operarios;
	vector <Empregado> empregados;




};
#endif

