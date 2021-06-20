#include "Empregado.hpp"
#include <vector>

#ifndef Vendedor_HPP
#define Vendedor_HPP

class Vendedor : public Empregado
{
public:
	Vendedor();
	Vendedor(string n, string end, string tel, float salB, float v);
	void adicionaVendedor(string n, string end, string tel, float salB, float v);
	void CalcularSalario(float s);
	void Adiciona();
	void Atualiza();
	
	float getValVenda();
	float getSalario();
	float getImposto();
	
	void setValVenda(float v);

private:
	vector <Vendedor> vendedores;
	float valVenda;
	float comissao;
};
#endif
