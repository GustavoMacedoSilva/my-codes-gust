#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
//variavel
	
	float C;
	
//entrada de dados
	
	cout << "Digite a temp em °C" << endl;
	cin >> C;
	
//Calculo	e saida 
	
	cout << fixed << setprecision(1);
	
	cout << "O valor em F eh " << (9*C + 160)/5  << endl;
	
	
	
	return 0;
}