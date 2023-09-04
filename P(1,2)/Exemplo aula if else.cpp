#include <iostream>

using namespace std;

int main() {
//var	
	int idade;
	
//entrada
	cout << "Digite sua idade: ";
	cin >> idade;
	
//saida	
	if (idade >= 18)
	cout << "Maior de idade";
	
	else
	cout << "Menor de idade";
	
	return 0;
}