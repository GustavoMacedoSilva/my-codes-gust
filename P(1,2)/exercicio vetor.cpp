#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
//
	int N, i;
	double x[10];
	double s = 0, md;
//
	do
	{
		cin >> N;
	}
	while(N < 1 || N > 10);

	for(i = 1; i < N; i++)
	{
		cin >> x[i];
		s = s + x[i];

	}
	md = s / N;
	cout << "Media: " << md << endl;
	for(i = 1; i < N; i++) //elementos acima da media
	{
		if(x[i] > md)
			cout << x[i] << "-" << i << endl;
	}
	for(i = 1; i < N; i++) //elementos abaixo da media
	{
		if(x[i] < md)
			cout << x[i] << "-" << i << endl;
	}
	return 0;
}
