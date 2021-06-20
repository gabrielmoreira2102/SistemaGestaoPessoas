#include "SistGes.hpp"

SistGes::SistGes()
{
	
}
void SistGes::adicionaVendedor(string n, string end, string tel, float salB, float v)
{
	vendedores.push_back(Vendedor(n, end, tel, salB, v));
}
void SistGes::adicionaAdministrador(string n, string end, string tel, float salB, float ac)
{
	administradores.push_back(Administrador(n, end, tel, salB, ac));
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
void SistGes::Detalhes()
{
	int a = 10, b = 0, c = 0, d = 0, s = 0;
	float sala, var;
	string no, nome, tel, ende;
	while (a != 0)
	{
		cout << "\n1- Lista de vendedores: " << endl;
		cout << "\n2- Lista de fornecedores: " << endl;
		cout << "\n3- Lista de admistradores: " << endl;
		cout << "\n4- Lista de operarios: " << endl;
		cout << "\n5- Relatorio: " << endl;
		cout << "\n0- Sair: " << endl;
		cin >> a;

		switch (a)
		{
		
		case 1:
			for(int i = 0; i <vendedores.size(); i++)
			{
				vendedores[i].Detalhes();
				cout << " Valor de vendas: " << vendedores[i].getValVenda() << endl;
				b += vendedores[i].getImposto();
				b += vendedores[i].getSalario();

			}
			cout << " Custo total dos vendedores: " << b << endl;
			break;
		
		case 2:
			for(int i = 0; i < fornecedores.size(); i++)
			{
				fornecedores[i].Detalhes();
				s += fornecedores[i].getSaldo();
			}
			cout << " Saldo total dos fornecedores: " << s << endl;
			break;
		
		case 3:
			for(int i = 0; i <administradores.size(); i++)
			{
				administradores[i].Detalhes ();
				cout << " Valor de ajuda de custos: " << administradores[i].getAjCusto() << endl;
				c += administradores[i].getImposto();
				c += administradores[i].getSalario();
			}
			cout << " Custo total dos administradores: " << c << endl;
			break;
			
		case 4:
			for(int i = 0 ; i <operarios.size(); i++)
			{
				operarios[i].Detalhes();
				cout << " Valor de producao: " << operarios[i].getValProd() << endl;
				d += operarios[i].getImposto();
				d += operarios[i].getSalario();
			}
			cout << " Custo total dos operarios: " << d << endl;
			break;
		
		case 5:
			relatorio();
			break;
		}
	}
}