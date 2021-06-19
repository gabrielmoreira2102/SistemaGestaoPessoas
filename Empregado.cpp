#include "Empregado.hpp"

Empregado::Empregado()
{

}
float Empregado::getCodSetor()
{
	return codigoSetor;
}
float Empregado::getSalario()
{
	return salB;
}
float Empregado::getImposto()
{
	return imposto;
}
void Empregado::CalcularSalario(float sb)
{
	salarioBase = sb;

	if(salariobase <= 1903,98)
	{
		salB = salariobase;
		imposto = 0;
	}
	if(salariobase> 1903,99 && salariobase <= 2826,65)
	{
		salB = salariobase - salariobase * 0,075;
		imposto = salariobase - salB;
	}
	if(salariobase> 2826,66 && salariobase <= 3751,05)
	{
		salB = salariobase - salariobase * 0,15;
		imposto = salariobase - salB;
	}
	if(salariobase> 3751,05 && salariobase <= 4664,68)
	{
		salB = salariobase - salariobase * 0,225;
		imposto = salariobase - salB;
	}
	if(salariobase> 4664,68)
	{
		salB = salariobase - salariobase * 0,275;
		imposto = salariobase - salB;
	}



}