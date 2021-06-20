#include "Vendedor.hpp"

Vendedor::Vendedor()
{

}
Vendedor::Vendedor(string n, string end, string tel, float salB, float s, float v)
{
	nome = n;
	endereco = end;
	telefone = tel;
	salarioBase = salB;
	valVenda = v;
	CalcularSalario(s);
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