#include <iostream>
#include <iomanip>
using namespace std;

void media(double &m, double x, double y )
{
	m = x+y/2;
}
int main()
{
	double n1, n2; // entrada de valores
	double m; // media

	cin >> n1 >> n2;
	
	media(n1, n2, m);
	
	
	cout << m << endl;
	

	return 0;
}