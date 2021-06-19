#pragma once

#ifndef Fornecedores_hpp
#define Fornecedores_hpp
#include "Pessoa.h"


class Fornecedor : public Pessoa
{
public:
	Fornecedor() {};
	Fornecedor(float _divida, float _credito);
	float obterSaldo(float valorCredito, float valorDivida);
	void menuFornecedores();
	void mostraLista();
	void relatorioForn();
	void mostraSaldo();
	void cadastroFornecedor();
	void iniciaFornecedoresBase();

	void setDivida(float  div);
	void setCredito(float cred);
	void setSaldo(float sal);



	float getDivida();
	float getCredito();
	float getSaldo();
	float DividaAleatoria();
	float CreditoAleatorio();

/*	Implemente, além dos usuais métodos seletores e modificadores, um método
	obterSaldo() que devolve a diferença entre os valores dos atributos valorCredito
	e valorDivida.*/
private:
	float valorDivida;
	float valorCredito;
	float saldo;
};	


#endif /* Fornecedor_hpp*/
