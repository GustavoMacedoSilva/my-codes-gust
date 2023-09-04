#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var
	int i;
	
//saida	
	for (i=1; i<=100; i++){
		if(i%2==0)
		cout << i << "  Multiplo de 2" << endl;
		
		if(i%3==0)
		cout << i << "  Multiplo de 3" << endl;
		
	}
	return 0;
}