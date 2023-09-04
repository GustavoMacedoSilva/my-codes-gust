#include <iostream>

using namespace std;

int hash_aux(int k, int m){
	int h = k%m;
	if(h<0){
		h = h+m;
	}
	return h;
}

int hash1(int k, int i, int m){
	int h1 = (hash_aux(k,m)+i)%m;
	
	return h1;
}


int main(){
	int k; //chave a ser inserida
	int m; //tamanho da tabela hash
	int h1; //recebe o valor de hashing
	int i = 0;
	
	cin >> k;
	cin >> m;
	
	for(i=0; i<m; i++){
	h1 = hash1(k, i, m);
	
	cout << h1 << " ";
}
		
	return 0;
}