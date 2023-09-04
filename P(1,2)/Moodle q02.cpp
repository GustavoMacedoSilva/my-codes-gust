#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int i, N;
	float ma, S, num;
//entrada	
	cout << "Digite quantos numeros vc ira usar: " << endl;
	cin >> N;
	
//saida	
	for(i=1; i<=N; i++){
		cout << "Digite um valor : " << endl;
		cin >> num;
		S=S+num;
		
	}
	ma = S/N;
	
	cout << "Media Aritmetica: " << ma << endl;
	
	return 0;
}