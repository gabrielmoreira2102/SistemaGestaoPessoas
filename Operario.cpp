#include "Operario.hpp"
Operario::Operario()
{

}
Operario::Operario(string n, string end, string tel, float salB, float p)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	salarioBase = salB;
	valProd = p;
}
void Operario::CalcularSalario(float s)
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
float Operario::getSalario()
{
	return salB;
}
float Operario::getImposto()
{
	return imposto;
}
float Operario::getValProd()
{
	return valProd;
}
void Operario::setProduto(float p)
{
	valProd = p;
	CalcularSalario(salarioBase);
}
void Operario::Adiciona()
{
	cout << " Digite o nome: ";	cin >> nome;
	cout << " Digite o endereco: "; cin >> endereco;
	cout << " Digite o telefone "; cin >> telefone;
	cout << " Digite o salario base: "; cin >> salarioBase;
	cout << " Digite o valor da producao: "; cin >> valProd;
	adicionaOperario (nome, endereco, telefone, salB, valProd);
}
int t = 0;
void Operario::Atualiza()
{
	t = 0;
	for(int i = 0; i < operarios.size(); i++)
	{
		cout << "\nNome do vendedor : " << operarios[i].getNome() << endl;
	}
		cout << "\nDigite o nome do vendedor: "; cin >> nome;
	for(int i = 0; i < operarios.size(); i++)
	{
		if (nome == operarios[i].getNome ())
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
					operarios[i].setNome(nome);
					cout << "\nNome atualizado com sucesso: " << operarios[i].getNome() << endl;
				}
				if (t == 2)
				{
					cout << "\nDigite o novo salario base: "; cin >> salB;
					operarios[i].CalcularSalario(salB);
					cout << "\nValor do salario base atualizado com sucesso: " << operarios[i].getSalario() << endl;
				}
				if (t == 3)
				{
					cout << "\nDigite o novo valor da producao: "; cin >> valProd;
					operarios[i].setProduto(valProd);
					cout << "\nValor da producao atualizado com sucesso: " << operarios[i].getValProd() << endl;
				}
			break;	
			}
		}	
	}
}