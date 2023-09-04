#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	float p, q, n;
	
//entrada	
	cout << "Digite o preco atual do produto: R$";
	cin >> p;
	
	cout << "Digite a quantidade vendida no mes: ";
	cin >> q;
	cout << fixed << setprecision(2);
//saida	
	if (q==0)
	{
	n = p-(p*0.10);
	
	
	cout << "R$" << n;
}
	if (q>0 && q<500)
	cout << "R$" << p;
	
	if (q>=500 && q<1000)
	{
	n = p+p*0.10;
	cout << "R$" << n;
}
	if (q>=1000)
	{
	n = p+p*0.15;
	cout << "R$" << n;
}
	if (p<0 && q<0)
	cout << "Erro de entrada!" << endl;
	
	
	return 0;
	
}
