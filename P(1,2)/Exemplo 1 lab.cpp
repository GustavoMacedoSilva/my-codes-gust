#include <iostream>

using namespace std;

int main()
{
//var	
	int idade;
	char nome[51];
//entrada 	
	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
//saida	
	cout << "Nome: " << nome << endl;
	
	if (idade >= 18 && idade <= 67)
	cout << "Doacao autorizada";
	
	else
	cout << "Doacao negada";
	
	
	return 0;
}