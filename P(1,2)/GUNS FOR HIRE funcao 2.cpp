#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int FAT (int x){
	int S = 1;
	do{
		S = S * x--;
	}while (x>1);
	return S;
}

int main(){
	int N;
	cout << "Digite um numero para fazer o fatorial: " << endl;
	cin >> N;
	cout << "Fatorial = " << FAT(N) << endl;
	return 0;
}