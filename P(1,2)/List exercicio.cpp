#include <iostream>
#include <list>
#include <iomanip>
using namespace std;

float calcMedia(list<int> lista)
{
	float media;
	int soma = 0;
	list<int>::iterator p;
	int cont = 0;
	for(p = lista.begin(); p != lista.end(); p++)
	{
		soma =  soma + *p;
		cont++;
	}
	
	media = soma/cont;
	
	return media;
}

int main()
{
	list<int> lista;
	int x;
	
	cin >> x;
	while(x != 0)
	{
		lista.push_back(x);
		cin >> x;
	}
	
	cout << fixed << setprecision(2) << calcMedia(lista) << endl;
	
	
	while(!lista.empty()) //destroi a lista
	{
		lista.pop_front();
	}
}