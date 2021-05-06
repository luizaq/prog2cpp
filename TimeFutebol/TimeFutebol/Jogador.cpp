#include "Jogador.h"
#include <iostream>

int quantasvezesessamerdarodou = 1;
Jogador::Jogador()
{
	//construtor padrao mas eu n sei pq
}

Jogador jogadores[10];

Jogador::Jogador(string _nome, string _id, string _dataNasc, 
	string _nacionalidade, char _categoria, float _salBruto,int _idade,  
	float _salLiq, int _tempoparaaposentar, string _time)
{
	 nome=_nome;
	 id=_id;
	 dataNasc=_dataNasc;
	 nacionalidade=_nacionalidade;
	 categoria=_categoria;// prof ou base
	 salBruto=_salBruto;
	 idade = _idade;
	 salLiq = _salLiq;
	 tempoparaaposentar = _tempoparaaposentar;
	 time = _time;

}	


void Jogador::ColetaInfos()
{
	

		for (int i = 0; i <10; i++)
		{
			system("cls");
			cout << "********Cadastro de jogador*********\n";
			cout << "Digite o nome do jogador \n";
			cin >> nome;

			system("cls");
			cout << "********Cadastro de jogador*********\n";
			ColetaData();
			CalculaAposentadoria(idade);
			system("cls");
			cout << "********Cadastro de jogador*********\n";
			cout << "Insira nacionalidade do jogador \n";
			cin >> nacionalidade;

			PegaCat();

			system("cls");
			cout << "********Cadastro de jogador*********\n";
			cout << "Insira o Salario Bruto :\n";
			cin >> salBruto;
			CalculaSalarioLiquido(salBruto);
			CriaID();


			jogadores[i] = { Jogador(nome, id, dataNasc, nacionalidade, categoria, salBruto, idade,salLiq,tempoparaaposentar,time)};
				//jogadores[i] = Jogador(nome, id, dataNasc, nacionalidade, categoria, salBruto, idade);
			
				quantasvezesessamerdarodou++;

			CriaCsv(quantasvezesessamerdarodou);
			
			Destino();
			if (roda == false)
			{
				break;//volta pro main,da progasto
			}
		
		}
		

	
} 



void Jogador::CriaID()
{
	char letra1 = nome[0];
	char letra2 = nome[1];
	toupper(letra1);
	toupper(letra2);
	id = dataproid + letra1 + letra2;
	cout << id;
}


void Jogador::Destino()
{
	system("cls");
	int opcao;
	cout << "**********Menu Jogador********\n";
	cout << "O que quer fazer?\n";
	cout << "1-Adicionar outro jogador\n";
	cout << "2-Ver salario liquido\n";
	cout << "3-Ver informacoes do jogador\n";
	cout << "*****4-Sair******\n";
	cin  >> opcao;

	if (opcao == 1)
	{
		roda = true;
	}
	else if (opcao == 2)
	{
		ImprimeSal(quantasvezesessamerdarodou);
	}
	else if (opcao == 3)

	{
		roda = false;
		ImprimeJogador(quantasvezesessamerdarodou);
		
		
	}
	else	
	{
		roda = false;
	}
}
void Jogador::ImprimeJogador(int quantasvezesessamerdarodou)
{
	int i;
	int x;
	x = quantasvezesessamerdarodou;
	system("cls");
	//roda = false;
	cout << "**********Jogadores*************\n\n";
	cout << "*ID*" << "            " << "*NOME*" << "       " << "*IDADE*" << "     " << "*ANOS PRA APST" << "     " << "*NACIONALIDADE*" << "     " << "*CAT*\n\n";
	
	for (int i = 0; i <= x; i++)
	{
		cout << jogadores[i].id << "|       |" << jogadores[i].nome << "|       |" << jogadores[i].idade << "|         |" << jogadores[i].tempoparaaposentar << "|              |" << jogadores[i].nacionalidade << " |                |" << jogadores[i].categoria << "|\n";
	}
	cout << "*Idade de aposentadoria utilizada e 37 anos\n";
}

void Jogador::ValidaData(int d, int m,int y)
{
	bool dataValida = false;
	//dia n pode ser maior q 31
	//verificar qtd dias mes?
	//mes n pode ser maior q 12
	if (d > 0 && d <= 31)
	{
		if (m > 0 && m <= 12)
		{
			if (y > 0)
			{
				dataValida = true;
			}
		}
	}
	if (dataValida == false)
	{
		cout << "data invalida!\n";
		ColetaData();
	}
	
}
int Jogador::ColetaData()
{
	int d;
	int m;
	int y;
	cout << "Insira a data de Nascimento no formato DD/MM/AAAA\n";
	cin >> d; // dia
	if (cin.get() != '/') //valida barra dodia mes
	{
		cout << "Esperava /\n";
		return 1;
	}
	cin >> m; // mes
	if (cin.get() != '/') // mes
	{
		cout << "esperava /\n";
		return 1;
	}
	cin >> y; // ano
	
	ValidaData(d,  m,  y);
	CalculaIdade(y);
	//cout << "Insira a data de nascimento: " << d << "/" << m << "/" << y << "\n";
	
	dataNasc = dataNasc +"0"+ to_string(d) + "/" +"0"+ to_string(m) + "/"  + to_string(y);
	dataproid= dataproid+ "0" + to_string(d) +  "0" + to_string(m)  + to_string(y);
}
void Jogador::ImprimeSal(int quantasvezesessamerdarodou)
{
	int i, x;
	x = quantasvezesessamerdarodou;
	system("cls");
	cout << "***Salario Liquido do jogador****\n";
	
	for (i = 0; i <= x; i++)
	{
		cout << "Nome:" << jogadores[i].nome << "  Salario Bruto: " << jogadores[i].salBruto << "  Salario liquido:" << jogadores[i].salLiq;

	}

	cout << "\n Pressione QUALQUER tecla para continuar";
	cin;

	Destino();

}
void Jogador::ValidaCat(char categoria)
{
	bool valida = false;
	if (categoria == 'b' || categoria == 'B')
	{
		cout << "categoria base \n";
		valida = true;
	}
	else if (categoria == 'p' || categoria == 'P')
	{
		cout << "profisional";
		valida = true;
	}
	if (valida == false)
	{
		PegaCat();
	}
}

