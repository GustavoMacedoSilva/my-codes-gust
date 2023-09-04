#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
//variaveis    
    int x;
    int y;
    int aux;
//entrada
    cout << fixed << setprecision(2);
    cout << "Qual operacao voce deseja fazer?" << endl;
    cout << "Soma(1), Subtracao(2), Divisao(3), Radiciacao(4), Potenciacao(5)" << endl;

    cin >> aux;

    if(aux == 1)
    {
        cin >> x >> y;
        cout << "Soma: " << x+y << endl;
    }
    else if(aux == 2)
    {
        cin >> x >> y;
        cout << "Subtracao: " << x-y << endl;
    }
    else if(aux == 3)
    {
        cin >> x >> y;
        cout << "Divisao: " << x/y << endl;
    }
    else if(aux == 4)
    {
        cin >> x >> y;
        cout << "Radiciacao: " << pow(x, y) << endl;
    }
    else if(aux == 5)
    {
        cin >> x >> y;
        cout << "Potenciacao: " << pow(x, y) << endl;
    }
    
    return 0;
}