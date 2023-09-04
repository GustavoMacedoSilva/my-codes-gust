#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
//
	double A[5][5];
	double B[5][5];
	int i, j, ria, rja, rib, rjb;
//
	do
	{
		cout << "Numero de linhas de A: " << endl;
		cin >> ria;
		if(ria > 5 || ria <= 0)
		{
			cout << " Numero deve ser maior que zero e menor ou igual a 5!" << endl;
		}
	}
	while(ria > 5 || ria <= 0);
	do
	{
		cout << "Numero de colunas de A: " << endl;
		cin >> rja;
		if(rja > 5 || rja <= 0)
		{
			cout << "Numero deve ser maior que zero e menor ou igual a 5!" << endl;
		}
	}
	while(rja > 5 || rja <= 0);
	for(i = 0; i < ria; i++)
	{
		for(j = 0; j < rja; j++)
		{
			cin >> A[i][j];
		}
	}
	
	
	do
	{
		cout << "Numero de linhas de B: " << endl;
		cin >> rib;
		if(rib > 5 || rib <= 0)
		{
			cout << " Numero deve ser maior que zero e menor ou igual a 5!" << endl;
		}
	}
	while(rib > 5 || rib <= 0);
	do
	{
		cout << "Numero de colunas de B: " << endl;
		cin >> rjb;
		if(rjb > 5 || rjb <= 0)
		{
			cout << "Numero deve ser maior que zero e menor ou igual a 5!" << endl;
		}
	}
	while(rjb > 5 || rjb <= 0);
	for(i = 0; i < rib; i++)
	{
		for(j = 0; j < rjb; j++)
		{
			cin >> B[i][j];
		}
	}
	
	
	
	return 0;
}
