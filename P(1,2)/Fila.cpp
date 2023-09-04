#include <iostream>
#include <list>
using namespace std;

int main()
{
//variaveis    
    list<int> fila; //ponteiro apontando pra fila
    int i; //contador
    int x; //aux
    
    for(i = 0; i < 4; i++)
    {
        cin >> x;
        fila.push_back(x); //insert
    }
    
    while(!fila.empty()) //destroi a lista
	{
		x = *fila.begin();
		cout << x << endl;
		fila.pop_front();
	}
    
    
    return 0;
}