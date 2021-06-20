#include "Administrador.hpp"

Administrador::Administrador(string n, string end, string tel, float salB, float ac)
{
	nome = n;
	endereco = end;
	telefone = tel;
	salarioBase = salB;
	ajudacusto = ac;
}
void Administrador::CalcularSalario(float s)
{
	salarioBase = s;

	if(salarioBase <= 1903.98)
	{
		salB = salarioBase + ajudacusto;
		imposto = 0;
	}
	if(salarioBase> 1903.99 && salarioBase <= 2826.65)
	{
		salB = salarioBase - salarioBase * 0.075;
		imposto = salarioBase - salB;
	}
	if(salarioBase> 2826.66 && salarioBase <= 3751.05)
	{
		salB = salarioBase - salarioBase * 0.15;
		imposto = salarioBase - salB;
	}
	if(salarioBase> 3751.05 && salarioBase <= 4664.68)
	{
		salB = salarioBase - salarioBase * 0.225;
		imposto = salarioBase - salB;
	}
	if(salarioBase> 4664.68)
	{
		salB = salarioBase - salarioBase * 0.275;
		imposto = salarioBase - salB;
	}
}
float Administrador::getSalario()
{
	return salB;
}
float Administrador::getImposto()
{
	return imposto;
}
float Administrador::getAjCusto()
{
	return ajudacusto;
}
void Administrador::setAjCusto(float ac)
{
	ajudacusto = ac;
	CalcularSalario(salarioBase);
}
void Administrador::Adiciona()
{
	cout << " Digite o nome: ";	cin >> nome;
	cout << " Digite o endereco: "; cin >> endereco;
	cout << " Digite o telefone "; cin >> telefone;
	cout << " Digite o salario base: "; cin >> salarioBase;
	cout << " Digite o valor de vendas: "; cin >> ajudacusto;
	adicionaAdministrador (nome, endereco, telefone, salB, ajudacusto);
}
int a = 10;
void Administrador::Atualiza()
{
	a = 10;
	for(int i = 0; i < administradores.size(); i++)
	{
		cout << "\nNome do vendedor : " << administradores[i].getNome() << endl;
	}
		cout << "\nDigite o novo nome do vendedor: "; cin >> nome;
	for(int i = 0; i < administradores.size(); i++)
	{
		if (nome == administradores[i].getNome ())
		{
			while(a != 0)
			{
				cout << "\n1 - Atualizar nome: " << endl;
				cout << "\n2 - Atualizar salario base: " << endl;
				cout << "\n3 - Atualizar valor da ajuda de custo: " << endl;
				cout << "\n0 - Sair: " << endl;
				cin >> a;
				if (a == 1 )
				{
					cout << "\nDigite o novo nome: "; cin >> nome;
					administradores[i].setNome(nome);
					cout << "\nNome atualizado com sucesso: " << administradores[i].getNome() << endl;
				}
				if (a == 2)
				{
					cout << "\nDigite o novo salario base: "; cin >> salB;
					administradores[i].CalcularSalario(salB);
					cout << "\nValor do salario base atualizado com sucesso: " << administradores[i].getSalario() << endl;
				}
				if (a == 3)
				{
					cout << "\nDigite o novo valor da ajuda de custo: "; cin >> ajudacusto;
					administradores[i].setAjCusto(ajudacusto);
					cout << "\nValor de venda atualizado com sucesso: " << administradores[i].getAjCusto() << endl;
				}
			break;	
			}
		}	
	}
}