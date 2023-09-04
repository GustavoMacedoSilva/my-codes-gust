#include <iostream>
#include <cstring>
using namespace std;

int main(){
//var	
	int i, n;
	char nomex[51];
	struct cadastro{
		char nome [51];
		char curso [21];
		int cod; 
	};cadastro dados[10001];
	int aux =0;
//	
	do{
	cin >> n; //numero de alunos
	}while (n<1 || n>10000);
	
	for(i=0;i<n; i++){
  	  cin.ignore();
		cin.getline(dados[i].nome, 51);
		cin.getline(dados[i].curso,21);
		cin >> dados[i].cod;
		cout << endl;
	}
	cin.ignore();
	
	cin.getline(nomex, 51);
	
	for(i=0;i<n;i++){
		if(strcmp(nomex, dados[i].nome) == 0){
			cout << endl;
			cout << dados[i].nome << endl;
			cout << dados[i].curso << endl;
			cout << dados[i].cod << endl;
			aux++;
		}
	}
		if(aux == 0){
			cout << "Nao encontrado" << endl;
		}
	return 0;
}