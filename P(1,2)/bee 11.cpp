#include <iostream>

using namespace std;

int main() {
//var	
	int i;
	
//entrada	
	cin >> i;
	
//saida	
	cout << i/365 <<" ano (s)" << endl;
	cout << (i%365)/30 << " mes (es)" << endl;
	cout << (i%365)%30 << " dia (s)" << endl;
	return 0;
	
}