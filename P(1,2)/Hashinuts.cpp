#include <iostream>

using namespace std;

int hash_aux(int k, int m){
	int h = k%m;
	if(h<0){
		h = h+m;
	}
	return h;
}


int main(){
	int k; //chave a ser inserida
	int m; //tamanho da tabela hash
	int h; //recebe o valor de hashing

	do{	
	cin >> k;
	cin >> m;
	if(k==0 && m==0){
		break;
	}
	h = hash_aux(k, m);
	
	cout << h << endl;
	}while (k!=0 && m!=0);
	
	return 0;
}