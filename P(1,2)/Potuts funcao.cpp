#include <iostream>

using namespace std;

int pot(int n, int a){
	if(n==0) //criterio de parada
		return 1;
	else //chamada recursiva
		return a*pot(n-1, a);
}


int main(){
	int x; //exponencial
	int p; //recebe o valor da funcao
	int a; //base
	
	cin >> a;
	cin >> x;
	p = pot(x, a); //calcula
	cout << p << endl;
	return 0;
}