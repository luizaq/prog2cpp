#pragma once
#include "Jogador.h";
#include <string>
using namespace std;
class TIme
{
public:
	TIme();
	TIme(string _nome, string _id, 
		char _categoria, int _numeroJogadores, 
		string _jogadoresdotime[10]);
	string GetNome();
	string GetId();
	char GetCategoria();
	string GetJogadoresTime();
	int GetNumeroJogadores();
	void ColetaTime(int quantasvezesessamerdarodou);
	void CadastraTime();

	void SetNome(string nom);
	void SetId(string ide);
	void SetCategoria(char cat);
	void SetJogadoresTime(string jogs);
	void SetNumeroJogadores(int njogs);

	void Controlador();
	void RelGeral();
	void RelFin();
private:
	string nome;
	string id;
	char categoria;
	string jogadoresdotime[10];
	int numeroJogadores;
};

