#include "Administrador.hpp"

Administrador::Administrador(string n, string end, float s, float ac)
{
	nome = n;
	endereco = end;
	salarioBase = salB;
	ajudacusto = ac;
	CalcularSalario(s);
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