#include "Cliente.h"
#include <iostream>
Cliente::Cliente()
{

}
Cliente::Cliente(string _nome, int _quarto, int _reservaAtual, int _reservaPassada)
{
	nome = _nome;
	quarto = _quarto;
	reservaAtual = _reservaAtual;
	reservaPassada = _reservaPassada;
}

void Cliente::Cadastro()
{
	string nomeT;
	int quartoT,reservaT;

	system("cls");
	cout << "***********cadastro de clientes**********\n";
	cout << "Insira o nome";
	cin >> nomeT;

	cout << "insira o quarto atual.SE RESERVA INSIRA 0\n";
	cin >> quartoT;
	
	cout << "INsira o quarto reservado pelo cliente\n";
	cin >> reservaT;

	Cliente Novo(nomeT, quartoT, reservaT, 0);

}



string Cliente::Getnome()
{
	return nome;
}
int Cliente::Getquarto()
{
	return quarto;
}
int Cliente::GetreservaAtual()
{
	return reservaAtual;
}
int Cliente::GetreservaPassada()
{
	return reservaPassada;
}



void Cliente::SetNome(string name)
{
	nome = name;
}
void Cliente::SetQuarto(int room)
{
	quarto = room;

}
void Cliente::SetReservaAtual(int resatu)
{
	reservaAtual = resatu;

}
void Cliente::SetReservaPassada(int respass)
{

	reservaPassada = respass;

}