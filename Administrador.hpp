#include "Empregado.hpp"

#ifndef Administrador_HPP
#define Administrador_HPP

class Administrador : public Empregado, Pessoa
{
public:
	Administrador(string n, string end, float s, float ac);
	void CalcularSalario(float s);
	
	float getAjCusto();
	float getSalario();
	float getImposto();

	void setAjCusto(float ac);

private:
	float ajudacusto;
};
#endif