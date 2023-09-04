#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	float x;
	
//entrada	
	cout << fixed << setprecision(2);
	cin >> x;
	
//saida	
	if (x>=0.00 && x<=25.00)
	cout << "Intervalo [0,25]" << endl;
	
	if (x>25.00 && x<=50.00)
	cout << "Intervalo (25,50]" << endl;
	
	if (x>50.00 && x<=75.00)
	cout << "Intervalo (50,75]" << endl;
	
	if (x>75.00 && x<=100.00)
	cout << "Intervalo (75,100]" << endl;
	
	if(x<0.0 || x>100.0)
	cout << "Fora de intervalo" << endl;
	
	return 0;
}