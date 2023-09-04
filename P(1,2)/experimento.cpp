#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	double x, y;
	char op;
	
//entrada
	cout << "Digite 2 valores" << endl;
	cin >> x >> y;
	cout << "Digite +, -, * ou /" << endl;
	cin >> op;
//saida	
	switch(op){
		
	case'+':	
		cout << "Soma: " << x+y << endl;
		break;
		
	case'-':	
		cout << "Subtracao: " << x-y << endl;
		break;
		
	
	case'*':
		cout << "Multiplicacao: " << x*y << endl;
		break;
		
	case'/':
		if(y==0){
			cout << "Impossivel fazer o calculo..." << endl;
		}
		else
		    cout << "Divisao: " << x/y << endl;
		break;
	}
	return 0;
}