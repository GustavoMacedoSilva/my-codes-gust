#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//funcao para calcular o fatorial de um numero x
int fatorial(int x){
	if(x==0)
		return 1;
	else
	    return x*fatorial(x-1);
}

int main(){
	int x;
	int f; //variavel que recebe o valor do fatorial
	cin >> x;
	f = fatorial(x);//calcula o fatorial
	cout << f << endl;
	return 0;
}