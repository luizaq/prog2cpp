// TimeFutebol.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
#include "Jogador.h"
#include "empresa.h"
#include <fstream>


int main()
{
    void Lejogadores();
    void MenuGenerico();
    //void MenuGenerico()
    
        int escolha;
                    cout << "____controlador de time de futebol_____\n";
        cout << "1-Informaçoes de jogador novo jogador \n";
        cout << "2-informacoes do time.\n";
        cout << "3- Informações da empresa\n";
        cin >> escolha;


        if (escolha == 1)
        {
            Jogador joga;
            joga.ColetaInfos();
            cout << "teste";//vem pra ca dps de sair do imprime

        }
        else if (escolha == 2)
        {

        }
        else if (escolha == 3)
        {

        }
        else
        {
            cout << "Escolha invalida!\n";

        }

}



void Lejogadores()
{
    ifstream csvjogadores;
    csvjogadores.open("jogadores.csv", ios::out | ios::app);
    ifstream file("Jogadores.csv");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            // using printf() in all tests for consistency
            printf("%s", line.c_str());
        }
        file.close();
    }
}
void LeEmpresas()
{

}
void Letimes()
{

}

