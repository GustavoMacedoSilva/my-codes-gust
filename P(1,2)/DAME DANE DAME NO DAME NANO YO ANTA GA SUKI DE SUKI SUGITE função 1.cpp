#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

double converte (double mph){
	double kmph;
	kmph = mph * 1.60934;
	return kmph;
}

int main(){
	double mph;
	cout << "Quantas milhas por hora? " << endl;
	cin >> mph;
	cout << fixed << setprecision(1) << "Kilometros por hora eh : " << converte(mph) << endl;
	
return 0;	
}