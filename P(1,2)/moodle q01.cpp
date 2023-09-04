#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int i, N;
	float S=0, num;
//entrada	
	cout << "Digite quantos numeros vc ira somar: ";
	cin >> N;
	
//saida	
	for(i=1; i<=N; i++){
	
	cin >> num;
	S=S+num;
	
}
	cout << "Soma de todos os numeros: " << S << endl;
	return 0;
}