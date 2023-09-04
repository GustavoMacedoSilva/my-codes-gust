#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int galhos;
    int galho_aux = INT_MAX;
    int enfeites_final = 0;
    int pacotes;
    int enfeites;
    int peso_max_galho;
    int peso_do_pacote;
    //
    cin >> galhos;
    for(int i = 0; i < galhos; i++)
    {
    cin >> pacotes;
    cin >> peso_max_galho;
    for(int j = 0; j < pacotes; j++)
    {
    cin >> enfeites;
    cin >> peso_do_pacote;
    if(peso_do_pacote < galho_aux)
    {
        galho_aux = peso_do_pacote;
        enfeites_final += enfeites;
    }
    }
    }
}