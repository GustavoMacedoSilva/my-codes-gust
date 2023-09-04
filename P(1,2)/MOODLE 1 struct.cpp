#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
//	
	int N, i, S=0;
	struct dados{
		int num;
	};
	dados numeros[10];
//	
	do{
		cin >> N;
	}while(N<1 || N>10);
	
	for(i=0; i<N; i++){
		cin >> numeros[i].num;
		if(numeros[i].num % 2 == 0){
			S = S + numeros[i].num;
		}
	}
	
	cout << S << endl;
	return 0;
}