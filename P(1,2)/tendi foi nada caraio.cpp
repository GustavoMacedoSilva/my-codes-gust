#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void converte(double ro, double te, double fi, double &x, double &y, double &z){
	x = ro*sin(fi)*cos(te);
	y = ro*sin(fi)*sin(te);
	z = cos(fi);
}
int main(){
	double ro, te, fi, x, y, z;
	
	cout << "Digite os angulos: ";
	cin >> ro >> te >> fi;
	
	converte(ro, te, fi, x, y, z);
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	return 0;
}