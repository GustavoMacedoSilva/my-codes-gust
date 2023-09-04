#include <iostream>
#include <iomanip>

using namespace std;

struct dado
{
	int n1, n2, n3, n4;
	float md;
};

int main()
{

	dado *p;
	int n;
	float media;
	float n1, n2, n3, n4;
	float soma = 0;

	cout << fixed << setprecision(2);

	cin >> n;
	p = new dado[n];
	for(int i = 0; i < n; i++)
	{
		cin >> n1 >> n2 >> n3 >> n4;
		media = (n1 + n2 + n3 + n4) / 4;
		p[i].n1 = n1;
		p[i].n2 = n2;
		p[i].n3 = n3;
		p[i].n4 = n4;
		p[i].md = media;
	}
	for(int i = 0; i < n; i++)
	{
		soma = soma + p[i].md;
	}
	cout << soma / n << endl;

	delete []p;
	return 0;
}
