#include "Operario.h"
float Operario::calculaSalOP(float comissao, float valorProducao,float salBase)
{
	float comitemp, acc, somado;

	comitemp = comissao / 100;
	acc = comitemp * valorProducao;
	salTotal = acc + salBase;
	

	return salTotal;
}

float Operario::salAleatorio()
{
	float salBase;
	float salt;
	salt = rand() % 5000 + 1000;
	salBase = salt;
	return salBase;
}
float Operario::comiAleatorio()
{
	float com;
	com = rand() % 15 + 2;
	return com;
}
float Operario::prodAleatorio()
{
	float producao;
	producao = rand() % 50000;
	return producao;
}


void Operario::setValorProd(float prod)
{
	valorProducao = prod;
}
void Operario::setValorComissao(float comi)
{
	comissao = comi;
}
float Operario::getValorProd()
{
	return valorProducao;
}
float Operario::getComissao()
{
	return comissao;

}