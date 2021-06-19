#pragma once
#include "Empregado.h"
class Operario :public Empregado
{
public:
	Operario() {};
	float calculaSalOP(float comissao, float valorProducao, float salBase);
	float salAleatorio();
	float comiAleatorio();
	float prodAleatorio();

	void setValorProd(float prod);
	void setValorComissao(float comi);
	float getValorProd();
	float getComissao();

private:
	float valorProducao;
	float comissao;
	float salBase;
};

