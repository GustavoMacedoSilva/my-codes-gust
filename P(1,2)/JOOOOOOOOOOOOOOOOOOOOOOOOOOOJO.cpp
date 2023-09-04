#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void FUN(double x, double &a, double &b, double &c){
	a = (exp(x) - exp(-x))/2;
	b = (exp(x) + exp(-x))/2;
	c = a/b;
	
}

int main(){
	double x, senha, cosx , tanhx;
	cout << "Valode de x: ";
	cin >> x;
	FUN(x, senha, cosx, tanhx);
	cout << "senh(x) = " << senha << endl;
	cout << "cosh(x) = " << cosx << endl;
	cout << "tanh(x) = " << tanhx << endl;
	return 0;
}