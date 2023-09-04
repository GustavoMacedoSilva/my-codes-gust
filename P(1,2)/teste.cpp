#include <iostream>
#include <iomanip>

using namespace std;

main () {
//var	
	int seg;
	
//entrada	
	cin >> seg;
	
//saida	
	
	
	cout << seg/60/60 << ":" << (seg%3600)/60 << ":" << seg-(seg/60*60) << endl;
	
	
	
	return 0;
}