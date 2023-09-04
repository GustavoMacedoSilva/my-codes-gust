#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
//	
	int i;
	double A[5], B[5];
	double C[10], D[10];
//	
	cout << "Digite os valores do vetor A:" << endl;
	
	for(i=0; i<5; i++)
	{
		cin >> A[i];
	}
	cout << "Digite os valores do vetor B:" << endl;
	for(i=0; i<5; i++)
	{
		cin >> B[i];
	}
	for(i=0; i<5; i++)
	{
		C[i] = A[i];
	}
	for(i=0; i<5; i++)
	{
		C[i+5] = B[i];
	}
	for(i=0; i<5; i++)
	{
		D[i]
	}
}