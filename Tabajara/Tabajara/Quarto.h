#pragma once
#include <string>
#include <iostream>
using namespace std;
#include "Cliente.h"
class Quarto
{
public:
	Quarto(int _codQuarto, char _tipo,int _qtdCamas ,
		string _tipoCama,char _estado, Cliente _cliente );
	Quarto();
	int GetcodQuarto();
	char Gettipo();
	int GetqtdCamas();
	string GettipoCama();
	char GetEstado();
	Cliente Getcliente();

	void SetCodigo(int cod);
	void SetQtdCamas(int camas);
	void SetTipo(char tip);
	void SetEstado(char est);
	void SetCliente(Cliente cli);

	void verificaQuartos();
	void CriaQuartos();
	void VerificaOcupacao();


private:
	int codQuarto;
	char tipo;// luxo ou simples 
	int qtdCamas;
	string tipoCama; // solteiro /casal
	char estado;
	Cliente cliente;


};

