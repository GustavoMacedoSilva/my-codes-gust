#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese"); //setando a linguagem como português
	//declaraçao de variáveis
	char nome[100], cpf[12], emp[30];//variaveis do cliente
	int e1, e2, e3, e4, aux = 0;//as entradas e uma variavel auxiliar
	double valor;//valor a ser pago
	ofstream arq;//abre o arq
	cout << "Bilhetagem de contas de internet: " << endl;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	//entrada de dados
	cout << "Digite o nome do cliente:" << endl;
	cin.getline(nome, 100);//entrada do nome do cliente
	cout << "Digite o CPF do cliente: " << endl;
	do
	{
		cin.getline(cpf, 12);//entrada do cpf e checagem
		if(strlen(cpf) == 11)
			break;
		cout << "CPF inválido. Por favor, digite novamente: " << endl;
	}
	while(strlen(cpf) < 11);
	do
	{
		cout << "Digite a fornecedora: ";
		cin.getline(emp, 30);//entrada da fornecedora e de qual é o plano do cliente
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
		else if(strcmp(emp, "Claro") == 0)
		{
			e1 = 3;
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
			cout << "Favor digitar uma empresa válida." << endl;//se digitado um numero incorreto a aux fica 0 e é repetido todo o processo ate ser digitado um numero correto
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
			cout << "3 - 3GB: R$ 14,99/14 dias\nCom WhatsApp e minutos ilimitados + 1GB de bônus válido ao acumular R$ 35 em recargas" << endl;
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
			switch(e3)//atribuição dos valores que o cliente ira pagar
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
		default://caso digitado um plano inválido 
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
			cout << "1 - 3GB: R$15,00/7 dias\nCom WhatsApp e minutos ilimitados sem bônus" << endl;
			cout << endl;
			cout << "2 - 5GB: R$19,99/7 dias\nCom WhatsApp e minutos ilimitados + 1GB de bônus válido ao acumular R$30,00 em recargas" << endl;
			cout << endl;
			cout << "3 - 7GB: R$29,99/14 dias\nCom WhatsApp e minutos ilimitados + 2GB de bônus válidos ao acumular R$30,00 em recargas" << endl;
			cout << endl;
			cout << "Todos os planos pré-pagos são renovados automaticamente!" << endl;
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
				valor = 15.00;
				break;
			case 2:
				valor = 19.99;
				break;
			case 3:
				valor = 29.99;
				break;
			default:
				break;
			}
			break;
		case 2: //Pós-pago Tim
			cout << "Selecione um plano: " << endl;
			cout << "1 - 45GB: R$109,99/mês\nCom WhatApp e minutos ilimitados com 14 dias grátis de Netflix" << endl;
			cout << endl;
			cout << "2 - 50GB: R$129,99/mês\nCom WhatsApp e minutos ilimitados com 14 dias grátis de Spotify" << endl;
			cout << endl;
			cout << "3 - 135GB: R$319,99/mês\nCom WhatsApp e minutos ilimitados com 7 dias grátis de Netflix e Spotify" << endl;
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
				valor = 109.99;
				break;
			case 2:
				valor = 129.99;
				break;
			case 3:
				valor = 319.99;
				break;
			default:
				break;
			}
			break;
		case 3: //Controle Tim
			cout << "Selecione um plano: " << endl;
			cout << "1 - 17GB: R$49,99/mês\n4GB bônus fatura digital" << endl;
			cout << endl;
			cout << "2 - 18GB: R$64,99/mês\n5GB bônus fatura digital" << endl;
			cout << endl;
			cout << "3 - 20GB: R$79,99/mês\n3GB + 5GB bônus fatura digital" << endl;
			cout << endl;
			cout << "Todos os planos possuem ligações ilimitadas" << endl;
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
			switch (e3)
			{
			case 1:
				valor = 49.99;
				break;
			case 2:
				valor = 64.99;
				break;
			case 3:
				valor = 79.99;
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
	case 3:
		switch(e2)
		{
		case 1: //Pré-pago Claro
			cout << "Selecione um plano: " << endl;
			cout << "1 - 3GB: R$29,99/mês\n3GB bônus e WhatsApp ilimitado" << endl;
			cout << endl;
			cout << "2 - 1GB: R$9,99/mês\n1GB bônus e WhatsApp ilimitados" << endl;
			cout << endl;
			do
			{
				cout << "Opção: ";
				cin >> e3;
				if(e3 >= 1 && e3 <= 2)
					break;
				cout << "Selecione uma opção válida!" << endl;
			}
			while(e3 > 2 || e3 < 1);
			switch(e3)
			{
			case 1:
				valor = 29.99;
				break;
			case 2:
				valor = 9.99;
				break;
			default:
				break;
			}
			break;
		case 2: //Pós-pago Claro
			cout << "Selecione um plano: " << endl;
			cout << "1 - 50GB: R$119,99/mês\n15GB + 15GB para vídeo +20GB bônus" << endl;
			cout << endl;
			cout << "2 - 60GB: R$139,99/mês\n20GB + 20GB para vídeo + 20GB bônus" << endl;
			cout << endl;
			cout << "3 - 80GB: R$179,99/mês\n30GB + 30GB para vídeo + 20GB bônus" << endl;
			cout << endl;
			cout << "4 - 120GB: R$259,99/mês\n50GB + 50GB para vídeo + 20GB bônus" << endl;
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
			switch (e3)
			{
			case 1:
				valor = 119.99;
				break;
			case 2:
				valor = 139.99;
				break;
			case 3:
				valor = 179.99;
				break;
			case 4:
				valor = 259.99;
				break;
			default:
				break;
			}
			break;
		case 3: //Controle Claro
			cout << "Selecione um plano: " << endl;
			cout << "1 - 12GB: R$49,99/mês\n8GB + 4GB bônus" << endl;
			cout << endl;
			cout << "2 - 20GB: R$59,99/mês\n10GB + 10GB bônus" << endl;
			cout << endl;
			do
			{
				cout << "Opção: ";
				cin >> e3;
				if(e3 >= 1 && e3 <= 2)
					break;
				cout << "Selecione uma opção válida!" << endl;
			}
			while(e3 > 2 || e3 < 1);
			switch (e3)
			{
			case 1:
				valor = 49.99;
				break;
			case 2:
				valor = 59.99;
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
	default:
		break;
	}
	cout << endl;
	cout << "Oferecemos um desconto de 10% para universitários, o cliente se encaixa nessa categoria? (1 p/ sim e 0 p/ não)" << endl;
	cout << endl;
	cout << "Opção: ";
	do
	{
		cin >> e4;//entrada da confirmação do desconto e sua checagem
		if(e4 == 0 || e4 == 1)
			break;
		cout << "Selecione uma opção válida!" << endl;
		cout << "Opção: ";
	}
	while(e4 != 0 || e4 != 1);
	if(e4 == 1)
	{
		valor = valor - (valor * 0.1);
	}
	//saída dos dados pelo arquivo criado
	arq.open("ContaDeInternet.txt", ofstream::out);
	arq << "Fornecedora: " << emp << endl;
	arq << "Nome: " << nome << endl;
	arq << "CPF: " << cpf << endl;
	arq << fixed << setprecision(2) << "Valor a ser pago: R$" << valor;
	if((e1 == 1 && e2 == 1 && (e3 == 1 || e3 == 2 || e3 == 4)) || (e1 == 2 && e2 == 1 && (e3 == 1 || e3 == 2)))
		arq << " por semana." << endl;
	else if((e1 == 1 && e3 == 3) || (e1 == 2 && e3 == 3))
		arq << " a cada duas semanas." << endl;
	else
		arq << " por mês." << endl;
	//saída de dados pelo programa
	cout << endl;
	cout << "Fornecedora: " << emp << endl;
	cout << "Nome: " << nome << endl;
	cout << "CPF: " << cpf << endl;
	cout << fixed << setprecision(2);
	cout << "Valor a ser pago: R$" << valor;
	if((e1 == 1 && e2 == 1 && (e3 == 1 || e3 == 2 || e3 == 4)) || (e1 == 2 && e2 == 1 && (e3 == 1 || e3 == 2)))
		cout << " por semana." << endl;
	else if((e1 == 1 && e2 == 1 && e3 == 3) || (e1 == 2 && e2 == 1 && e3 == 3))
		cout << " a cada duas semanas." << endl;
	else
		cout << " por mês." << endl;

	return 0;
}
