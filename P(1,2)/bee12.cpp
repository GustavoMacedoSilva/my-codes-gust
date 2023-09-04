#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int cod, qnt;
	
//entrada	
	cout << fixed << setprecision(2);
	cin >> cod >> qnt;
	
//saida	
	switch (cod){
	
	
	   case(1):
	cout << "Total: R$ " << qnt*4.00 << endl;
	break;
	
	case(2):
	cout << "Total: R$ " << qnt*4.50 << endl;
	break;
	
	case(3):
	cout << "Total: R$ " << qnt*5.00 << endl;
	break;
	
	case(4):
	cout << "Total: R$ " << qnt*2.00 << endl;
	break;
	
	case(5):
	cout << "Total: R$ " << qnt*1.50 << endl;	
		break;
}
		
		
return 0;		
		
}