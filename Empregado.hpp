#include "Pessoa.hpp"

#ifndef Empregado_HPP
#define Empregado_HPP

class Empregado : public Pessoa
{
public:
	Empregado();

	void virtual CalcularSalario (float sb);

	float getCodSetor();
	float getSalario();
	float getImposto();

	void setCodSetor(int cod);
	void setSalario(float salB);
	void setImposto(float imp);
	
protected:
	int codigoSetor;
	float salarioBase;
	float imposto;
	float salB;

}