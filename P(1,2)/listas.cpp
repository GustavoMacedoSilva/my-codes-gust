#include <iostream>
#include <list>
using namespace std;

int main ()
{
//variaveis    
    list<int> pilha; //ponteiro apontanado para a pilha
    int i; //contador
    int x; //aux para a leitura e escrita
    
    for(i = 0; i < 4; i++)
    {
        cin >> x;
        pilha.push_front(x); //insercao dos elementos na lista
    }
    
    while(!pilha.empty())
    {
        x = *pilha.begin();
        cout << x << " ";
        pilha.pop_front();
    }
    
    
    return 0;
}