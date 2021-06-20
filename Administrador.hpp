#include "Empregado.hpp"
#include <vector>

#ifndef Administrador_HPP
#define Administrador_HPP

class Administrador : public Empregado
{
public:
	Administrador(string n, string end, string tel, float s, float ac);
	void adicionaAdministrador(string nome, string endereco, string telefone, float salB, float ajudacusto);
	void CalcularSalario(float s);
	void Adiciona();
	void Atualiza();
	
	float getAjCusto();
	float getSalario();
	float getImposto();

	void setAjCusto(float ac);

private:
	vector <Administrador> administradores;
	float ajudacusto;
};
#endif