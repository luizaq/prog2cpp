#include "TIme.h"
TIme::TIme()
{

}

TIme::TIme(string _nome, string _id, char
	_categoria, int _numeroJogadores, string _jogadoresdotime[10])
{
	nome = _nome;
	id = _id;
	categoria = _categoria;
	numeroJogadores = _numeroJogadores;
	jogadoresdotime[10] = _jogadoresdotime[10];
}


void Jogador::Controlador()
{
	//ler o csv.
}



///gert e sets
string TIme::GetNome()
{
	return nome;
}
string TIme::GetId()
{
	return id;
}
char TIme::GetCategoria()
{
	return categoria;
}
string TIme::GetJogadoresTime()
{
	return jogadoresdotime[10];
}

int TIme::GetNumeroJogadores()
{
	return numeroJogadores;
}
///get


void TIme::SetNome(string nom)
{
	nome = nom;
}
void TIme::SetId(string ide)
{
	id = ide;
}
void TIme::SetCategoria(char cat)
{
	categoria = cat;
}
void TIme::SetJogadoresTime(string jogs)
{
	jogadoresdotime[10] = jogs[10];
}
void TIme::SetNumeroJogadores(int njogs)
{
	numeroJogadores = njogs;
}