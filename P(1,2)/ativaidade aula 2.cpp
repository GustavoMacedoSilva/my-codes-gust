#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	double x,y;
	
//entrada	
	cout << "Digite o valor de x: ";
	cin >> x;
	cout << "Digite o valor de y: ";
	cin >> y;
	
//saida	
	if (x>y)
	cout << "f(x,y) = " << pow(x, 2) - pow(y, 2) + 2*x*y;
	
	if (x==y)
	cout << "f(x,y) = " << 2*x*y + x + y;
	
	if (x<y)
	cout << "f(x,y) = " << pow(y, 2) + pow(x, 2) + 2*x*y;
	
	return 0;
}