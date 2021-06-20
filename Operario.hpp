#include "Empregado.hpp"
#include <vector>

#ifndef Operario_HPP
#define Operario_HPP

class Operario : public Empregado
{
public:
	Operario();
	Operario(string n, string end, string tel, float salB, float p);
	void adicionaOperario(string n, string end, string tel, float s, float p);
	void CalcularSalario(float s);
	void Adiciona();
	void Atualiza();

	float getValProd();
	float getSalario();
	float getImposto();

	void setProduto(float p);

private:
	vector <Operario> operarios;
	float valProd;
	float comissao;
};
#endif