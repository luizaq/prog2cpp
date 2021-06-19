#pragma once
#include "Empregado.h"
class Vendedor: public Empregado
{
public:
	float CalculaVendedor(float comissao,float valorVendas,float salBase);
	Vendedor() {};
	float salAleatorio();
	float comiAleatorio();
	float vendasAleatorio();
	void setValorVendas(float vendas);
	void setValorComissao(float comi);

	float getValorVendas();
	float getComissao();
	
private:
	float valorVendas;
	float comissao;
	float saltotalvendedor;
};

