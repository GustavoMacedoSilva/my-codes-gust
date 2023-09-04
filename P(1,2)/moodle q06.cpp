#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int i, s;
	float x;
	
//entrada	
	cout << "Digite o valor de x: " << endl;
	cin >> x;
	
//saida	
	for(i=1; i<=10; i++){
	
	s=s+pow(x,i);
	
}

cout << "f(x) = " << s << endl;

	return 0;
}