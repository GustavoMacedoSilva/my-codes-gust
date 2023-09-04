#include <iostream>

using namespace std;

int main()

{
//var	
	char nome [51];
	char estado [3];
	int idade;
//entrada de dados	
	cout <<"Digite seu nome: ";
	cin.getline(nome, 51);
	
	cout << "Digite o Estado: ";
	cin.getline(estado, 3);
	
	cout << "Digite sua idade: ";
	cin >> idade;
//saida de dados	
	cout << "Nome: " << nome << endl;
	cout << "Estado: " << estado << endl;
	cout << "Idade: " << idade;
	
	return 0;
}