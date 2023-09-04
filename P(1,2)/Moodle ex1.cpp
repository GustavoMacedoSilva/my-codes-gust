#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
//var	
int b, i, si;
float s;	
s=0;
si=1;
b=1;	
//saida	
	for(i=1; i<=50; i++){
		s=s+1/pow(b, 3)*si;
		b=b+2;
		si=si*(-1);
		
		
	}
	cout << s << endl;
	return 0;
}