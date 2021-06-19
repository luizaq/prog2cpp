#pragma once

#ifndef Empregado_hpp
#define Empregado_hpp
#include "Pessoa.h"

class Empregado : public Pessoa
{
public:
	float calcularSal(float salBase, float imposto);
	Empregado(){};
	Empregado(int _codSetor, float _salBase,float _Imposto);
	void MenuEmpregado();
	void exibeSal();
	
	void setcodSetor(int cod);
	void setsalBase(float base);
	void setsalTotal(float st);
	void setImposto(float imp);
	void CriaEmpregados();
	
	int  getcodSetor();
	float getsalBase();
	float getsalTotal();
	float getImposto();

protected:
	int codSetor;
	float salBase;
	float salTotal;
	float imposto;
};

#endif /* Empregado_hpp*/