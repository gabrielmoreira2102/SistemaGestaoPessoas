#include "Empregado.hpp"

#ifndef Vendedor_HPP
#define Vendedor_HPP

class Vendedor : public Empregado
{
public:
	Vendedor(string n, string end, float s, float v);
	void CalcularSalario(float s);

	float getValVenda();
	float getSalario();
	float getImposto();

	void setVenda(float v);

private:
	float valVenda;
	float comissao;
};
#endif
}