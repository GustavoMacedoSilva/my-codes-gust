#include <iostream>

using namespace std;

int main() {
//var	
	int A, B, C, D;
	
//entrada	
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	
//saida	
	if (B>C && D>A && D+C>A+B && C>0 && D>0 && A%2==0)
	cout << "Valores aceitos" << endl;
	
	else
	cout << "Valores nao aceitos" << endl;
	
	return 0;
}