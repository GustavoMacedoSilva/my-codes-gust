#include <iostream>

using namespace std;

int main()
{
//var
	char nome[31];
	char cpf[12];
	int idade;
//entrada	
	cout << "Digite seu nome: ";
	cin.getline(nome, 31); 
	
	cout << "Digite seu CPF: ";
	cin.getline(cpf, 12); 
	
	cout << "Digite sua idade: ";
	cin >> idade;
//saida	
	cout << "Nome: " << nome << endl;
	cout << "CPF: " << cpf << endl;
	cout << "Idade: " << idade;
	
	return 0;
	
	
}