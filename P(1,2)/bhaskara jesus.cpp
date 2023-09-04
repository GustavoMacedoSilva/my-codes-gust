#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
//var	
	double A, B, C, del, r1, r2;
	
//entrada	
	cin >> A >> B >> C;
	
//saida	
	del = pow(B, 2) - 4*A*C;
	
	if (A>0 && del>0)
	{
	cout << fixed << setprecision(5);
	r1 = (((-B)+ sqrt(del))/(2*A));
	r2 = (((-B)- sqrt(del))/(2*A));	
    cout << "R1 = " << r1 << endl;
    cout << "R2 = " << r2 << endl;
}
    else
    cout << "Impossivel calcular" << endl;
    
    
	return 0;
	
}