#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int h, v;
	
//entrada	
	cin >> h;
	cin >> v;
	
	
//saida	
	cout << fixed << setprecision(3) << (h*v)/12.0 << endl;
	
	
	return 0;
}