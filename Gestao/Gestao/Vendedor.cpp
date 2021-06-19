#include "Vendedor.h"
float Vendedor::CalculaVendedor(float comissao, float valorVendas,float salBase)
{
	float comitemp,acc,somado;

	comitemp = comissao / 100;
	acc = comitemp * valorVendas;
	saltotalvendedor = acc + salBase;
	return saltotalvendedor;
}
float Vendedor::salAleatorio()
{
	float salt;
	salt = rand() % 5000 + 1000;
	salt = salBase;
	return salBase;
}
float Vendedor::comiAleatorio()
{
	float com;
	com = rand() % 15 + 2;
	return com;
}
float Vendedor::vendasAleatorio()
{
	float vendas;
	vendas = rand() % 50000;
	return vendas;
}
void Vendedor::setValorVendas(float vendas)
{
	valorVendas = vendas;
}
void Vendedor::setValorComissao(float comi)
{
	comissao = comi;
}
float Vendedor::getValorVendas()
{
	return valorVendas;
}
float Vendedor::getComissao()
{
	return comissao;
}