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
void Empregado::setCodSetor(int cod)
{
	codigoSetor = cod;
}
void Empregado::setSalario(float salB)
{
	salarioBase = salB;
}
void Empregado::setImposto(float imp)
{
	imposto = imp;
}
void Empregado::CalcularSalario(float sb)
{
	salarioBase = sb;

	if(salarioBase <= 1903.98)
	{
		salB = salarioBase;
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
void Empregado::Detalhes()
{
	cout << " Nome: " << nome << endl;
	cout << " Endereco: " << endereco << endl;
	cout << " Telefone: " << telefone << endl;
	cout << " Salario base: " << salarioBase << endl;
	cout << " Salario liquido: " << salB << endl;
	cout << " Tributos: " << imposto << endl;
}