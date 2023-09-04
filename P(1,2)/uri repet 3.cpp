#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int i, n, cont;
	cont=0;
//saida	
	for (i=1; i<=5; i++){
	
	cin >> n;
	if(n%2==0)
	cont++;
}
	cout << cont << " valores pares" << endl;
	return 0;
}