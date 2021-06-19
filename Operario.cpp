#include "Operario.hpp"

Operario::Operario(string n, string end, float s, float p)
{
	nome = n;
	endereco = end;
	salarioBase = salB;
	valProd = p;
	CalcularSalario(s);
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