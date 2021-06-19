#include "Empregado.hpp"

#ifndef Operario_HPP
#define Operario_HPP

class Operario : public Empregado
{
public:
	Operario(string n, string end, float s, float p);
	void CalcularSalario(float s);

	float getValProd();
	float getSalario();
	float getImposto();

	void setProduto(float p);

private:
	float valProd;
	float comissao;
};
#endif