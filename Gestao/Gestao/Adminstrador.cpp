#include "Adminstrador.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float Adminstrador::calculaSalAdm(float ajudaDeCusto, float salTotal)
{
	//o salário de um administrador é equivalente ao salário de um
	//empregado usual acrescido da ajuda de custo).
	salTotal = +ajudaDeCusto;
	return salTotal;
}
void Adminstrador::MenuAdm()
{
	//calculaSalAdm();
	criaAdms();
	//ver todos adms
	//buscar 1 adm 
	//cadastrar
	int op;
	cout << "****Menu admnisntradores***\n";
	cout << "1-Ver todos adms \n";
	cout << "2-Buscar 1 adm \n";
	cout << "3-Cadastrar adm \n";
	cin >> op;

	switch (op)
	{
	case 1:
		mostraAdms();
	case 2:
	case 3:
	default:
		cout << "Selecao invalida \n";
		break;
	}
}
float Adminstrador::salAleatorio()
{
	float salt;
	salt = rand() % 10000 + 3000;
	salt = salBase;
	return salBase;
}

void Adminstrador::setAjdc(float custo)
{
	ajudaDeCusto = custo;
}
float Adminstrador::getAjdc()
{
	return ajudaDeCusto;
}
