#include <iostream>

using namespace std;

int main() {
	
	int *v = NULL;
	int N; //tamanho desejado para o vetor
	
	cin >> N; //lendo o tamanho do vetor
	v = new int[N]; //alocando memoria para o vetor
	
	for(int i = 0; i < N; i++){
		v[i] = i+1;
	}
	for(int i = 0; i<N; i++){
		cout << v[i] << endl;
	}
	
	delete [] v; //deleta a memoria alocada
	
	return 0;
}