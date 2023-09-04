#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int N;
	double A[10];
	int x;
	int conta, conta1;
	conta=0;
	conta1=0;
//	
	cin >> N;
	
	for(int i=1; i<=N; i++){
	cin >> A[i];
	}
	cin >> x;
	for( int i=1; i<=N; i++){
		if(x == A[N]){
			conta++;
		}
	if(x != A[N]){
	    	conta1++;
	}
	}
	if(conta==1){     //Soned tentei mas nao consegui finalizar ele, a partir daqui esta o erro, so nao sei como arruma xD
		cout << "Valor pertence ao vetor" << endl;
	}
	if(conta1<=N){
		cout << "Valor nao pertence ao vetor" << endl;
	}
	
return 0;
}