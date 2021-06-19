#include "Empregado.h"
#include "Adminstrador.h"
Empregado empregados[50];
float Empregado::calcularSal(float salBase, float imposto)
{
	float desc;
	float imptemp;
	imptemp = imposto / 100;
	desc = salBase * imptemp;
	salTotal = salBase - desc;
	return salTotal;
}
//void Empregado::CriaEmpregados()
//{
//	empregados[0].nome = "Nestle";
//	empregados[0].endereco = "rua dad uniritter";
//	empregados[0].telefone = "9999999999"; 
//	empregados[0].salBase=;
//	empregados[0].codSetor;
//	empregados[0].salTotal;
//	empregados[0].imposto;
//}
void Empregado::MenuEmpregado()
{
	int op;
	cout << "***Menu Empregados**\n";
	cout << "1-lista de todos empregados\n";
	cout << "2-Ver Salario liquido de empregado\n";
	cout << "3-Busca de empregados\n";
	cout << "4-Cadastrar empregados\n";
	cout << "5-Lista de empregados por departamento\n";
	cin >> op;
	switch (op)
	{
	case 1:
	case 2:
		exibeSal();
	case 3:
	case 4:
	case 5:
	default:
		break;
	}

}

void Empregado::exibeSal()
{
	int  s;
	cout << "***Salario base***\n";
	cout << "Digite o setor do funcionario\n";
	cin >> s;
	if (s < 0 || s>3)
	{
		cout << "setor invalido";
	}
	
	for (int i = 0; i < 50; i++)
	{
		if (empregados[i].codSetor == 1)
		{
			cout << empregados[i].GetNome() << "-----" << empregados[i].getsalTotal();
		}
		else if (empregados[i].codSetor == 2)
		{
			cout << empregados[i].GetNome() << "-----" << empregados[i].getsalTotal();
		}
		else if(empregados[i].codSetor == 3)
		{
			cout << empregados[i].GetNome() << "-----" << empregados[i].getsalTotal();
		}
	
	}
	
	/*
	1-adm
	2-vendas
	3-operario
	*/


}


void Empregado::setcodSetor(int cod)
{
	codSetor = cod;
}
void Empregado::setsalBase(float base)
{
	salBase = base;
}
void Empregado::setsalTotal(float st)
{
	salTotal = st;
}
void Empregado::setImposto(float imp)
{
	imposto = imp;
}

int Empregado::getcodSetor()
{
	return codSetor;

}
float Empregado::getsalBase()
{
	return salBase;
}
float Empregado::getsalTotal()
{
	return salTotal;
}
float Empregado::getImposto()
{
	return imposto;
}


