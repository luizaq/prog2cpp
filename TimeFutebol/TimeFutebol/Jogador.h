#pragma once
#include <string>
#include <fstream>
#include "TIme.h"
using namespace std;
class Jogador
{
public:
	Jogador();
	Jogador(string _nome, string _id, string _dataNasc,
		string _nacionalidade, char _categoria, 
		float _salBruto, int _idade, float _salLiq,
		int _tempoparaaposentar, string _time);
	//static const int SIZE = 10;//cosntante para array jgoador

	void ColetaInfos();
	void CalculaIdade(int y);
	void CalculaAposentadoria(int idade);//35
	void CalculaSalarioLiquido(float salBruto);
	void CriaID();
	void ImprimeJogador(int quantasvezesessamerdarodou);
	void Destino();
	void ValidaData(int d, int m, int y);
	void ValidaCat(char categoria);
	void PegaCat();
	void ImprimeSal(int quantasvezesessamerdarodou);
	void CriaCsv(int quantasvezesessamerdarodou);
	void InsereCsv();
	void CarregaCsv();
	void BuscaCsv();
	int ColetaData();
	void Controlador();
	void ColetaTime(int quantasvezesessamerdarodou);
	
	
	string GetNome();
	string GetId();
	string GetDataNasc();
	string GetNacio();
	char GetCat();
	float GetSalBruto();
	float GetSalLiq();
	int GetIdade();
	int GetTempoAp();
	Jogador GetJogadores();
	string GetTime();
	
	void SetJogadores(Jogador* jogadores);
	void SetNome(string nom);
	void SetId(string codid);
	void SetDataNasc (string dianasc);
	void SetNacio(string nac);
	void SetCat(char cat);
	void SetSalBruto(float bruto);
	void SetSalLiq(float liquido);
	void SetIdade(int anus);
	void SetTempoAp(int tempo);
	void SetTime(string team);
	




	

	
	
	
private:
	int x=0;
	int tempoparaaposentar;
	string dataproid;
	string nome;
	string id;
	string dataNasc;
	string nacionalidade;
	string time;
	float salLiq;
	char categoria;// prof ou base
	int salBruto;
	int idade = 0;
	bool roda = true;
	
	//Jogador jogadores[SIZE];




};
//SALARIO LIQUIDO =SALBRUTO-INSS-IMPOSTO
/*

Faixa salarial   desconto inss    imposto retido
1100                7,5%			0%
2000				9%				7,5%
3100				12%				15%
4100				14%				22%
>4100				14%				27%
\*

*///SALARIO LIQUIDO =SALBRUTO-INSS-IMPOSTO
/*

Faixa salarial   desconto inss    imposto retido
1100                7,5%			0%
2000				9%				7,5%
3100				12%				15%
4100				14%				22%
>4100				14%				27%
\*

*/
