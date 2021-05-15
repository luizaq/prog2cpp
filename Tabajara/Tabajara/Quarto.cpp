#include "Quarto.h"
#include "Cliente.h"
using namespace std;
Quarto::Quarto()
{

}
Quarto::Quarto(int _codQuarto, char _tipo, int _qtdCamas,
	string _tipoCama, char _estado, Cliente _cliente)
{
	codQuarto= _codQuarto;
	tipo= _tipo;
	qtdCamas= _qtdCamas;
	tipoCama= _tipoCama;
	estado= _estado;
	cliente= _cliente;

}


void Quarto::CriaQuartos()
{

}
void Quarto::verificaQuartos()
{
	int quarto;
	cout <<" ***Verificar quartos \n";
	cout << "Buscar por Código\n";
	cin >> quarto;
	if (quarto == 101)
	{
		cout << "Quarto 101\n";
		VerificaOcupacao();
		
	}
	else if (quarto == 102)
	{

	}
	else if (quarto == 103)
	{

	}
	else if (quarto == 104)
	{

	}
	else if (quarto == 105)
	{

	}
	else if (quarto == 201)
	{

	}
	else if (quarto == 202)
	{

	}
	else if (quarto == 203)
	{

	}
	else if (quarto == 204)
	{

	}
	else if (quarto == 205)
	{

	}
	else
	{
		cout << "Quarto invalido \n";
		verificaQuartos();
	}
}

void Quarto::VerificaOcupacao()
{
}

int Quarto::GetcodQuarto()
{
	return codQuarto;
}
char Quarto::Gettipo()
{
	return tipo;
}
int Quarto::GetqtdCamas()
{
	return qtdCamas;
}
string Quarto::GettipoCama()
{
	return tipoCama;
}
char Quarto::GetEstado()
{
	return estado;
}
Cliente Quarto::Getcliente()
{
	return cliente;
}
//////////////////


void Quarto::SetCodigo(int cod)
{
	codQuarto = cod;
}
void Quarto::SetQtdCamas(int camas)
{
	qtdCamas = camas;
}
void Quarto::SetTipo(char tip)
{
	tipo = tip;
}
void Quarto::SetEstado(char est)
{
	estado = est;
}
void Quarto::SetCliente(Cliente cli)
{
	cliente = cli;
}