void Jogador::PegaCat()
{
	system("cls");
	cout << "********Cadastro de jogador*********\n";
	cout << "insira a categoria do jogador: P ou B\n";
	cin >> categoria;
	//validar
	ValidaCat(categoria);
}
void Jogador::CalculaIdade(int y)
{
	idade = 2021 - y;
	
}
void Jogador::CalculaAposentadoria(int idade)
{
	//int apos = 37;
	
	tempoparaaposentar = 60 - idade;

}//35
void Jogador::CalculaSalarioLiquido(float salBruto)
{
	
	float desconto;
	float imposto;
	float totalroubado;
	if (salBruto <= 1100)
	{
		desconto = 0.075;
		imposto = 0;
	}
	else if (salBruto <=2000)
	{
		desconto = 0.09;
		imposto = 0.075;
	}
	else if (salBruto<=3100)
	{
		desconto = 0.12;
		imposto = 0.15;
	}
	else if (salBruto <=4100)
	{
		desconto = 0.14;
		imposto = 0.22;
	}
	else if (salBruto > 4100)
	{
		desconto = 0.14;
		imposto=0.27;
	}
	totalroubado = salBruto * desconto + salBruto * imposto;
	salLiq = salBruto - totalroubado;

}
void Jogador::CriaCsv(int quantasvezesessamerdarodou)
{
	ofstream file;
	int x;
	x = quantasvezesessamerdarodou;
	file.open("jogadores.csv", ios::out | ios::app);

	for (int i = 0; i < x; i++)
	{
	file << jogadores[i].nome << ", ";
		file << jogadores[i].id << ", ";
		file << jogadores[i].dataNasc << ", ";
		file << jogadores[i].nacionalidade << ", ";
		file << jogadores[i].categoria << ", ";
		file << jogadores[i].salBruto << ", ";
		file << jogadores[i].idade << ", ";
		file << jogadores[i].salLiq << ", ";
		file << jogadores[i].tempoparaaposentar << ", ";
		file << jogadores[i].time;
		file << "\n";
	}
			file.close();

}

void Jogador::BuscaCsv()
{
	int opcaobusca;
	//busca por algum dos atrib
	//vertodosjogadores
	//carregar no inicio , informar quantos jogadores salvos;
	
	cout << "*********Busca de jogadores**********\n";
	cout << "Selecione o modo de busca:\n";
	cout << "1-ID\n";
	cout << "2-Nome\n";
	cin >> opcaobusca;
	if (opcaobusca==1)
	{

	}
	else if(opcaobusca==2)
	{
			
	}
	

}
void Jogador ::ColetaTime(int quantasvezesessamerdarodou)
{
	int x;
	int op;
	x = quantasvezesessamerdarodou;
	system("cls");
	cout << ("*Insira o Time Do jogador *<<\	n");
	for (int i = 0; i < x; i++)
	{
		cin >> jogadores[i].time;//naopert
	}
	cout << ("Time não cadastrado deseja adiionar?\n");
	cout << ("1-Sim!\n");
	cout << ("2-Não!Ver times cadastrados\n");
	cin >> op;
	if (op==1)
	{
		//CadastraTime();
	}
	else if (op == 2)
	{
		//mostrar times do .csv
	}
}

//////////////////get e set;////////////////
void Jogador::SetNome(string nom)
{
	nome = nom;
}
void Jogador::SetId(string codid)
{
	id = codid;
}
void Jogador::SetDataNasc(string dianasc)
{
	dataNasc = dianasc;
}
void Jogador::SetNacio(string nac)
{
	nacionalidade = nac;
}
void Jogador::SetCat(char cat)
{
	categoria = cat;
}

void Jogador::SetSalBruto(float bruto)
{
	salBruto = bruto;
}

void Jogador::SetSalLiq(float liquido)
{
	salLiq =liquido;
}
void Jogador::SetIdade(int anus)
{
	idade = anus;
}
void Jogador::SetTempoAp(int tempo)
{
	tempoparaaposentar = tempo;
}
void Jogador::SetJogadores(Jogador* novojogadores)
{	
	int i;
	for (int i = 0; i < 10; i++)
	{
		jogadores[i] = novojogadores[i];
	}
}
void Jogador::SetTime(string team)
{
	time = team;
}
////////////////gets

string Jogador::GetNome()
{
	return nome;
}
string Jogador::GetId()
{
	return id;
}
string Jogador::GetDataNasc()
{
	return dataNasc;
}
string Jogador:: GetNacio()
{
	return nacionalidade;
}
char Jogador::GetCat()
{
	return categoria;
}
float Jogador::GetSalBruto()
{
	return salBruto;
}
float Jogador::GetSalLiq()
{
	return salLiq;
}
int Jogador::GetIdade()
{
	return idade;
}
int Jogador::GetTempoAp()
{
	return tempoparaaposentar;
}
Jogador Jogador::GetJogadores()
{
	return jogadores[10];
}

string Jogador::GetTime()
{
	return time;
}