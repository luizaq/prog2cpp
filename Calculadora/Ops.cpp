#include "Ops.h"
#include <iostream>
#include <string>
using namespace std;
    bool running = true;
    int escolhaOp;
    double input[2];
    double numD1 = 0;
    double numD2 = 0;

    int ntemp=0;
    int numDeInput = 0;
    int contiua;
    double resultado = 0;

Ops::Ops( double _num1, double _num2)
{
	num1 = _num1;
	num2 = _num2;
	
	//tipo = _tipo;
    
}
void Ops::selecionaOp() 
{
    cout << "Escolha uma Operação\n";
    cout << "1-Adição(+) \n";
    cout << "2-Subtração (-) \n";
    cout << "3-Multiplicação(*)\n";
    cout << "4-Divisão (/)\n";
    cout << "5-Sair, s\n";
    cin >> escolhaOp;

    if (escolhaOp == 1)
    {
        system("cls");
        cout << "Adicao (+) \n";
        coletaNumeros();
        add();



    }
    else if (escolhaOp == 2)
    {
        system("cls");
        cout << "Subtração (-) \n";


        coletaNumeros();
        sub();


    }
    else if (escolhaOp == 3)
    {
        system("cls");
        cout << "Multiplicação(*)\n";
        coletaNumeros();
        mp();
    }
    else if (escolhaOp == 4)
    {
        system("cls");
        cout << "Divisão (/)\n";
        coletaNumeros();
        div();
    }
    else if (escolhaOp == 5)
    {
        running = false;
        cout << "opcao invalida";
            
    }

}
void Ops::coletaNumeros()
{
    input[0] = 0;
    input[1] = 0;

   
    numDeInput = 0;
    while (numDeInput<=1)
    {
        cout << "Digite o " << numDeInput+1 << " numero : \n";
        cin >> ntemp;
        input[numDeInput] = ntemp;// guarda o valor digitado no local x do array
        numDeInput++;
    }

    numD1 = input[0];
    numD2 = input[1];
    //numD3 = input[2];
    // numD4 = input[3];

}


void Ops::add()
{
	//cout << num1 << "!!!!!!!!!!!!!";
    resultado = numD1 + numD2;
   

	cout << "Resultado da operacao\n" <<  resultado;
	
    cout << "\n!!Deseja realizar outra operacao?!!\n";
	cout << "1-sim \n";
	cout << "2-não \n";
    cin >> contiua;
    if (contiua == 1)
    {
        system("cls");
        selecionaOp();
    }

		
}
void Ops::sub()
{
    resultado = numD1 - numD2;
   

    cout << "Resultado da operacao\n" << resultado;

    cout << "\n!!Deseja realizar outra operacao?!!\n";
    cout << "1-sim \n";
    cout << "2-não \n";
    cin >> contiua;
    if (contiua == 1)
    {
        system("cls");
        selecionaOp();
    }
}
void Ops::mp()
{
    resultado = numD1 * numD2;
    cout << numD1;
    cout << numD2;

    cout << "Resultado da operacao\n" << resultado;

    cout << "\n!!Deseja realizar outra operacao?!!\n";
    cout << "1-sim \n";
    cout << "2-não \n";
    cin >> contiua;
    if (contiua == 1)
    {
        system("cls");
        selecionaOp();
    }
}
void Ops::div()
{
    resultado = numD1 / numD2;
    

    cout << "Resultado da operacao\n" <<resultado;

    cout << "\n!!Deseja realizar outra operacao?!!\n";
    cout << "1-sim \n";
    cout << "2-não \n";
    cin >> contiua;
    if (contiua == 1)
    {
        system("cls");
        selecionaOp();
    }
}
//void Ops::add(double num1,double num2) 
//{
//	cout << "Adição(+) \n";
//
//}