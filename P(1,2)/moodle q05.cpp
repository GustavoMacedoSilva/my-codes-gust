#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int i, N, cont1, cont2, cont3, escolha;
	cont1=0;
	cont2=0;
	cont3=0;
//entrada	
	cout << "Quantos alunos vao responder essa pesquisa?" << endl;
	cin >> N;
	
//saida	
	for(i=1; i<=N; i++){
	cout << "Sobre o primeiro mes de aula: digite 1 se foi melhor doq vc esperava, digite 2 se foi pior doq vc esperava, digite 3 se foi exatamente como esperava" << endl;
	cin >> escolha;
	
	if(escolha==1)
	cont1++;
	
	if(escolha==2)
	cont2++;
	
	if(escolha==3)
	cont3++;
}
cout << "Pessoas que votaram 1: " << cont1 << endl;
cout << "Pessoas que votaram 2: " << cont2 << endl;
cout << "Pessoas que votaram 3: " << cont3 << endl;

return 0;	
}




