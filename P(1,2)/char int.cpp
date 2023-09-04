#include <iostream>

using namespace std;

int main()

{
//variaveis 	
	char nome [51];
	int idade;
//entrada de dados
	cout << "Digite seu nome: ";
	
	cin.getline(nome, 51); 
	cin.ignore();
	cout << "Digite sua idade: ";
	cin >> idade;
//saida de dados	
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade;
	
	return 0;
}