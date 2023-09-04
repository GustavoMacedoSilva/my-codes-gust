#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int i, N, cont1, cont2, t;
	cont1=0;
	cont2=0;
//entrada	
	cout << "Digite o numero de pessoas q estao fazendo o teste: ";
	cin >> N;
	
//saida	
	for(i=1; i<=N; i++){
	cout <<"Digite 1 se maior q 21 anos ||| Digite 2 se menor q 21 anos" << endl; 
	cin >> 	t;
		if(t==1)
		cont1++;
		if(t==2)
		cont2++;
		
	}
	cout << "Pessoas maiores de 21 anos ou iguais a 21 anos: " << cont1 << " Percentual: " << cont1*100./N << "%" << endl;
	cout << "Pessoas menores de 21 anos: " << cont2 << " Percentual: " << cont2*100./N << "%" << endl;
	return 0;
}