#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double vol(double x){
	double volume;
	volume = 3.14*x*x*x*4/3;
	return volume;
}
int main(){
	double vtotal;
	double r;
	
	cin >> r;
	vtotal = vol(r);
	
	cout << fixed << setprecision(2) << vtotal << endl;
	return 0;
}