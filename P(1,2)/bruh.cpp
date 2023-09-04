#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int menor(int a, int b){
int x;	
	if(a < b)
		x = a;
	if(b < a)
		x = b;
	return x;
}


int main()
{
int x, y;
cout << "Digite dois numeros positivos:" << endl;
cin >> x >> y;
cout << "Menor numero : " << menor(x, y) << endl;	
	
	return 0;
}