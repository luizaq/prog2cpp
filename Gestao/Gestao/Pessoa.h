#pragma once
#include <string>
#ifndef Pessoa_h
#define Pessoa_h
#include <iostream>


using namespace std;
class Pessoa
{
public:

	Pessoa(string _nome, string _endereco, string _telefone);
	Pessoa();

	void SetNome(string nom);
	void SetEnd(string end);
	void SetTel(string tel);
	 
	string GetNome();
	string GetEnd();
	string GetTel();

protected:
	string nome;
	string endereco;
	string telefone;
};

#endif /* Pessoa_hpp */