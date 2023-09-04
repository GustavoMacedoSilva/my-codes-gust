#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
//	
	int N, i;
	struct cadastro{
		char nome[51];
		char raca[31];
		int idade;
	};
	cadastro dados[101];
//	
	cout << "Digite a quantidade de animais a serem cadastrados: " << endl;
	do{
		cin >> N;
	}while(N<1 || N>100);
	
	for(i=0; i<N; i++){
	cin.ignore();
	cout << "Digite o nome do animal: " << endl;
	cin.getline(dados[i].nome, 51);
	cout << "Digite a raca do animas: " << endl;
	cin.getline(dados[i].raca, 31);
	cout << "Digite a idade do animal: " << endl;
	cin >> dados[i].idade;
	cout << endl;
	}
//	
	for(i=0; i<N; i++){
		cout <<  "\t" << "Nome: " << dados[i].nome << endl;
		cout <<  "\t" << "Raca: " << dados[i].raca << endl;
		cout <<  "\t" << "idade: " << dados[i].idade << endl;
	}
	return 0;
}