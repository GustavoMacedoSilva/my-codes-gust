#include <iostream>

using namespace std;

int main(){
//
	int x;
	int v[101];
	int i;
	int aux = 0;
	int aux2 = 0;
//
	do{
		cin >> v[aux];
		aux++;
	}while (v[aux -1] != -1);
	
	cin >> x;
	
	for(i=0;i<aux; i++){
		if(x == v[i]){
			cout << x << " encontrado na posicao " << i+1 << endl;
			aux2++; 
		}
	}
	if(aux2 == 0){
		cout << x << " nao encontrado" << endl;
	}
	return 0;
}