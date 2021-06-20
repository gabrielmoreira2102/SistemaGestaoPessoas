#include "SistGes.hpp"

void SistGes::adicionaVendedor(string n, string end, float s, float v)
{
	vendedores.push_back(Vendedor(n, end, s, v));
}
void SistGes::adicionaAdministrador(string n, string end, float s, float ac)
{
	administradores.push_back(Administrador(n, end, s, ac));
}
void SistGes::adicionaFornecedor(string n, string end, string tel, float cred, float div)
{	
	fornecedores.push_back(Fornecedor(n, end, tel, cred, div));
}
void SistGes::adicionaOperario(string n, string end, float s, float p)
{
	operarios.push_back(Operario(n, end, s, p));
}
void SistGes::adicionaEmpregado(string n, string end, float cod, float salB)
{
	empregados.push_back(Operario(n, end, cod, salB));
}