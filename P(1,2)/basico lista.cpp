#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lista; //"ponteiro" para a lista
	list<int>::iterator p; //"ponteiro" para varrer a lista
	int x; //numeros inseridos
	int soma = 0;
//	
	cin >> x;
	while(x != 0)
	{
		lista.push_back(x);
		cin >> x;
	}
	
	for (p = lista.begin(); p != lista.end(); p++)
	{
		soma = soma + *p;
    }
    cout << "soma = " << soma << endl;	
    while(!lista.empty()) //destroi a lista
	{
		lista.pop_front();
	}
	
	return 0;
	
}