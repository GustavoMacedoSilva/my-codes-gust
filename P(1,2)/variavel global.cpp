#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double pi = 3.14;

void cir (double x, double &r){
	r = pi * pow(x, 2);
}

int main(){
	double raio;
	double c;
	cout << "Digite o raio: ";
	cin >> raio;
	cir(raio, c);
	cout << "Circunferencia = " << c << endl;
	return 0;
}