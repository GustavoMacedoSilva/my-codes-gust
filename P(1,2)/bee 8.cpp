#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
//var	
	float x1, y1, x2, y2;
	
//entrada	
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	
//saida	
	cout << fixed << setprecision(4) << sqrt(pow(x1-x2, 2) + pow(y2-y1, 2)) << endl;
	
	
	return 0;
	
	
}