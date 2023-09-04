#include <iostream>
#include <cmath>

using namespace std;

int main() {
//var	
	double x, y;
	
//entrada	
	cout << "Digite valor de x e y respectivamente: ";
	cin >> x >> y;
	
//saida	
	if (x&&y>0)
	cout << sqrt(x-y)/sqrt(x+y);
	
	if (x==0)
	cout << "impossivel";
	
	if (y==0)
	cout << "impossivel";
	
	
	return 0;
}