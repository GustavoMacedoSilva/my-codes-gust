#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
//declaraçao das variaveis	

	double x;

//entrada de dados	
	
	cout << "Digite o valor de x " << endl;
	cin >> x;
	
//calculo	
	
	cout << fixed << setprecision(4); //fixa em 4 casas decimais
	cout << "Valor de f(x) eh " << sqrt(x)/pow(x,3);
	
	
	
	return 0;
}