#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
// var
	double n;
	double raio;
	double area;
//entrada
	
	cin >> raio;
	n = 3.14159;
	area = n *pow(raio, 2);
	
	
	
	
	
//saida	
	cout << fixed << setprecision(4) << "A=" << area << endl;
	
	
	
	return 0;
}