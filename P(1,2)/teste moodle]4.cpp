#include <iostream>
#include <list>
using namespace std;

bool encontrar (list<int> lista, int x)
{
    list<int>::iterator p;
    
    for(p = lista.begin(); p != lista.end(); p++)
    {
        if(*p == x)
        {
            return true;
        }
    }
    return false;
}

int main ()
{
    list<int> lista;
    int x;
    bool aux;
    int n; //numero a procurar
    
    cin >> x;
    while(x != 0)
    {
        lista.push_back(x);
        cin >> x;
    }
    
    cin >> n;
    
    aux = encontrar(lista, n);
    
    if(aux)
    {
        cout << "Encontrado" << endl;
    }
    else
    {
        cout << "Nao encontrado" << endl;
    } 
    
    while(!lista.empty()) //destroi a lista
	{
		lista.pop_front();
	}
    
    return 0;
}