#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

double soma(double x, double y){
	double S;
	S = x + y;
	return S;
}
double subt(double x, double y){
	double Sub;
	Sub = x - y;
	return Sub;
}

int main(){
	double x1, y1;
	cout << "Digite os numeros: ";
	cin >> x1 >> y1;
	cout << "Soma = " << soma(x1, y1) << endl;
	cout << "Subtracao = " << subt(x1, y1) << endl;
	return 0;
}