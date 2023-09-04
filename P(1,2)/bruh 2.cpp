#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void media(double x, double y, double z){
	cout << "Media = " << (x+y+z)/3 << endl;
}

int main(){
	double n1, n2, n3;
	cout << "Digite as 3 notas:" << endl;
	cin >> n1 >> n2 >> n3;
	media(n1, n2, n3);
	return 0;
}