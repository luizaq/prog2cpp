
#include "Gestao.h"
using namespace std;

Adminstrador administradores[10];
Vendedor vendedores[20];
Operario operarios[50];
Fornecedor fornecedores[20];

Fornecedor nestle;
Empregado func;
Adminstrador adm;
Vendedor vend;
Operario opera;

int contadorCadastroAdm, contadorCadastroVend, contadorCadastroOP, contadorCadastroFor = 0;
bool cadastrou = false;
bool cadastrouFor = false;

string listaNomesAdm[20]{ "Maria", "Jose", "Antonia"," Canadá"
, "Parana", "França", "Goiás", "Diamantina", "Florianópolis", "Brasil", "Pedro", "Neymar",
	"Ronaldo"," Suécia", "Curitiba"," Chile", "Vitória", "Paloma"
	, "Luiz", "Larissa"
};
string listaEnderecos[20]{ "Rua dr pereira neto",
"Rua orfanatrofio","Avenida cavalhada","av getulio vargas",
"Rua Riachuelo","Rua dos andradas" };
string baseTel[20]{ "9981","9982","9983",
"9984","9985","9986" };
string meioTel[20]{ "652",
"644","334","194","137","503"
};
string fimTel[20]{ "20",
"23","49","37","48","58" };
string listaNomesVendedores[20]{ "Nasir Bennett",
"Mekhi Spence","Shuaib Barclay","Jasmin Cruz",
"Ayaan Robson","Mary Weaver","Hudson Curtis","Elaina David",
"Brandan Mccarty","Layton O'Ryan","Faheem Sullivan","Tabitha Povey",
"Danny Wharton","Jill Vega","Emmanuel Chan","Maaria Rosario",
"Ebony Nguyen","Eshan Bass","Taliyah Summers","Lindsey Carlson", };

int main()
{
	criaFuncsAdms();
	CriaVendedores();
	CriaOperarios();
	CriaFornecedores();

	float totaldiv;

	int op;
	cout << "***Sistema de gerenciamento*****\n";
	cout << "Por Luiza Vargas";

	cout << "Qual menu deseja ver? \n";
	cout << "1-Menu Fornecedores\n";
	cout << "2- Menu Funcionarios \n";
	cout << "3-Relatorios\n";
	cin >> op;

	switch (op)
	{
	case 1:
		MenuFornecedores();
		break;
	case 2:
		MenuFunc();
		break;
	case 3:
		MenuRel();
		break;

	default:
		cout << "opcao invalida";
		break;
	}


}
void MenuRel()
{
	int op;
	cout << "****Menu Relatorios***\n";
	cout << "Deseja ver qual relatorio? \n";
	cout << "1-Lista de TODAS as pessoas cadastradas no sistema\n";
	cout << "2-Todos os Fornecedores \n";
	cout << "3-Relatorios de empregados\n";
	cout << "4- Voltar ao menu anterior \n";
	cin >> op;

	switch (op)
	{
	case 1:
		AmostraGaleraToda();
		break;
	case 2:
		AmostraFornecedores();
		break;
	case 3:
		RelEmp();
		break;
	case 4:
		main();
		break;
	default:
		break;
	}
}
void RelEmp()
{
	int op;
	system("cls");
	cout << "Relatorio de empregados \n";
	cout << "1-Exibir todos empregados\n";
	cout << "2-Exibir todos administradores \n";
	cout << "3-Exibir todos vendedores\n";
	cout << "4-Exibir todos operarios\n";
	cout << "5- voltar ao menu anterior \n";
	cin >> op;
	switch (op)
	{
	case 1:
		AmostraTodosEm();
		break;
	case 2:
		AmostraAdm();
		break;
	case 3:
		AmostraVend();
		break;
	case 4:
		AmostraOp();
		break;
	case 5:
		MenuRel();
		break;
	default:
		break;
	}
}


