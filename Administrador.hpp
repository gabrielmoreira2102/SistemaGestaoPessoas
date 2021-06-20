#include "Empregado.hpp"

#ifndef Administrador_HPP
#define Administrador_HPP

class Administrador : public Empregado
{
public:
	Administrador(string n, string end, string tel, float s, float ac);
	void CalcularSalario(float s);
		
	float getAjCusto();
	float getSalario();
	float getImposto();

	void setAjCusto(float ac);

private:
	float ajudacusto;
};
#endif