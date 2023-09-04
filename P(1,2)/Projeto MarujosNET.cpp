#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[100], cpf[12], emp[30];
	int e1, e2, e3, e4, aux = 0;
	double valor;
	cout << "Bilhetagem de contas de internet: " << endl;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	cout << "Digite seu nome completo:" << endl;
	cin.getline(nome, 100);
	cout << "Digite seu CPF: " << endl;
	do
	{
		cin.getline(cpf, 12);
		if(strlen(cpf) == 11)
			break;
		cout << "CPF inválido. Por favor, digite novamente: " << endl;
	}
	while(strlen(cpf) < 11);
	do
	{
		cout << "Digite o nome de sua fornecedora de internet: ";
		cin.getline(emp, 30);
		if(strcmp(emp, "Vivo") == 0)
		{
			e1 = 1;
			aux = 1;
			cout << "Selecione a forma de pagamento:" << endl;
			cout << "1 - Pré-pago\n2 - Pós-pago\n3 - Controle\n";
			do
			{
				cout << "Opção: ";
				cin >> e2;
				if(e2 >= 1 && e2 <= 3)
					break;
				cout << "Selecione uma opção válida!" << endl;
			}
			while(e2 > 3 || e2 < 1);
		}
		else if(strcmp(emp, "Tim") == 0)
		{
			e1 = 2;
			aux = 1;
			cout << "Selecione a forma de pagamento:" << endl;
			cout << "1 - Pré-pago\n2 - Pós-pago\n3 - Controle\n";
			do
			{
				cout << "Opção: ";
				cin >> e2;
				if(e2 >= 1 && e2 <= 3)
					break;
				cout << "Selecione uma opção válida!" << endl;
			}
			while(e2 > 3 || e2 < 1);
		}
		else
		{
			aux = 0;
			cout << "Favor digitar uma empresa válida." << endl;
		}
	}
	while(aux != 1);
	switch(e1)
	{
	case 1:
		switch(e2)
		{
		case 1: //Pré-pago Vivo
			cout << "Selecione um plano: " << endl;
			cout << "1 - 3GB: R$ 14,99/7 dias\nCom WhatsApp e minutos ilimitados + 1GB de bônus válido ao acumular R$ 35 em recargas" << endl;
			cout << endl;
			cout << "2 - 2GB: R$ 11,99/7 dias\nCom WhatsApp e minutos ilimitados + 1GB de bônus válido ao acumular R$ 35 em recargas" << endl;
			cout << endl;
			cout << "3 - 3GB: R$ 14,99/15 dias\nCom WhatsApp e minutos ilimitados + 1GB de bônus válido ao acumular R$ 35 em recargas" << endl;
			cout << endl;
			cout << "4 - 4GB: R$ 19,99/7 dias\nCom WhatsApp e minutos ilimitados + 1GB de bônus válido ao acumular R$ 35 em recargas" << endl;
			cout << endl;
			cout << "Obs.: todos os planos pré-pagos são renovados automaticamente!" << endl;
			cout << endl;
			do
			{
				cout << "Opção: ";
				cin >> e3;
				if(e3 >= 1 && e3 <= 4)
					break;
				cout << "Selecione uma opção válida!" << endl;
			}
			while(e3 > 4 || e3 < 1);
			switch(e3)
			{
			case 1:
				valor = 14.99;
				break;
			case 2:
				valor = 11.99;
				break;
			case 3:
				valor = 14.99;
				break;
			case 4:
				valor = 19.99;
				break;
			default:
				break;
			}
			break;
		case 2: //Pós-pago Vivo
			cout << "Selecione um plano: " << endl;
			cout << "1 - 43GB: R$ 119,99/mês\n15GB + 3GB Fatura digital + 15GB Prime Video/Music" << endl;
			cout << endl;
			cout << "2 - 53GB: R$ 139,99/mês\n25GB + 3GB Fatura Digital + 25GB GloboPlay" << endl;
			cout << endl;
			cout << "3 - 53GB: R$ 139,99/mês\n25GB + 3GB Fatura Digital + 25GB Spotify Premium" << endl;
			cout << endl;
			cout << "4 - 53GB: R$ 149,99/mês\n25GB + 3GB Fatura Digital + 25GB Netflix Padrão" << endl;
			cout << endl;
			do
			{
				cout << "Opção: ";
				cin >> e3;
				if(e3 >= 1 && e3 <= 4)
					break;
				cout << "Selecione uma opção válida!" << endl;
			}
			while(e3 > 4 || e3 < 1);
			switch(e3)
			{
			case 1:
				valor = 119.99;
				break;
			case 2:
				valor = 139.99;
				break;
			case 3:
				valor = 139.99;
				break;
			case 4:
				valor = 149.99;
				break;
			default:
				break;
			}
			break;
		case 3: //Controle Vivo
			cout << "Selecione um plano: " << endl;
			cout << "1 - 13GB: R$ 54,99/mês\n5GB + 3GB bônus fatura digital" << endl;
			cout << endl;
			cout << "2 - 15GB: R$ 64,99/mês\n6GB + 3GB bônus fatura digital" << endl;
			cout << endl;
			cout << "3 - 19GB: R$ 84,99/mês\n8GB + 3GB bônus fatura digital" << endl;
			cout << endl;
			cout << "Todos os planos Vivo Controle possuem ligações e SMS ilimitados além de 5GB de bônus de portabilidade!" << endl;
			cout << endl;
			do
			{
				cout << "Opção: ";
				cin >> e3;
				if(e3 >= 1 && e3 <= 3)
					break;
				cout << "Selecione uma opção válida!" << endl;
			}
			while(e3 > 3 || e3 < 1);
			switch(e3)
			{
			case 1:
				valor = 54.99;
				break;
			case 2:
				valor = 64.99;
				break;
			case 3:
				valor = 84.99;
				break;
			default:
				break;
			}
			break;
		default:
			cout << "Selecione um plano válido!" << endl;
			cout << "Opção: ";
			cin >> e3;
			break;
		}
		break;
	case 2:
		switch(e2)
		{
		case 1: //Pré-pago Tim
			cout << "Selecione um plano: " << endl;
			break;
		case 2: //Pós-pago Tim
			cout << "Selecione um plano: " << endl;
			break;
		case 3: //Controle Tim
			cout << "Selecione um plano: " << endl;
			break;
		default:
			break;
		}
		break;
	case 3:
		switch(e2)
		{
		case 1: //Pré-pago Claro
			cout << "Selecione um plano: " << endl;
			break;
		case 2: //Pós-pago Claro
			cout << "Selecione um plano: " << endl;
			break;
		case 3: //Controle Claro
			cout << "Selecione um plano: " << endl;
			break;
		default:
			break;
		}
	default:
		break;
	}
	cout << endl;
	cout << "Nome: " << nome << endl;
	cout << "CPF: " << cpf << endl;
	cout << fixed << setprecision(2);
	cout << "Valor a ser pago: R$ " << valor << endl;

	return 0;
}