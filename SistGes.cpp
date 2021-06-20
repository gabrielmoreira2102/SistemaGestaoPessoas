#include "SistGes.hpp"

SistGes::SistGes()
{

}
void SistGes::adicionaVendedor(string n, string end, string tel, float s, float v)
{
	vendedores.push_back(Vendedor(n, end, tel, s, v));
}
void SistGes::adicionaAdministrador(string nome, string endereco, string telefone, float s, float ac)
{
	administradores.push_back(Administrador(nome, endereco, telefone, s, ac));
}
void SistGes::adicionaFornecedor(string n, string end, string tel, float cred, float div)
{
	fornecedores.push_back(Fornecedor(n, end, tel, cred, div));
}
void SistGes::adicionaOperario(string n, string end, string tel, float s, float p)
{
	operarios.push_back(Operario(n, end, tel, s, p));
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
	cout << "--------------------------------------------------------------" << endl;
	cout << "|              RELATORIO GERAL                                " << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "|\tDespesa com funcionarios: " << despesa                       << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "|\tDespesa com tributos: " << tributos                          << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "|\tValor a receber de fornecedores: " << recebiveis             << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << endl;
}
void SistGes::Detalhes()
{
	int a = 10, b = 0, c = 0, d = 0;
	string n, end, tel;
	float s, v, p, cred, div, ac;
	while (a != 0)
	{
		cout << " 1- Vendedores cadastrados: " << endl;
		cout << " 2- Fornecedores cadastrados: " << endl;
		cout << " 3- Admistradores cadastrados: " << endl;
		cout << " 4- Operarios cadastrados: " << endl;
		cout << " 5- Relatorio: " << endl;
		cout << " 0- Sair: " << endl;
		cout << " Digite sua opcao: "; cin >> a;
		cout << endl;

		switch (a)
		{
		
		case 1:
			for(int i = 0; i <vendedores.size(); i++)
			{
				vendedores[i].Detalhes();
				cout << " Valor de vendas: " << vendedores[i].getValVenda() << endl;
				cout << endl;
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
			cout << endl;
			break;
		
		case 3:
			for(int i = 0; i <administradores.size(); i++)
			{
				administradores[i].Detalhes ();
				cout << " Valor de ajuda de custos: " << administradores[i].getAjCusto() << endl;
				cout << endl;
				c += administradores[i].getImposto();
				c += administradores[i].getSalario();
			}
			cout << " Custo total dos administradores: " << c << endl;
			cout << endl;
			break;
			
		case 4:
			for(int i = 0 ; i <operarios.size(); i++)
			{
				operarios[i].Detalhes();
				cout << " Valor de producao: " << operarios[i].getValProd() << endl;
				cout << endl;
				d += operarios[i].getImposto();
				d += operarios[i].getSalario();
			}
			cout << " Custo total dos operarios: " << d << endl;
			cout << endl;
			break;
		
		case 5:
			relatorio();
			break;

		case 0:
      cout << "\nObrigado por acessar o sistema! Ate a proxima..." << endl;
			cout << endl;
      break;

		default:
      cout << " numero invalido !!! " << endl;
			cout << endl;
      break;
		}
	}
}
void SistGes::Atualiza()
{
	int o = 10, t = 10;
	string n;
	float s, v, cred, div, ac, valProd;
	while (o != 0)
			{
				cout << " 1 - Vendedores: " << endl;
				cout << " 2 - Fornecedores: " << endl;
				cout << " 3 - Admistradores: " << endl;
				cout << " 4 - Operários: " << endl;
				cout << " 0 - Sair: " << endl;
				cin >> o;

				switch(o)
				{
				
				case 1:
					for(int i = 0; i < vendedores.size(); i++)
					{
						cout << " Nome do vendedor : " << vendedores[i].getNome() << endl;
					}
					cout << " Digite o nome do vendedor: "; cin >> n;
					for(int i = 0; i < vendedores.size(); i++)
					{
						if (n == vendedores[i].getNome ())
						{
							while(t != 0)
							{
								cout << " 1 - Atualizar nome: " << endl;
								cout << " 2 - Atualizar salario: " << endl;
								cout << " 3 - Atualizar Valor de vendas: " << endl;
								cout << " 0 - Sair: " << endl;
								cout << " Digite sua opcao: "; cin >> t;
								cout << endl;

								if (t == 1 )
								{
									cout << " Digite novo nome: "; cin >> n;
									vendedores[i].setNome(n);
									cout << " Nome atualizado com sucesso! " << vendedores[i].getNome() << endl;
								}
								if (t == 2)
								{
									cout << " Digite novo salario: "; cin >> s;
									vendedores[i].CalcularSalario(s);
									cout << " Salario atualizado com sucesso! " << vendedores[i].getSalario() << endl;
								}
								if (t == 3)
								{
									cout << " Digite novo valor vendas: "; cin >> v;
									vendedores[i].setValVenda(v);
									cout << " Valor de venda atualizado com sucesso! " << vendedores[i].getValVenda() << endl;

								}
							}
						}
						
					}
					break;
					
				case 2:
					for(int i = 0; i < fornecedores.size(); i++)
					{
						cout << " Nome do fornecedor: " << fornecedores[i].getNome() << endl;
					}
					cout << " Digite o nome do Fornecedor: "; cin >> n;
					for(int i = 0; i < fornecedores.size(); i++)
					{
						if(n == fornecedores[i].getNome()){

							while(t != 0)
							{
								cout << " 1 - Atualizar nome: " << endl;
								cout << " 2 - Atualizar o credito do fornecedor: " << endl;
								cout << " 3 - Atualizar a divida do fornecedor: " << endl;
								cout << " 0 - Sair: " << endl;
								cout << " Digite sua opcao: "; cin >> t;
								cout << endl;

								if(t == 1)
								{
									cout << " Digite novo nome: "; cin >> n;
									fornecedores[i].setNome (n);
									cout << " Nome atualizado com sucesso! " << fornecedores[i].getNome () << endl;
								}

								if(t == 2)
								{
									cout << " Digite novo credito: "; cin >> cred;
									fornecedores[i].setCredito(cred);
									cout << " Saldo atualizado com sucesso! " << fornecedores[i].getSaldo() << endl;
								}

								if(t == 3)
								{
									cout << " Digite novo valor da divida: "; cin >> div;
									fornecedores[i].setDivida(div);
									cout << " Saldo atualizado com sucesso! " << fornecedores[i].getSaldo() << endl;
								}
							}
						}
						
					}
					break;
					
				case 3:
					for(int i = 0; i < administradores.size(); i++)
					{
						cout << " Nome do Administrador: " << administradores[i].getNome () << endl;
					}
					cout << " Digite o novo nome do Administrador: "; cin >> n;
					for(int i = 0; i < administradores.size(); i++)
					{
						if(n == administradores[i].getNome())
						{
							while(t != 0)
							{
								cout << " 1 - Atualizar nome: " << endl;
								cout << " 2 - Atualizar salario: " << endl;
								cout << " 3 - Atualizar Valor de ajuda de custo: " << endl;
								cout << " 0 - Sair: " << endl;
								cout << " Digite sua opcao: "; cin >> t;
								cout << endl;

								if(t == 1)
								{	
									cout << " Digite o novo nome: "; cin >> n;
									administradores[i].setNome(n);
									cout << " Nome atualizado com sucesso! " << administradores[i].getNome() << endl;
								}

								if(t == 2)
								{							
									cout << " Digite o novo salario: "; cin >> s;
									administradores[i].CalcularSalario(s);	
									cout << " valor de salario atualizado com sucesso: " << administradores[i].getSalario() << endl;
								}

								if(t == 3)
								{			
									cout << " Digite novo valor de ajujda de custo: "; cin >> ac;
									administradores[i].setAjCusto(ac);		
									cout << " valor de ajuda de custo atualizado com sucesso: " << administradores[i].getAjCusto() << endl;
								}
							}
						
						}
						
					}
					break;
					
				case 4:
					for(int i = 0; i < operarios.size(); i++)
					{
						cout << " Nome do operador: " << operarios[i].getNome() << endl;
					}
					cout << " Digite o novo nome do operario: "; cin >> n;
					for(int i = 0; i < operarios.size(); i++)
					{
						if(n == operarios[i].getNome())
						{
							while(t != 0)
							{
								cout << " 1 - Atualizar nome: " << endl;
								cout << " 2 - Atualizar salario: " << endl;
								cout << " 3 - Atualizar Valor de producao " << endl;
								cout << " 0 - Sair: " << endl;
								cout << " Digite sua opcao: "; cin >> t;
								cout << endl;
								
								if(t == 1)
								{
									cout << " Digite novo nome: "; cin >> n;
									operarios[i].setNome(n);
									cout << " Nome atualizado com sucesso! " << operarios[i].getNome() << endl;
								}

								if(t == 2)
								{
									cout << " Digite o novo salario: "; cin >> s;
									operarios[i].CalcularSalario(s);
									cout << " salario atualizado com sucesso: " << operarios[i].getSalario() << endl;
								}

								if(t == 3)
								{
									cout << " Digite o novo valor da producao: "; cin >> valProd;
									operarios[i].setProduto(valProd);
									cout << " valor de producao atualizado com sucesso: " << operarios[i].getValProd() << endl;
								}
							}

						}
				}
				
				case 0:
      		cout << "\nObrigado por acessar o sistema! Ate a proxima..." << endl;
					cout << endl;
      		break;

				default:
      		cout << " numero invalido !!! " << endl;
					cout << endl;
      		break;
				}
			}
}
void SistGes::Adiciona()
{
	int q = 10;
	string n, end, tel;
	float s, v, div, cred, ac, p;
	while(q != 0 )
			{
				cout << " 1 - Adicionar vendedores: " << endl;
				cout << " 2 - Adicionar fornecedores: " << endl;
				cout << " 3 - Adicionar admistradores: " << endl;
				cout << " 4 - Adicionar operarios: " << endl;
				cout << " 0 - sair: " << endl;
				cout << " Digite sua opcao: "; cin >> p;
				cout << endl;

				if(q == 1)
				{
					cout << " Digite o nome: "; cin >> n;
					cout << " Digite endereco: "; cin >> end;
					cout << " Digite telefone "; cin >> tel;
					cout << " Digite Salario: "; cin >> s;
					cout << " Digite Valor de vendas: "; cin >> v;
					adicionaVendedor(n, end, tel, s, v);
				}

				if(q == 2)
				{
					cout << " Digite o nome: "; cin >> n;
					cout << " Digite o endereco: "; cin >> end;
					cout << " Digite o telefone "; cin >> tel;
					cout << " Digite o valor do credito: "; cin >> cred;
					cout << " Digite o valor da divida: "; cin >> div;
					adicionaFornecedor (n, end, tel, cred, div);
				}
				
				if(q == 3)
				{
					cout << " Digite o nome: "; cin >> n;
					cout << " Digite o endereco: "; cin >> end;
					cout << " Digite o telefone "; cin >> tel;
					cout << " Digite o salario: "; cin >> s;
					cout << " Digite o valor da ajuda de custo: "; cin >> ac;
					adicionaAdministrador (n, end, tel, s, ac);
				}
				
				if(q == 4)
				{
					cout << " Digite o nome: "; cin >> n;
					cout << " Digite endereco: "; cin >> end;
					cout << " Digite telefone "; cin >> tel;
					cout << " Digite Salario: "; cin >> s;
					cout << " Digite Valor de producao: "; cin >> p;
					adicionaOperario (n, end, tel, s, p);
				}
			}
}
	