void MenuFunc()
{
	int op;
	//vertodos os funcs
	//ver somente 1 dep
	//cadastrar novo func
	system("cls");
	cout << "***Menu Funcionarios***\n";
	cout << "1-Ver todos funcionarios da empresa:\n";
	cout << "2-Ver departamento\n";
	cout << "3-Cadastrar novo funcionário\n";
	cout << "4-Buscar funcionarios\n";
	cin >> op;
	int cod;
	switch (op)
	{
	case 1:
		AmostraTodosEm();
		break;
	case 2:
		cadastrou = true;
		cout << "Insira o cod de setor|1adm.2vendas|3operario\n";
		cin >> cod;
		switch (cod)
		{
		case 1:
			AmostraAdm();
			break;
		case 2:
			AmostraVend();
			break;
		case 3:
			AmostraOp();
			break;

		default:
			break;
		}
		break;
	case 3:
		cadastrou = true;
		VerificaCad();
		break;
	case 4:
		break;

	default:
		cout << "Opcao invalida\n";
		break;
	}


}
void VerificaCad()
{
	int opc;
	cout << "****cadastro de funcionarios***\n";
	cout << "--Digite o departamento do novo funcionario--\n";
	cout << "1-Administrativo\n";
	cout << "2-Vendedor \n";
	cout << "3-Operário \n";
	cin >> opc;

	switch (opc)
	{
	case 1:
		cadastraADM();
		break;
	case 2:
		cadastraVend();
		break;
	case 3:
		cadastraOp();
		break;
	default:
		break;
	}

}
void AmostraTodosEm()
{

	AmostraAdm();
	AmostraOp();
	AmostraVend();
}
void AmostraGaleraToda()
{
	string a;
	AmostraTodosEm();
	AmostraFornecedores();
	cin >> a;
}
void AmostraAdm()
{
	int x = 6;
	if (cadastrou == true)
	{
		x = 6 + contadorCadastroAdm;
	}

	//inicialmente 6 para todso , se o cadastra rodou roda 20
	for (int i = 0; i < x; i++)
	{

		cout << administradores[i].getcodSetor() << "--->" << "     "
			<< administradores[i].GetNome() << "|" << "     "
			<< administradores[i].GetEnd() << "|" << "     "
			<< administradores[i].GetTel() << "|" << "     "
			<< administradores[i].getsalBase() << "|" << "     "
			<< administradores[i].getImposto() << "|" << "     "
			<< administradores[i].getAjdc() << "|" << "     "
			<< administradores[i].getsalTotal() << "|" << "     " << "\n";


	}
}
void AmostraVend()
{
	int x = 6;
	if (cadastrou == true)
	{
		x = 6 + contadorCadastroVend;
	}

	//inicialmente 6 para todso , se o cadastra rodou roda 20
	for (int i = 0; i < x; i++)
	{

		cout << vendedores[i].getcodSetor() << "--->" << "     "
			<< vendedores[i].GetNome() << "|" << "     "
			<< vendedores[i].GetEnd() << "|" << "     "
			<< vendedores[i].GetTel() << "|" << "     "
			<< vendedores[i].getsalBase() << "|" << "     "
			<< vendedores[i].getImposto() << "|" << "     "
			<< vendedores[i].getComissao() << "|" << "     "
			<< vendedores[i].getValorVendas() << "|" << "     "
			<< vendedores[i].getsalTotal() << "|" << "     " << "\n";


	}
}
void AmostraOp()
{
	int x = 6;
	if (cadastrou == true)
	{
		x = 6 + contadorCadastroOP;
	}

	//inicialmente 6 para todso , se o cadastra rodou roda 20
	for (int i = 0; i < x; i++)
	{

		cout << operarios[i].getcodSetor() << "--->" << "     "
			<< operarios[i].GetNome() << "|" << "     "
			<< operarios[i].GetEnd() << "|" << "     "
			<< operarios[i].GetTel() << "|" << "     "
			<< operarios[i].getsalBase() << "|" << "     "
			<< operarios[i].getImposto() << "|" << "     "
			<< operarios[i].getComissao() << "|" << "     "
			<< operarios[i].getValorProd() << "|" << "     "
			<< operarios[i].getsalTotal() << "|" << "     " << "\n";


	}
}
void AmostraFornecedores()
{
	int x = 6;
	if (cadastrouFor == true)
	{
		x += contadorCadastroFor;
	}

	for (int i = 0; i < x; i++)
	{
		cout << i << "   --" << fornecedores[i].GetNome()
			<< "  " << fornecedores[i].getCredito() << "     "
			<< fornecedores[i].getDivida()
			<< "     " << fornecedores[i].getSaldo() << " \n";
	}

}
void cadastraADM()
{
	int op;
	string temp;
	float ftemp, saltemp, saltotal;

	system("cls");
	cout << "**Cadastro de Administradores**\n";
	for (int i = 5; i < 20; i++)
	{
		cout << "Insira o nome do funcionario \n";
		cin >> temp;
		administradores[i].SetNome(temp);

		cout << "Insira o endereco do funcionario \n";
		cin >> temp;
		administradores[i].SetEnd(temp);


		cout << "Insira o telefone do funcionario \n";
		cin >> temp;
		administradores[i].SetTel(temp);

		cout << "Insira o salario base do funcionario \n";
		cin >> ftemp;
		administradores[i].setsalBase(ftemp);

		cout << "Insira o imposto a ser descontado do funcionario \n";
		cin >> ftemp;
		administradores[i].setImposto(ftemp);

		cout << "Insira a ajuda de custo do funcionario \n";
		cin >> ftemp;
		administradores[i].setAjdc(ftemp);

		administradores[i].setcodSetor(1);

		saltemp = func.calcularSal(administradores[i].getsalBase(),
			administradores[i].getImposto());
		saltotal = adm.calculaSalAdm(administradores[i].getAjdc(), saltemp);

		administradores[i].setsalTotal(saltotal);

		contadorCadastroAdm++;

		cout << "Deseja cadastrar mais um adminstrador? \n";
		cout << "1- Sim\n";
		cout << "2-Nao\n";
		cin >> op;

		if (op == 2)
		{
			break;
		}

	}
	destino(1);
}
void removeAdm()
{
	int x = 6;

	if (cadastrou == true)
	{
		x += contadorCadastroAdm;
	}

	cout << "Qual adm deseja remover \n";

	for (int i = 0; i < x; i++)
	{
		int y;
		y = i + 1;
		cout << y << "-->" << administradores[i].GetNome();

	}

	int num;
	cout << "Digite o numero do usuario  que deseja remover \n";
	cin >> num;

	if (num > x)
	{
		cout << "invalido\n";
	}
	num -= 1;

	administradores[num].SetNome("");
	administradores[num].SetEnd("");
	administradores[num].SetTel("");
	administradores[num].setsalBase(0);
	administradores[num].setImposto(0);
	administradores[num].setAjdc(0);
	administradores[num].setsalTotal(0);

	cout << "Administrador removido\n";
}
void removeVend()
{
	int x = 6;

	if (cadastrou == true)
	{
		x += contadorCadastroVend;
	}

	cout << "Qual adm deseja remover \n";

	for (int i = 0; i < x; i++)
	{
		int y;
		y = i + 1;
		cout << y << "-->" << vendedores[i].GetNome();

	}

	int num;
	cout << "Digite o numero do usuario  que deseja remover \n";
	cin >> num;

	if (num > x)
	{
		cout << "invalido\n";
	}
	num -= 1;

	vendedores[num].SetNome("");
	vendedores[num].SetEnd("");
	vendedores[num].SetTel("");
	vendedores[num].setsalBase(0);
	vendedores[num].setImposto(0);
	vendedores[num].setValorComissao(0);
	vendedores[num].setsalTotal(0);
	vendedores[num].setValorVendas(0);

	cout << "Vendedor removido\n";
}
void  removeOp()
{
	int x = 6;

	if (cadastrou == true)
	{
		x += contadorCadastroOP;
	}

	cout << "Qual adm deseja remover \n";

	for (int i = 0; i < x; i++)
	{
		int y;
		y = i + 1;
		cout << y << "-->" << operarios[i].GetNome();

	}

	int num;
	cout << "Digite o numero do usuario  que deseja remover \n";
	cin >> num;

	if (num > x)
	{
		cout << "invalido\n";
	}
	num -= 1;

	operarios[num].SetNome("");
	operarios[num].SetEnd("");
	operarios[num].SetTel("");
	operarios[num].setsalBase(0);
	operarios[num].setImposto(0);
	operarios[num].setValorComissao(0);
	operarios[num].setsalTotal(0);
	operarios[num].setValorProd(0);

	cout << "Operario removido\n";
}
void cadastraOp()
{
	int op;
	string temp;
	float ftemp, saltemp, saltotal;

	system("cls");
	cout << "**Cadastro de Operarios**\n";
	for (int i = 5; i > 20; i++)
	{
		cout << "Insira o nome do funcionario \n";
		cin >> temp;
		operarios[i].SetNome(temp);

		cout << "Insira o endereco do funcionario \n";
		cin >> temp;
		operarios[i].SetEnd(temp);


		cout << "Insira o telefone do funcionario \n";
		cin >> temp;
		operarios[i].SetTel(temp);

		cout << "Insira o salario base do funcionario \n";
		cin >> ftemp;
		operarios[i].setsalBase(ftemp);

		cout << "Insira o imposto a ser descontado do funcionario \n";
		cin >> ftemp;
		operarios[i].setImposto(ftemp);

		cout << "Insira a % de comissao do operario \n";
		cin >> ftemp;
		operarios[i].setValorComissao(ftemp);

		operarios[i].setcodSetor(3);

		saltemp = func.calcularSal(operarios[i].getsalBase(), operarios[i].getImposto());
		saltotal = opera.calculaSalOP(operarios[i].getComissao(), operarios[i].getValorProd(), saltemp);


		operarios[i].setsalTotal(saltotal);

		contadorCadastroOP++;

		cout << "Deseja cadastrar mais um operario? \n";
		cout << "1- Sim\n";
		cout << "2-Nao\n";
		cin >> op;

		if (op == 2)
		{
			break;
		}

	}
	destino(3);
}
void cadastraVend()
{
	int op;
	string temp;
	float ftemp, saltemp, saltotal;

	system("cls");
	cout << "**Cadastro de Administradores**\n";
	for (int i = 5; i < 20; i++)
	{
		cout << "Insira o nome do funcionario \n";
		cin >> temp;
		vendedores[i].SetNome(temp);

		cout << "Insira o endereco do funcionario \n";
		cin >> temp;
		vendedores[i].SetEnd(temp);


		cout << "Insira o telefone do funcionario \n";
		cin >> temp;
		vendedores[i].SetTel(temp);

		cout << "Insira o salario base do funcionario \n";
		cin >> ftemp;
		vendedores[i].setsalBase(ftemp);

		cout << "Insira o imposto a ser descontado do funcionario \n";
		cin >> ftemp;
		vendedores[i].setImposto(ftemp);

		cout << "Insira a % de comissao do vendedor \n";
		cin >> ftemp;
		vendedores[i].setValorComissao(ftemp);

		vendedores[i].setcodSetor(2);

		saltemp = func.calcularSal(vendedores[i].getsalBase(), vendedores[i].getImposto());
		saltotal = vend.CalculaVendedor(vendedores[i].getComissao(), vendedores[i].getValorVendas(), saltemp);


		vendedores[i].setsalTotal(saltotal);

		contadorCadastroVend++;

		cout << "Deseja cadastrar mais um operario? \n";
		cout << "1- Sim\n";
		cout << "2-Nao\n";
		cin >> op;

		if (op == 2)
		{
			break;
		}

	}
	destino(2);
}
void criaFuncsAdms()
{
	float total, base, temp;
	string nome;
	for (int x = 0; x < 6; x++)
	{

		base = adm.salAleatorio();
		administradores[x].SetNome(NomeADMAleatorio());
		administradores[x].SetEnd(EndAleatorio());
		administradores[x].SetTel(telAleatorio());
		administradores[x].setsalBase(base);
		administradores[x].setImposto(ImpAleatorio());
		administradores[x].setcodSetor(1);
		administradores[x].setAjdc(AjdcAleatorio());
		temp = func.calcularSal(administradores[x].getsalBase(),
			administradores[x].getImposto());
		total = adm.calculaSalAdm(administradores[x].getAjdc(), temp);

		administradores[x].setsalTotal(total);

	}

}
void CriaFornecedores()
{
	float saldinho, divzinha, credinho;
	for (int i = 0; i < 6; i++)
	{
		divzinha = nestle.DividaAleatoria();
		credinho = nestle.CreditoAleatorio();
		saldinho = nestle.obterSaldo(credinho, divzinha);
		fornecedores[i].SetNome(NomeVendedorAleatorio());
		fornecedores[i].SetTel(telAleatorio());
		fornecedores[i].SetEnd(EndAleatorio());
		fornecedores[i].setCredito(credinho);
		fornecedores[i].setDivida(divzinha);
		fornecedores[i].setSaldo(saldinho);
	}
}
void CadastraFornecedores()
{
	cadastrou = true;
	for (int i = 5; i < 20; i++)
		//i=5 pra nao apagar os criados automatico abaixo.
	{
		float ftemp, saldo;
		string stemp;

		system("cls");
		cout << "**cadstro de fornecedores**\n";

		cout << "Insira o nome do fornecedor \n";
		cin >> stemp;
		fornecedores[i].SetNome(stemp);

		cout << "Insira o telefone do fornecedor";
		cin >> stemp;
		fornecedores[i].SetTel(stemp);

		cout << "Insira o endereco do fornecedor \n";
		cin >> stemp;
		fornecedores[i].SetEnd(stemp);

		cout << "Insira o valor da divida do fornecedor \n";
		cin >> ftemp;
		fornecedores[i].setDivida(ftemp);

		cout << "Insira o valor do credito do fornecedor \n";
		cin >> ftemp;
		fornecedores[i].setCredito(ftemp);

		saldo = nestle.obterSaldo(fornecedores[i].getCredito(), fornecedores[i].getDivida());
		fornecedores[i].setSaldo(saldo);

		int op;
		cout << "Deseja cadastrar mais um fornecedor? \n";
		cout << "1- Sim\n";
		cout << "2-Nao\n";
		cin >> op;

		if (op == 2)
		{
			break;
		}
		contadorCadastroFor++;
	}
	destino(4);
}
void destino(int codsetor)
{
	if (codsetor == 1)//adm
	{
		int op;
		cout << "O que deseja fazer\n";
		cout << "1-Imprimir os ADMS\n";
		cout << "2-Remover algum adm";
		cout << "3- Voltar ao menu anterior\n";
		cin >> op;

		switch (op)
		{
		case 1:
			cout << "Setor" << "     " << "Nome" << "     " << "Endereco" << "     " << "Telefone "
				<< "     " << "Sal Base" << "     " << "Imposto" << "     " << "Comissao %"
				<< "     " << "Ajuda de custo" << "     " << "Sal Total\n";
			AmostraAdm();
			break;
		case 2:
			removeAdm();
			break;
		case 3:
			MenuFunc();
			break;
		default:
			cout << "inválido\n";
			break;
		}
	}
	else if (codsetor == 2)//vend
	{
		int op;
		cout << "O que deseja fazer\n";
		cout << "1-Imprimir os Vendedores\n";
		cout << "2-Remover algum VEndedor";
		cout << "3- Voltar ao menu anterior\n";
		cin >> op;

		switch (op)
		{
		case 1:
			cout << "Setor" << "     " << "Nome" << "     " << "Endereco" << "     " << "Telefone "
				<< "     " << "Sal Base" << "     " << "Imposto" << "     " << "Comissao %"
				<< "     " << "Valor Vendas" << "     " << "Sal Total\n";
			AmostraVend();
			break;
		case 2:
			removeVend();
			break;
		case 3:
			MenuFunc();
			break;
		default:
			cout << "inválido\n";
			break;
		}
	}
	else if (codsetor == 3)//op
	{
		int op;
		cout << "O que deseja fazer\n";
		cout << "1-Imprimir os operarios\n";
		cout << "2-Remover algum operario";
		cout << "3- Voltar ao menu anterior\n";
		cin >> op;

		switch (op)
		{
		case 1:
			cout << "Setor" << "     " << "Nome" << "     " << "Endereco" << "     " << "Telefone "
				<< "     " << "Sal Base" << "     " << "Imposto" << "     " << "Comissao %"
				<< "     " << "Valor Producao" << "     " << "Sal Total\n";
			AmostraOp();
			break;
		case 2:
			removeOp();
			break;
		case 3:
			MenuFunc();
			break;


		default:
			cout << "inválido\n";
			break;
		}

	}
	else if (codsetor == 4)//fornecedor
	{
		int op;
		cout << "O que deseja fazer\n";
		cout << "1-Imprimir os fornecedores\n";
		cout << "2-Remover algum fornecedor";
		cout << "3- Voltar ao menu anterior\n";
		cin >> op;

		switch (op)
		{
		case 1:
			cout << "id" << "       " << "nome" << "      " << "Credito" << "      " << "Saldo devedor " << " total    \n ";
			AmostraFornecedores();
			break;
		case 2:
			removeForn();
			break;
		case 3:
			MenuFunc();
			break;
		default:
			cout << "inválido\n";
			break;
		}
		AmostraFornecedores();
	}
	else
	{
		cout << "?? \n";
	}

}
void removeForn()
{
	int x = 6;

	if (cadastrouFor == true)
	{
		x += contadorCadastroFor;
	}

	cout << "Qual fornecedor deseja remover \n";

	for (int i = 0; i < x; i++)
	{
		int y;
		y = i + 1;
		cout << y << "-->" << fornecedores[i].GetNome();

	}

	int num;
	cout << "Digite o numero do Fornecedor  que deseja remover \n";
	cin >> num;

	if (num > x)
	{
		cout << "invalido\n";
	}
	num -= 1;

	fornecedores[num].SetNome("");
	fornecedores[num].SetEnd("");
	fornecedores[num].SetTel("");
	fornecedores[num].setCredito(0);
	fornecedores[num].setDivida(0);
	fornecedores[num].setSaldo(0);


	cout << "Fornecedor removido\n";
}
void CriaVendedores()
{
	float total, base, sal, comissao, vendas;
	string nome;
	for (int x = 0; x < 5; x++)
	{
		base = vend.salAleatorio();
		comissao = vend.comiAleatorio();
		vendas = vend.vendasAleatorio();
		vendedores[x].SetNome(NomeVendedorAleatorio());
		vendedores[x].SetEnd(EndAleatorio());
		vendedores[x].SetTel(telAleatorio());
		vendedores[x].setsalBase(base);
		vendedores[x].setImposto(ImpAleatorio());
		vendedores[x].setcodSetor(2);
		vendedores[x].setValorComissao(comissao);
		vendedores[x].setValorVendas(vendas);
		sal = func.calcularSal(vendedores[x].getsalBase(),
			vendedores[x].getImposto());
		total = vend.CalculaVendedor(vendedores[x].getComissao(), vendedores[x].getValorVendas(), sal);

		vendedores[x].setsalTotal(total);

	}
}
void CriaOperarios()
{
	float total, base, sal, comissao, prod;
	string nome;
	for (int x = 0; x < 5; x++)
	{
		base = opera.salAleatorio();
		comissao = opera.comiAleatorio();
		prod = opera.prodAleatorio();
		operarios[x].SetNome(NomeVendedorAleatorio());
		operarios[x].SetEnd(EndAleatorio());
		operarios[x].SetTel(telAleatorio());
		operarios[x].setsalBase(base);
		operarios[x].setImposto(ImpAleatorio());
		operarios[x].setcodSetor(3);
		operarios[x].setValorComissao(comissao);
		operarios[x].setValorProd(prod);
		sal = func.calcularSal(operarios[x].getsalBase(),
			operarios[x].getImposto());
		total = vend.CalculaVendedor(operarios[x].getComissao(), operarios[x].getValorProd(), sal);

		operarios[x].setsalTotal(total);

	}
}
void MenuFornecedores()
{
	int op;

	system("cls");
	cout << "***Menu Funcionarios***\n";
	cout << "1-Ver os fornecedores da empresa:\n";
	cout << "2-Cadastrar novo fornecedor\n";
	cout << "3-Buscar funcionarios\n";
	cin >> op;

	switch (op)
	{
	case 1:
		AmostraFornecedores();
		break;
	case 2:
		cadastrou = true;
		CadastraFornecedores();
		break;
	case 3:
		BuscaFornecedores();
		break;

	default:
		cout << "Opcao invalida\n";
		break;
	}
}
void BuscaFornecedores()
{
	string nomes, nome;
	cout << "Busca de fornecedores\n";
	cout << "Digite o nome do fornecedor\n";
	cin >> nome;
	for (int i = 0; i < 20; i++)
	{
		fornecedores[i].GetNome() = nomes;
		if (nome == nomes)
		{
			cout << i << "   --" << fornecedores[i].GetNome()
				<< "  " << fornecedores[i].getCredito() << "     "
				<< fornecedores[i].getDivida()
				<< "     " << fornecedores[i].getSaldo() << " \n";
		}
	}

}
string NomeADMAleatorio()
{
	int ale;
	string nome;
	ale = rand() % 20;
	for (int i = 0; i < 20; i++)
	{
		if (i == ale)
		{
			nome = listaNomesAdm[i];
			break;
		}
	}
	return nome;
}

