#pragma once
#include "Empregado.h"
class Adminstrador : public Empregado
{
public:

	Adminstrador() {};
	float calculaSalAdm(float ajudaDeCusto, float salTotal);
	float salAleatorio();
	
	void setAjdc(float custo);
	float getAjdc();

	void MenuAdm();
	void mostraAdms();
	void criaAdms();
private:
	float ajudaDeCusto;

};

