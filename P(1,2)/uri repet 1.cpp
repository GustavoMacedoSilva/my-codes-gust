#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
//var	
	int i, cont1;
	float n;
	cont1=0;
//saida	
	for(i=1; i<=6; i++){
	
	cin >> n;
	if(n>0)
	cont1++;
}
	cout << cont1 << " valores positivos" << endl;
	
	
	return 0;
}