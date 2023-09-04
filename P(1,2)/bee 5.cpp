#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	double raio;
	double volume;
	
//entrada	
	cin >> raio;
	volume = (4.0/3)*3.14159*pow(raio, 3);
//saida	
	cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;
	
	
	return 0;
	
}