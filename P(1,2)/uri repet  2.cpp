#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int i, cont;
	float n, s;
	s=0;
	cont=0;
//saida	
	for(i=1; i<=6; i++){
		
		cin >> n;
		if(n>0){
		
		cont++;
		s=s+n;
	}
		
		
	}
	cout << cont << " valores positivos" << endl;
	cout << fixed << setprecision(1) << s/cont << endl;
return 0;	
}