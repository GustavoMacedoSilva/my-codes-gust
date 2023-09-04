#include <iostream>

using namespace std;

int main() {
//var	
	int idade1;
	char nome1[51];
	int idade2;
	char nome2[51];

//entrada	
	//pessoa 1
	cout << "Digite seu nome: ";
	cin.getline(nome1, 51);
	cout << "Digite sua idade: ";
	cin >> idade1;
	//pessoa 2
	cin.ignore();
	cout << "Digite seu nome: ";
	cin.getline(nome2, 51);
	cout << "Digite sua idade: ";
	cin >> idade2;

//saida	
  if (idade1>idade2)
cout << nome1 << " Maior idade";
  else if (idade1<idade2)
cout << nome2 << " Maior idade";
  else if (idade1==idade2)
cout << "Idades iguais";


	return 0;
}