#include <iostream>

using namespace std;

void intersecao(int vetor[], int tamanho){
	int i, j; //contadores
	int chave;
	
	for(j = 1; j < tamanho; j++){
		chave = vetor[j];
		i = j-1;
		while((i>=0) && (vetor[i] > chave)){
			vetor[i+1] = vetor[i];
			i = i-1;
		}
		vetor[i+1] = chave;
	}
}

int main(){
//var	
	int x = 0;//tamanho
	int vetor[21]; //vetor comeco
	int vetorr[21];//vetor que recebera o resultado da funcao
//	
	do{
		cin >> vetor[x];
		x++;
	}while(vetor[x-1] != 0);//parar no 0
	
	for(int i = 0; i<x; i++){//retirar o 0
		if(vetor[i] == 0)
			x = x-1;
	}
	vetorr[21] = intersecao(vetor[21], x);
	
	
	return 0;
}