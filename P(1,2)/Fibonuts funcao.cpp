#include <iostream>

using namespace std;

//calcula a sequencia de bibobatis
int fib(int n){
	if(n==0) //criterio de parada
		return 0;
	if(n==1) //criterio de parada
		return 1;
	else //chamada recursiva
	{
        return fib(n-1)+fib(n-2);
	}
}

int main(){
	int x;
	int fibo;//recebe o valor calculado na funcao
	
	cin >> x;
	fibo = fib(x);
	cout << fibo << endl;
	return 0;
}