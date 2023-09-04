#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int x, y, z;
	
//entrada	
	cin >> x >> y >> z;
	
//saida	
	if(x>y && y>z){
	
	cout << z << endl;
	cout << y << endl;
	cout << x << endl;
	cout << endl;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}
	if(x>y && y<z && x>z){
	
	cout << y << endl;
	cout << z << endl;
	cout << x << endl;
	cout << endl;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}
	if(y>x && x>z){
	
	cout << z << endl;
	cout << x << endl;
	cout << y << endl;
	cout << endl;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}
	if (y>x && x<z && y>z){
	
	cout << x << endl;
	cout << z << endl;
	cout << y << endl;
	cout << endl;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}
	if (z>y && y>x){
	
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << endl;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}
	if(z>y && y<x && z>x){
	
	cout << y << endl;
	cout << x << endl;
	cout << z << endl;
	cout << endl;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}
	
	return 0;
}