#include "SistGes.hpp"

void SistGes::adicionaVendedor(string n, string end, string tel, float salB, float v)
{
	vendedores.push_back(Vendedor(n, end, tel, salB, v));
}
void SistGes::adicionaAdministrador(string n, string end, float s, float ac)
{
	administradores.push_back(Administrador(n, end, s, ac));
}
void SistGes::adicionaFornecedor(string n, string end, string tel, float saldo)
{
	fornecedores.push_back(Fornecedor(n, end, tel, saldo));
}
void SistGes::adicionaOperario(string n, string end, string tel, float salB, float p)
{
	operarios.push_back(Operario(n, end, tel, salB, p));
}
void SistGes::relatorio()
{
	for(int i = 0; i < operarios.size(); i++)
	{
	   despesa += operarios[i].getSalario();
	   tributos += operarios[i].getImposto();
	}
	for(int i = 0; i < administradores.size(); i++)
	{
		despesa += administradores[i].getSalario();
		tributos += administradores[i].getImposto();
	}
	for(int i = 0; i < vendedores.size(); i++)
	{
		despesa += vendedores[i].getSalario();
		tributos += vendedores[i].getImposto();
	}
	for(int i = 0; i < fornecedores.size(); i++)
	{
		if( 0 >fornecedores[i].getSaldo())
		recebiveis -= fornecedores[i].getSaldo();	
	}

	cout << "\nDespesa com funcionarios: " << despesa << endl;
	cout << "\nDespesa com tributos: " << tributos << endl;
	cout << "\nValor a receber de fornecedores: " << recebiveis << endl;
}