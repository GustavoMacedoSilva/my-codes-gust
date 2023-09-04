#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
//var	
	int sb, sp, a;
	sb=6800;
	sp=9500;
	a=0;
//saida	
	while(sb<sp){
	
	sb=(sb*2.25/100)+sb;
	sp=(sp*0.9/100)+sp;
	a++;
}
	cout << sb << " Habitantes em Sao Bartolomeu." << endl;
	cout << sp << " Habitantes em Sao Jose do Piripoca." << endl;
	cout << a << " Anos ate Sao Bartolomeu ser maio que Sao Jose do Piropoca em habitantes." << endl;
	return 0;
}