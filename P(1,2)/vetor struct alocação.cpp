#include <iostream>

using namespace std;

struct dado
{
	int idade;
	float peso;
};


int main()
{
	dado *v;

	v = new dado[2];
	v[0].idade = 18;
	v[0].peso = 52.6;//vetor vc usa .
	v[1].idade = 12;
	v[1].peso = 35.1;

	for(int i = 0; i < 2; i++)
	{
		cout << "idade: " << v[i].idade << endl;
		cout << "peso: " << v[i].peso << endl;
	}
	delete []v;

	return 0;
}
