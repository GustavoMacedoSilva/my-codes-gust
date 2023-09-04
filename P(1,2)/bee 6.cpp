#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//variaveis	
	char ven [51];
	double sal;
	double vendas;

//entrada	
	cin.getline(ven, 51);
	
	cin >> sal;
	
	cin >> vendas;
	
//saida	
	cout << fixed << setprecision(2) << "TOTAL = R$ " << vendas * 0.15 + sal << endl;
	
	
	return 0;
	
}