#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int N, idade, i;
	char nome[52], casa;
	int contc, conts;
	contc=0;
	conts=0;
//entrada	
	cout << "Quantas pessoas serao entrevistadas? ";
	cin >> N;
	
//saida	
	i=1;
	while(i<=N){
		cout << "Nome: ";
		cin >> nome;
		cout << "Possui casa propria? (S para sim, N para nao) ";
		cin >> casa;
		cout << "Idade: ";
		cin >> idade;
		
		if(idade>=18 && casa=='S')
		contc++;
		
		if(casa=='N'){
		
		conts++;
	}
		i++;
	}
	cout << "Pessoas com 18 ou mais anos com casa propria: " << contc << endl;
	cout << "Porcentagem de pessoas sem casa propria: " << (100.*conts)/N << "%" << endl;
	
	return 0;
}