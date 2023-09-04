#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
//var	
int i,N;
char nome[10][31];
double a[10];
double e[10];
double t[10];
double P[10];
double maior = 0;

//	
	cout << fixed << setprecision(1);
	cout << "Numero de equipes (1 - 10): ";
	do{
		cin >> N;
		if(N>10 || N<1){
			cout << "Numero Invalido, Digite novamente!" << endl;
			cout << "Numero de equipes (1 - 10): ";
		}
	}while(N>10 || N<1);
	
	for(i=0; i<N; i++){
		cout << "Equipe: ";
		cin >> nome[i];
		cout << "Tentativas certas: ";
		cin >> a[i];
		cout << "Tentativas erradas: ";
		cin >> e[i];
		cout << "Tempo gasto (min): ";
		cin >> t[i];
		P[i] = 5*a[i] - 2*e[i] + 1/t[i];
		cout << endl;
	}
	cout << "Listagem final: " << endl;
	for(i=0; i<N; i++){
		cout << nome[i] << " - " << P[i] << " ptos." << endl;
	}
	for(i=0; i<N; i++){
		if(maior<P[i]){
			maior=P[i];
		}
	}
	cout << endl;
	cout << "Maior pontuacao: " << maior << " ptos." << endl;
	for(i=0; i<N; i++){
		if(maior==P[i]){
			cout << "Equipe(s) vencedora(s): " << nome[i] << endl;
		}
	}
	return 0;
}