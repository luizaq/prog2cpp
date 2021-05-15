// Tabajara.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
using namespace std;
#include <iostream>
#include <string>
#include "Quarto.h"
#include "Cliente.h"
string ClientesCadastrados[15] = { "Maria","Anita","Taylor Swift","Jesus Cristo"," William Bonner","Ana Maria Braga" };
int main()
{

	/*id,Simples OU Luxo, tipo cama, Ocupado Reservado Livre, cliente */
	Cliente Vazio(" ", 0, 0, 0);
	Cliente Maria("Maria", 101, 101, 5);
	Cliente Anitta("Anitta", 0, 103, 0);
	Cliente Taylor("Taylor Swift", 104, 104, 2);
	Cliente Jesus("Jesus Cristo", 0, 202, 2);
	Cliente Bonner("William Bonner", 203, 203, 3);
	Cliente Anamaria("Ana Maria Braga", 0, 204, 0);

	Quarto jacare(101, 'S', 2, "SOLTEIRO", 'O', Maria);
	Quarto jabuti(102, 'L', 1, "CASAL", 'L', Vazio);
	Quarto jiboia(103, 'S', 2, "SOLTEIRO", 'R ', Anitta);
	Quarto elefante(104, 'L', 2, "SOLTEIRO", 'O ', Taylor);
	Quarto macaco(105, 'S', 1, "SOLTEIRO", 'L ', Vazio);
	Quarto gato(201, 'L', 1, "CASAL", 'L ', Vazio);
	Quarto cachorro(202, 'L', 2, "CASAL", 'R', Jesus);
	Quarto barata(203, 'S', 1, "CASAL", 'O', Bonner);
	Quarto bode(204, 'L', 1, "CASAL", 'R', Anamaria);
	Quarto papagaio(205, 'L', 4, "CASAL", 'L', Vazio);



	Cliente cliente();
	// Cliente CriaClientes();
	//Quarto CriaQuartos();

	cout << "*******hotel tabajara***********\n";
	string funcionario;
	cout << " Entre o Nome do funcionario**** \n";
	cin >> funcionario;

	int opcao;
	cout << "Ola" << funcionario << "\n";
	cout << "O que deseja fazer? \n";
	cout << "1-Verificar Um quarto \n";
	cout << "2-Cadastrar ou alterar um Cliente \n";
	cout << "3-Reservar um quarto \n";
	cout << "4-Relatorios \n";
	cin >> opcao;
	string quarto;
	string c;
	if (opcao == 1)
	{


		int quarto;
		cout << " ***Verificar quartos \n";
		cout << "Buscar por Código\n";
		cin >> quarto;
		if (quarto == 101)
		{
			cout << "Quarto 101\n";
			cout << jacare.GetEstado();
			if (jacare.GetEstado() == 'o' || jacare.GetEstado() == 'O')
			{
				cout << "Quarto esta ocupado por    " << jacare.Getcliente().Getnome() << "\n";
			}
			else if (jacare.GetEstado() == 'R' || jacare.GetEstado() == 'R')
			{
				cout << "Quarto esta reservador por    " << jacare.Getcliente().Getnome() << "\n";
			}

			else if (jacare.GetEstado() == 'L' || jacare.GetEstado() == 'L')

			{
				cout << "Quarto esta livre Deseja reservar?\n";
				cout << "1-sim\n";
				cout << "2-nao\n";
				cin >> opcao;
				if (opcao == 1)
				{
					string nome;
					string nomeT;
					cout << "Digite o nome do clinte para reserva\n";
					cin >> nome;
					toupper(nome[0]);
					for (int i = 0; i < 15; i++)
					{
						nomeT = ClientesCadastrados[i];
						if (nomeT == nome)
						{
							cout << "Cliente encontrado \n";
							break;
						}

					}

					int op;
					cout << "Cliente não encontrado\n";
					cout << "1-Ver lista de clientes cadastrados";
					cout << "2-Cadastrar novo cliente";
					cin >> op;
					if (op == 1)
					{
						cout << ClientesCadastrados;
					}
					else if (op == 2)
					{
						Cliente Cadastro();
					}
					else
					{
						cout << "Opcao invalida\n";
					}
				}

				else if (opcao == 2)
				{

				}
				else
				{
					cout << "Opcao invalida\n";
				}
			}



		}
		else if (quarto == 102)
		{
			cout << "Quarto 102\n";
			cout << jabuti.GetEstado();
			if (jabuti.GetEstado() == 'o' || jabuti.GetEstado() == 'O')
			{
				cout << "Quarto esta ocupado por    " << jabuti.Getcliente().Getnome() << "\n";
			}
			else if (jabuti.GetEstado() == 'R' || jabuti.GetEstado() == 'R')
			{
				cout << "Quarto esta reservador por    " << jabuti.Getcliente().Getnome() << "\n";
			}

			else if (jabuti.GetEstado() == 'L' || jabuti.GetEstado() == 'L')

			{
				cout << "Quarto esta livre Deseja reservar?\n";
				cout << "1-sim\n";
				cout << "2-nao\n";
				cin >> opcao;
				if (opcao == 1)
				{
					string nome;
					string nomeT;
					cout << "Digite o nome do clinte para reserva\n";
					cin >> nome;
					toupper(nome[0]);
					for (int i = 0; i < 15; i++)
					{
						nomeT = ClientesCadastrados[i];
						if (nomeT == nome)
						{
							cout << "Cliente encontrado \n";
							break;
						}

					}

					int op;
					cout << "Cliente não encontrado\n";
					cout << "1-Ver lista de clientes cadastrados";
					cout << "2-Cadastrar novo cliente";
					cin >> op;
					if (op == 1)
					{
						cout << ClientesCadastrados;
					}
					else if (op == 2)
					{
						Cliente Cadastro();
					}
					else
					{
						cout << "Opcao invalida\n";
					}
				}

				else if (opcao == 2)
				{
					cout << "ok\n";
				}
				else
				{
					cout << "Opcao invalida\n";
				}
			}

		}
		else if (quarto == 103)
		{
			cout << "Quarto 103\n";
			cout << jiboia.GetEstado();
			if (jiboia.GetEstado() == 'o' || jiboia.GetEstado() == 'O')
			{
				cout << "Quarto esta ocupado por    " << jiboia.Getcliente().Getnome() << "\n";
			}
			else if (jiboia.GetEstado() == 'R' || jiboia.GetEstado() == 'R')
			{
				cout << "Quarto esta reservador por    " << jiboia.Getcliente().Getnome() << "\n";
			}

			else if (jiboia.GetEstado() == 'L' || jiboia.GetEstado() == 'L')

			{
				cout << "Quarto esta livre Deseja reservar?\n";
				cout << "1-sim\n";
				cout << "2-nao\n";
				cin >> opcao;
				if (opcao == 1)
				{
					string nome;
					string nomeT;
					cout << "Digite o nome do clinte para reserva\n";
					cin >> nome;
					toupper(nome[0]);
					for (int i = 0; i < 15; i++)
					{
						nomeT = ClientesCadastrados[i];
						if (nomeT == nome)
						{
							cout << "Cliente encontrado \n";
							break;
						}

					}

					int op;
					cout << "Cliente não encontrado\n";
					cout << "1-Ver lista de clientes cadastrados";
					cout << "2-Cadastrar novo cliente";
					cin >> op;
					if (op == 1)
					{
						cout << ClientesCadastrados;
					}
					else if (op == 2)
					{
						Cliente Cadastro();
					}
					else
					{
						cout << "Opcao invalida\n";
					}
				}

				else if (opcao == 2)
				{

				}
				else
				{
					cout << "Opcao invalida\n";
				}
			}
		}
		else if (quarto == 104)
		{
			cout << "Quarto 104\n";
			cout << elefante.GetEstado();
			if (elefante.GetEstado() == 'o' || elefante.GetEstado() == 'O')
			{
				cout << "Quarto esta ocupado por    " << elefante.Getcliente().Getnome() << "\n";
			}
			else if (elefante.GetEstado() == 'R' || elefante.GetEstado() == 'R')
			{
				cout << "Quarto esta reservador por    " << elefante.Getcliente().Getnome() << "\n";
			}

			else if (elefante.GetEstado() == 'L' || elefante.GetEstado() == 'L')

			{
				cout << "Quarto esta livre Deseja reservar?\n";
				cout << "1-sim\n";
				cout << "2-nao\n";
				cin >> opcao;
				if (opcao == 1)
				{
					string nome;
					string nomeT;
					cout << "Digite o nome do clinte para reserva\n";
					cin >> nome;
					toupper(nome[0]);
					for (int i = 0; i < 15; i++)
					{
						nomeT = ClientesCadastrados[i];
						if (nomeT == nome)
						{
							cout << "Cliente encontrado \n";
							break;
						}

					}

					int op;
					cout << "Cliente não encontrado\n";
					cout << "1-Ver lista de clientes cadastrados";
					cout << "2-Cadastrar novo cliente";
					cin >> op;
					if (op == 1)
					{
						cout << ClientesCadastrados;
					}
					else if (op == 2)
					{
						Cliente Cadastro();
					}
					else
					{
						cout << "Opcao invalida\n";
					}
				}

				else if (opcao == 2)
				{

				}
				else
				{
					cout << "Opcao invalida\n";
				}
			}
		}
		else if (quarto == 105)
		{
			cout << "Quarto 105\n";
			cout << macaco.GetEstado();
			if (macaco.GetEstado() == 'o' || macaco.GetEstado() == 'O')
			{
				cout << "Quarto esta ocupado por    " << macaco.Getcliente().Getnome() << "\n";
			}
			else if (macaco.GetEstado() == 'R' || macaco.GetEstado() == 'R')
			{
				cout << "Quarto esta reservador por    " << macaco.Getcliente().Getnome() << "\n";
			}

			else if (macaco.GetEstado() == 'L' || macaco.GetEstado() == 'L')

			{
				cout << "Quarto esta livre Deseja reservar?\n";
				cout << "1-sim\n";
				cout << "2-nao\n";
				cin >> opcao;
				if (opcao == 1)
				{
					string nome;
					string nomeT;
					cout << "Digite o nome do clinte para reserva\n";
					cin >> nome;
					toupper(nome[0]);
					for (int i = 0; i < 15; i++)
					{
						nomeT = ClientesCadastrados[i];
						if (nomeT == nome)
						{
							cout << "Cliente encontrado \n";
							break;
						}

					}

					int op;
					cout << "Cliente não encontrado\n";
					cout << "1-Ver lista de clientes cadastrados";
					cout << "2-Cadastrar novo cliente";
					cin >> op;
					if (op == 1)
					{
						cout << ClientesCadastrados;
					}
					else if (op == 2)
					{
						Cliente Cadastro();
					}
					else
					{
						cout << "Opcao invalida\n";
					}
				}

				else if (opcao == 2)
				{

				}
				else
				{
					cout << "Opcao invalida\n";
				}
			}
		}
		else if (quarto == 201)
		{
			cout << "Quarto '201\n";
			cout << gato.GetEstado();
			if (gato.GetEstado() == 'o' || gato.GetEstado() == 'O')
			{
				cout << "Quarto esta ocupado por    " << gato.Getcliente().Getnome() << "\n";
			}
			else if (gato.GetEstado() == 'R' || gato.GetEstado() == 'R')
			{
				cout << "Quarto esta reservador por    " << gato.Getcliente().Getnome() << "\n";
			}

			else if (gato.GetEstado() == 'L' || gato.GetEstado() == 'L')

			{
				cout << "Quarto esta livre Deseja reservar?\n";
				cout << "1-sim\n";
				cout << "2-nao\n";
				cin >> opcao;
				if (opcao == 1)
				{
					string nome;
					string nomeT;
					cout << "Digite o nome do clinte para reserva\n";
					cin >> nome;
					toupper(nome[0]);
					for (int i = 0; i < 15; i++)
					{
						nomeT = ClientesCadastrados[i];
						if (nomeT == nome)
						{
							cout << "Cliente encontrado \n";
							break;
						}

					}

					int op;
					cout << "Cliente não encontrado\n";
					cout << "1-Ver lista de clientes cadastrados";
					cout << "2-Cadastrar novo cliente";
					cin >> op;
					if (op == 1)
					{
						cout << ClientesCadastrados;
					}
					else if (op == 2)
					{
						Cliente Cadastro();
					}
					else
					{
						cout << "Opcao invalida\n";
					}
				}

				else if (opcao == 2)
				{
					cout << "ok\n";
				}
				else
				{
					cout << "Opcao invalida\n";
				}


			}
		}
		else if (quarto == 202)
		{
			cout << "Quarto 202\n";
			cout << cachorro.GetEstado();
			if (cachorro.GetEstado() == 'o' || cachorro.GetEstado() == 'O')
			{
				cout << "Quarto esta ocupado por    " << cachorro.Getcliente().Getnome() << "\n";
			}
			else if (cachorro.GetEstado() == 'R' || cachorro.GetEstado() == 'R')
			{
				cout << "Quarto esta reservador por    " << cachorro.Getcliente().Getnome() << "\n";
			}

			else if (cachorro.GetEstado() == 'L' || cachorro.GetEstado() == 'L')

			{
				cout << "Quarto esta livre Deseja reservar?\n";
				cout << "1-sim\n";
				cout << "2-nao\n";
				cin >> opcao;
				if (opcao == 1)
				{
					string nome;
					string nomeT;
					cout << "Digite o nome do clinte para reserva\n";
					cin >> nome;
					toupper(nome[0]);
					for (int i = 0; i < 15; i++)
					{
						nomeT = ClientesCadastrados[i];
						if (nomeT == nome)
						{
							cout << "Cliente encontrado \n";
							break;
						}

					}

					int op;
					cout << "Cliente não encontrado\n";
					cout << "1-Ver lista de clientes cadastrados";
					cout << "2-Cadastrar novo cliente";
					cin >> op;
					if (op == 1)
					{
						cout << ClientesCadastrados;
					}
					else if (op == 2)
					{
						Cliente Cadastro();
					}
					else
					{
						cout << "Opcao invalida\n";
					}
				}

				else if (opcao == 2)
				{
					cout << "ok\n";
				}
				else
				{
					cout << "Opcao invalida\n";
				}
			}
		}
		else if (quarto == 203)
		{
			cout << "Quarto 203\n";
			cout << barata.GetEstado();
			if (barata.GetEstado() == 'o' || barata.GetEstado() == 'O')
			{
				cout << "Quarto esta ocupado por    " << barata.Getcliente().Getnome() << "\n";
			}
			else if (barata.GetEstado() == 'R' || barata.GetEstado() == 'R')
			{
				cout << "Quarto esta reservador por    " << barata.Getcliente().Getnome() << "\n";
			}

			else if (barata.GetEstado() == 'L' || barata.GetEstado() == 'L')

			{
				cout << "Quarto esta livre Deseja reservar?\n";
				cout << "1-sim\n";
				cout << "2-nao\n";
				cin >> opcao;
				if (opcao == 1)
				{
					string nome;
					string nomeT;
					cout << "Digite o nome do clinte para reserva\n";
					cin >> nome;
					toupper(nome[0]);
					for (int i = 0; i < 15; i++)
					{
						nomeT = ClientesCadastrados[i];
						if (nomeT == nome)
						{
							cout << "Cliente encontrado \n";
							break;
						}

					}

					int op;
					cout << "Cliente não encontrado\n";
					cout << "1-Ver lista de clientes cadastrados";
					cout << "2-Cadastrar novo cliente";
					cin >> op;
					if (op == 1)
					{
						cout << ClientesCadastrados;
					}
					else if (op == 2)
					{
						Cliente Cadastro();
					}
					else
					{
						cout << "Opcao invalida\n";
					}
				}

				else if (opcao == 2)
				{
					cout << "ok\n";

				}
				else
				{
					cout << "Opcao invalida\n";
				}
			}
		}
		else if (quarto == 204)
		{
			cout << "Quarto 204\n";
			cout << bode.GetEstado();
			if (bode.GetEstado() == 'o' || bode.GetEstado() == 'O')
			{
				cout << "Quarto esta ocupado por    " << bode.Getcliente().Getnome() << "\n";
			}
			else if (bode.GetEstado() == 'R' || bode.GetEstado() == 'R')
			{
				cout << "Quarto esta reservador por    " << bode.Getcliente().Getnome() << "\n";
			}

			else if (bode.GetEstado() == 'L' || bode.GetEstado() == 'L')

			{
				cout << "Quarto esta livre Deseja reservar?\n";
				cout << "1-sim\n";
				cout << "2-nao\n";
				cin >> opcao;
				if (opcao == 1)
				{
					string nome;
					string nomeT;
					cout << "Digite o nome do clinte para reserva\n";
					cin >> nome;
					toupper(nome[0]);
					for (int i = 0; i < 15; i++)
					{
						nomeT = ClientesCadastrados[i];
						if (nomeT == nome)
						{
							cout << "Cliente encontrado \n";
							break;
						}

					}

					int op;
					cout << "Cliente não encontrado\n";
					cout << "1-Ver lista de clientes cadastrados";
					cout << "2-Cadastrar novo cliente";
					cin >> op;
					if (op == 1)
					{
						cout << ClientesCadastrados;
					}
					else if (op == 2)
					{
						Cliente Cadastro();
					}
					else
					{
						cout << "Opcao invalida\n";
					}
				}

				else if (opcao == 2)
				{
					//nao reservar
					cout << "OK\n";
				}
				else
				{
					cout << "Opcao invalida\n";
				}
			}
			else if (quarto == 205)
			{
				cout << "Quarto 205\n";
				cout << papagaio.GetEstado();
				if (papagaio.GetEstado() == 'o' || papagaio.GetEstado() == 'O')
				{
					cout << "Quarto esta ocupado por    " << papagaio.Getcliente().Getnome() << "\n";
				}
				else if (papagaio.GetEstado() == 'R' || papagaio.GetEstado() == 'R')
				{
					cout << "Quarto esta reservador por    " << papagaio.Getcliente().Getnome() << "\n";
				}

				else if (papagaio.GetEstado() == 'L' || papagaio.GetEstado() == 'L')

				{
					cout << "Quarto esta livre Deseja reservar?\n";
					cout << "1-sim\n";
					cout << "2-nao\n";
					cin >> opcao;
					if (opcao == 1)
					{
						string nome;
						string nomeT;
						cout << "Digite o nome do clinte para reserva\n";
						cin >> nome;
						toupper(nome[0]);
						for (int i = 0; i < 15; i++)
						{
							nomeT = ClientesCadastrados[i];
							if (nomeT == nome)
							{
								cout << "Cliente encontrado \n";
								break;
							}

						}

						int op;
						cout << "Cliente não encontrado\n";
						cout << "1-Ver lista de clientes cadastrados";
						cout << "2-Cadastrar novo cliente";
						cin >> op;
						if (op == 1)
						{
							cout << ClientesCadastrados;
						}
						else if (op == 2)
						{
							Cliente Cadastro();
						}
						else
						{
							cout << "Opcao invalida\n";
						}
					}

					else if (opcao == 2)
					{
						//nao reservar
						cout << "OK\n";
					}
					else
					{
						cout << "Opcao invalida\n";
					}
				}
				else
				{
					cout << "Quarto invalido \n";
					//verificaQuartos();
				}


			}
			else if (opcao == 2)
			{
				int op;
				cout << "Cadastrar ou alterar um Cliente \n";
				cout << "1-Cadastrar \n";
				cout << "2-alterar\n";
				cin >> op;

				if (op == 1)
				{
					Cliente Cadastro();
				}
				else if (op == 2)
				{

				}
				else
				{
					cout << "opcao invalida \n";
				}

			}
			else if (opcao == 3)
			{
				cout << "Reservar um quarto \n";

			}
			else if (opcao == 4)
			{
				cout << "Relatorios \n";
			}
			else
			{
				cout << "opcao invalida \n";

			}
		}


	}

}