#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int funcao_pot(int base, int expoente) //funcao recursiva
{
    if(expoente == 0) //criterio 1
    {
        return 1;
    }

    else if(expoente > 1) //criterio 2
    {
        return base*funcao_pot(base, expoente-1); //chama a funcao ate o n ser 0
    }
}

int main()
{
//variaveis
   int numero_base;
   int numero_expoente;

//
   cin >> numero_base;
   cin >> numero_expoente;

   cout << funcao_pot(numero_base, numero_expoente);


    return 0;
}