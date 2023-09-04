#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

double COMBINA (int x, int y){
	double C;
	int s=1;
	int q=1;
	int h = x-y;
	int h1 =1;
	while(x>1){
		s = s*x--;
	}
	while(y>1){
		q = q*y--;
	}
	while(h>1){
		h1 = h1 * h--;
	}
	C = s/(h1*q);
	return C;
}

int main (){
	int N, P;
	cout << "Digite dois numeros (numero 1 deve ser maior que o numero 2): " << endl;
	cin >> N >> P;
	cout << "C = " << COMBINA(N, P) << endl;
	return 0;
}