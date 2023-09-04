#include <iostream>



using namespace std;

int main(){
//var	
	int n, i;
	struct cadastro{
		char nome[100][51];
		char raca[100][31];
		int idade[100];
	};
	cadastro dados;
//	
	cout << "Quantos animais? ";
	do{
		cin >> n;
	}while(n>100 || n<1);
	for(i=0; i<n; i++){
		cin.ignore();
		cout << "Nome: ";
		cin.getline(dados.nome[i], 51);
		cout << "Raca: ";
		cin.getline(dados.raca[i], 31);
		cout << "Idade: ";
		cin >> dados.idade[i]; 
		cout << endl;
	}
	cout << "Listagem: " << endl;
	for (i=0; i<n; i++){
		cout << "Nome: " << dados.nome[i] << endl;
		cout << "Raca: " << dados.raca[i] << endl;
		cout << "Idade: " << dados.idade[i] << endl;
		cout << endl;
	}
	return 0;
}