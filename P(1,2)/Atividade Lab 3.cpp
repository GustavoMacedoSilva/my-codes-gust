#include<iostream>

using namespace std;

    int main()
    
{
	int idade;
	char nome [20];
	
	
	cout << "Insira sua idade: ";
	cin >> idade;
	cin.ignore();
	
	cout << "Insira seu nome: ";
	cin.getline(nome, 20);
	
	
	
	cout << "Nome " << nome << endl;
	cout << "Idade " << idade << endl;
	cout <<"Idade depois de 2 anos " << idade+2 << endl; 
	
	return 0;
}