#include "Fornecedor.h"



float Fornecedor::obterSaldo(float valorCredito,float valorDivida)
{
	saldo = valorCredito - valorDivida;

	return saldo;
}
void Fornecedor::menuFornecedores()
{
	iniciaFornecedoresBase();
	int op;
	cout << "O que deseja fazer?\n";
	cout << "1- Lista de fornecedores cadastrados\n";
	cout << "2- Saldo dos fornecedores\n";
	cout << "3- Relatorio detalhado do fornecedor\n";
	cout << "4- Cadastrar fornecedor";
	cin >> op;

	switch (op)
	{
	case 1:
		mostraLista();
	case 2:
		mostraSaldo();
	case 3:
		relatorioForn();
	case 4:
		cadastroFornecedor();
	default:
		cout << "opcao invalida\n";
		break;
	}

}
void Fornecedor::mostraLista()
{
	int op;
	system("cls");
	cout << "*****Lista de fornecedores*****\n";
	for (int i = 0; i < 20; i++)
	{
		//cout << i << "    " << fornecedores[i].nome << "    " << fornecedores[i].endereco << "    " << fornecedores[i].telefone << "\n";
	}

	cout << "Deseja cadastrar um novo fornecedor?\n";
	cout << "1- Sim \n";
	cout << "2- Nao, voltar para o menu anterior.\n";
	cin >> op;

	switch (op)
	{
	case 1:
		cadastroFornecedor();
	case 2:
		menuFornecedores();
	default:
		cout << "opcao invalida\n";
		break;
	}

}


float Fornecedor::DividaAleatoria()
{
	float div;
	div = rand() % 50000;
	return div;
}
float  Fornecedor::CreditoAleatorio()
{
	float cred;
	cred = rand() % 10000;
	return cred;
}


void Fornecedor::setDivida(float div)
{
	valorDivida = div;
}
void Fornecedor::setCredito(float cred)
{
	valorCredito = cred;
}

void Fornecedor::setSaldo(float sal)
{
	saldo = sal;
}

float Fornecedor::getDivida()
{
	return valorDivida;
}
float Fornecedor::getCredito()
{
	return valorCredito;
}
float Fornecedor::getSaldo()
{
	return saldo;
}