#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream arq;
	int x[7];
	int cont=0;
	int maior =0;
	int menor=1000;
	ofstream arq2;
//	
	arq.open("dados.txt", ifstream::in);
	while(!arq.eof()){
		arq >> x[cont];
		cont++;
		}
		arq.close();
		for(int i =0; i<6; i++){
		if(x[i]>maior)
			maior = x[i];
		
		if(x[i]<menor)
			menor = x[i];
		}
		arq2.open("resposta.txt", ofstream::out);
		arq2 << maior << endl;
		arq2 << menor << endl;	
	arq2.close();
	return 0;
}