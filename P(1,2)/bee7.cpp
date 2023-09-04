#include <iostream>
#include <iomanip>

using namespace std;

int main() {
//var	
	int x;
	double y;
	
//entrada	
	cin >> x;
	cout << fixed << setprecision(1);
	cin >> y;
	
//saida	
	cout << fixed << setprecision(3) << x/y << " km/l" << endl;
	
	
	return 0;
	
}