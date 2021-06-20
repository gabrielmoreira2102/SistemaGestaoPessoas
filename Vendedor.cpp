#include "Vendedor.hpp"

Vendedor::Vendedor()
{

}
Vendedor::Vendedor(string n, string end, string tel, float salB, float v)
{
	nome = n;
	endereco = end;
	telefone = tel;
	salarioBase = salB;
	valVenda = v;
}
void Vendedor::CalcularSalario(float s)
{
	salarioBase = s;

	if(salarioBase <= 1903.98)
	{
		salB = salarioBase + comissao;
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
float Vendedor::getSalario()
{
	return salB;
}
float Vendedor::getImposto()
{
	return imposto;
}
float Vendedor::getValVenda()
{
	return valVenda;
}
void Vendedor::setValVenda(float v)
{
	valVenda = v;
	CalcularSalario(salarioBase);
}
void Vendedor::Adiciona()
{
	cout << " Digite o nome: ";	cin >> nome;
	cout << " Digite o endereco: "; cin >> endereco;
	cout << " Digite o telefone "; cin >> telefone;
	cout << " Digite o salario base: "; cin >> salarioBase;
	cout << " Digite o valor de vendas: "; cin >> valVenda;
	adicionaVendedor (nome, endereco, telefone, salB, valVenda);
}
int t = 10;
void Vendedor::Atualiza()
{
	t = 10;
	for(int i = 0; i < vendedores.size(); i++)
	{
		cout << "\nNome do vendedor : " << vendedores[i].getNome() << endl;
	}
		cout << "\nDigite o nome do vendedor: "; cin >> nome;
	for(int i = 0; i < vendedores.size(); i++)
	{
		if (nome == vendedores[i].getNome ())
		{
			while(t != 0)
			{
				cout << "\n1 - Atualizar nome: " << endl;
				cout << "\n2 - Atualizar salario: " << endl;
				cout << "\n3 - Atualizar Valor de vendas: " << endl;
				cout << "\n0 - Sair: " << endl;
				cin >> t;
				if (t == 1 )
				{
					cout << "\nDigite o novo nome: "; cin >> nome;
					vendedores[i].setNome(nome);
					cout << "\nNome atualizado com sucesso: " << vendedores[i].getNome() << endl;
				}
				if (t == 2)
				{
					cout << "\nDigite o novo salario base: "; cin >> salB;
					vendedores[i].CalcularSalario(salB);
					cout << "\nValor do salario base atualizado com sucesso: " << vendedores[i].getSalario() << endl;
				}
				if (t == 3)
				{
					cout << "\nDigite o novo valor de vendas: "; cin >> valVenda;
					vendedores[i].setValVenda(valVenda);
					cout << "\nValor de venda atualizado com sucesso: " << vendedores[i].getValVenda() << endl;
				}
			break;	
			}
		}	
	}
}