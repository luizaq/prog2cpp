#pragma once
#include <string>
using namespace std;
class Cliente
{
public:
	Cliente();
	Cliente(string _nome, int _quarto, int _reservaAtual,int reservaPassada);


	string Getnome();
	int Getquarto();
	int GetreservaAtual();
	int GetreservaPassada();

	void SetNome(string name);
	void SetQuarto(int room);
	void SetReservaAtual(int resatu);
	void SetReservaPassada(int respass);
	
	void CriaClientes();
	void Cadastro();
private:

	string nome;
	int quarto;
	int reservaAtual;
	int reservaPassada;


};

