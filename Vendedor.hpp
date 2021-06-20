#include "Empregado.hpp"

#ifndef Vendedor_HPP
#define Vendedor_HPP

class Vendedor : public Empregado
{
public:
	Vendedor();
	Vendedor(string n, string end, string tel, float salB, float s, float v);
	void CalcularSalario(float s);

	float getValVenda();
	float getSalario();
	float getImposto();

	void setValVenda(float v);

private:
	float valVenda;
	float comissao;
};
#endif
