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
	
	v = new dado;
	v ->idade = 21;
	v ->peso = 68.3;
	
	cout << "idade: " << v->idade << endl;
	cout <<"peso: " << v->peso << endl;
	
	delete v;
	
	return 0;
}
