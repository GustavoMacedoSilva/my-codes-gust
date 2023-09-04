#include <iostream>
#include <cstring>

using namespace std;

int main(){
//var	
	char nome1[21];
	char nome2[21];
	int tamanho, tamanho2;
//	
	cin.getline(nome1, 21);
	cin.getline(nome2, 21);
	
//	
	tamanho = strlen(nome1);
	tamanho2 = strlen(nome2);
	cout << "\t" << "Tamanho da String 1: " << tamanho << endl;
	cout << "\t" << "Tamanho da String 2: " << tamanho2 << endl;
	
	cout << "\t" << "String 1: " << nome1 << endl;
	cout << "\t" << "String 2: " << nome2 << endl;
	
	
	if(strcmp(nome1, nome2)== -1){
		cout << "\t" << "Ordem Alfabetica:" << endl;
		cout << "\t" << "String 1: " << nome1 << endl;
		cout << "\t" << "String 2: " << nome2 << endl;
	}
	if(strcmp(nome1, nome2)==0){
		cout << "\t" << "As Strings sao iguais!" << endl;
	}
	if(strcmp(nome1, nome2)==1){
		cout << "\t" << "Ordem Alfabetica:" << endl;
		cout << "\t" << "String 1: " << nome2 << endl;
		cout << "\t" << "String 2: " << nome1 << endl;
	}	
	return 0;
}