#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");
//
	char nome[100];
	char cpf[12];
	int e1, e2, e3, e4;
	double plano, desconto;
//
cout << "Operadora:" << endl << "1 - Vivo" << endl << "2 - Claro" << endl << "3 - Tim" << endl;
cout << "Escolha: ";
cin >> e1;
switch(e1){
case(1):
	cout << "Digite o nome do cliente: ";
	cin >> nome;
	cout << "Digite o cpf do cliente: ";
	cin >> cpf;
	cout << "Plano do cliente:" << endl;
	cout << "1 - Pré-pago" << endl << "2 - Pós-pago" << endl << "3 - Controle" << endl;
	cin >> e2;
	switch(e2){
		case (1):
			cout << "Planos Pré-pago:" << endl;
			cout << "1 - 3GB/7dias - R$14,99" << endl;
			cout << "2 - 2GB/7dias - R$11,99" << endl;
			cout << "3 - 4GB/15dias - R$19,99" << endl;
			cout << "Escolha: ";
			cin >> e3;
			switch(e3){
				case(1):
					plano = 14.99;
					break;
				case(2):
					plano = 11.99;
					break;
				case(3):
					plano = 19.99;
					break;
			}
			break;
		case(2):
			cout << "Planos Pós-pago:" << endl;
			cout << "1 - 43GB - R$119,99/mês" << endl;
			cout << "2 - 53GB - R$139,99/mês" << endl;
			cout << "3 - 53GB+Spotify - R$149,99/mês" << endl;
			cout << "Escolha: ";
			cin >> e3;
			switch(e3){
				case(1):
					plano = 119.99;
					break;
				case(2):
					plano = 139.99;
					break;
				case(3):
					plano = 149.99;
					break;
			}
			break;
		case(3):
			cout << "Planos Controle:" << endl;
			cout << "1 - 13GB - R$54,99/mês" << endl;
			cout << "2 - 15GB - R$64,99/mês" << endl;
			cout << "3 - 19GB - R$84,99/mês" << endl;
			cout << "Escolha: ";
			cin >> e3;
			switch(e3){
				case(1):
					plano = 54.99;
					break;
				case(2):
					plano = 64.99;
					break;
				case(3):
					plano = 84.99;
					break;
			}
			break;		
			}	
	}
cout << nome << endl;
cout << cpf << endl;
cout << "R$" << plano;

}
