#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//variaveis	
	int i;
	int y; 
	float x, soma;
	y=1;
	soma=0;
//	
	cout << "Digite o valor de x: " << endl;
	cin >> x;
//	
	for(i=1; i<=10; i++){	
		soma=soma+pow(x, y);
		y=y+1;
	}
	cout << "f(x) = " << soma << endl;
	return 0;	
}