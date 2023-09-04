#include <iostream>

using namespace std;

int main()

{
//var
	char nome [51];
	
//entrada de dados	
	
	cout << "Digite nome: ";
	cin.getline(nome, 51); 
	
//saida de dados	
	
	cout << "Nome digitado: " << nome;
	
	return 0;
}