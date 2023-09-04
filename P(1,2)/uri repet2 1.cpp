#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
//var	
	int x, y; //numeros a serem escritos
	
//entrada	
	do{
	
	cin >> x >> y;
	if (x>y)
	cout << "Decrescente" << endl;
	if (x<y)
	cout << "Crescente" << endl;
	} while(x!=y);
	
	return 0;
}