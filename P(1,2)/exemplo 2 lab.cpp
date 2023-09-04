#include <iostream>

using namespace std;

int main()
{
//var	
	int idade;
//entrada	
	cout << "Digite sua idade: ";
	cin >> idade;
//saida 	
	if (idade>=18 && idade%2==0)
	cout << "Maior de idade e idade par";
	
	else if (idade >= 18)
	cout << "Maior de idade e idade impar";
	
	else if (idade < 18 && idade%2==0)
	cout << "Menor de idade e idade par";
	
	else
	cout << "Menor de idade e idade impar";
	
	return 0;
}