string NomeVendedorAleatorio()
{
	int ale;
	string nome;
	ale = rand() % 20;
	for (int i = 0; i < 20; i++)
	{
		if (i == ale)
		{
			nome = listaNomesVendedores[i];
			break;
		}
	}
	return nome;
}
string EndAleatorio()
{

	int ale;
	string ende;
	ale = rand() % 6;
	for (int i = 0; i > 6; i++)
	{
		if (i == ale)
		{
			ende = listaEnderecos[i];
			break;
		}
	}
	return ende;
}
string telAleatorio()
{

	int ale;
	//base
	string tele1, tele2, tele3;
	ale = rand() % 6;
	for (int i = 0; i < 6; i++)
	{
		if (i == ale)
		{
			tele1 = baseTel[i];
			break;
		}
	}
	//meio

	ale = rand() % 6;
	for (int i = 0; i < 6; i++)
	{
		if (i == ale)
		{
			tele2 = meioTel[i];
			break;
		}
	}
	//fim
	ale = rand() % 6;
	for (int i = 0; i < 6; i++)
	{
		if (i == ale)
		{
			tele3 = fimTel[i];
			break;
		}
	}

	tele = tele1 + tele2 + tele3;
	return tele;
}
float ImpAleatorio()
{
	imp = rand() % 20;
	return imp;
}
float AjdcAleatorio()
{
	ajdc = rand() % 2000 + 100;
	return ajdc;
}
