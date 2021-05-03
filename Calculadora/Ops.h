#pragma once
#include <iostream>
#include <string>
class Ops
{
public:
	Ops( double _num1, double _num2);
	void add();
	void sub();
	void div();
	void mp();
	void encaminha();
	void coletaNumeros();
	void selecionaOp();
private:
	int tipo;
	bool roda = false;
	double num1, num2, num3, num4 = 0;
	double resultado=0;
	bool continua = true;
	bool running = true;
	int escolhaOp;
	double input[2];
	double numD1 = 0;
	double numD2 = 0;
	double numD3 = 0;
	double numD4 = 0;
	int ntemp=0;
	int numDeInput = 0;

};

