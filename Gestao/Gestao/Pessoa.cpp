#include "Pessoa.h"
Pessoa::Pessoa()
{

}
Pessoa::Pessoa(string _nome, string _endereco , string _telefone)
{
	nome = _nome;
	endereco = _endereco;
	telefone = _telefone;
}


void Pessoa::SetNome(string nom)
{
	nome = nom;
}
void Pessoa::SetEnd(string end)
{
	endereco = end;
}
void Pessoa::SetTel(string tel)
{
	telefone = tel;
}

string Pessoa::GetNome()
{
	return nome;
}
string Pessoa::GetEnd()
{
	return endereco;
}
string Pessoa::GetTel()
{
	return telefone;
}