#include <iostream>

using namespace std;

int main()
{	
	int pd[100][100]; // armazena o tamanho da maior subsequencia comum
	int caminho[100][100]; // armazena o cam.
	char s1[100]; // sequencia 1
	char s2[100]; // sequencia 2
	int tamanho_palavra_1; // tamanho da sequencia 1
	int tamanho_palavra_2; // tamanho da sequencia 2
    int tam_lcs;
    bool aux = true;
    bool aux2 = false;
	
	// entrada:
	
	while(aux)
	{
    aux2 = false;    
	cin >> tamanho_palavra_1;
	
	cin >> tamanho_palavra_2;
	
	for(int i = 0; i < tamanho_palavra_1; i++)
    {
        cin >> s1[i];
    }

	for(int i = 0; i < tamanho_palavra_2; i++)
    {
        cin >> s2[i];
    }
	
	// inicializacao:
	// casos base
	for(int i = 0;i < tamanho_palavra_1;i++) //Independente de i
		pd[i][tamanho_palavra_2] = 0;
	
	for(int i = 0; i < tamanho_palavra_2;i++) //Independente de i
		pd[tamanho_palavra_1][i] = 0;
	
	
	// programacao dinamica:
	// caso geral
	for(int i = tamanho_palavra_1-1;i >= 0; i--) //tamanho_palavra_1 ja foi processado no caso base
	{
		for(int j = tamanho_palavra_2-1;j >= 0; j--) 
		{
			if(s1[i] == s2[j]) // se as duas forem iguais
			{
				pd[i][j] = pd[i+1][j+1] + 1; // 1 + valor de avancar em 'i' e 'j'
				caminho[i][j] = 0;           // igual -> caminho = 0
			}
			else
			{
				if(pd[i+1][j] > pd[i][j+1]) // melhor avancar em 'i' -> caminho = 2;
				{
					pd[i][j] = pd[i+1][j];
					caminho[i][j] = 2;
				}
				else                       	// melhor avancar em 'j' -> caminho = 1;
				{
					pd[i][j] = pd[i][j+1];
					caminho[i][j] = 1;
				}
			}
		}
    }
	tam_lcs = pd[0][0];

    int j = 0;
    int i = 0;
    while (tam_lcs > 0)
    {
        if(caminho[i][j] == 0)
        {
            cout << s1[i] << " ";
            i++;
            j++;
            tam_lcs--;
            aux2 = true;
        }
        else if(caminho[i][j] == 1)
        {
            j++;
        }
        else 
        {
            i++;
        }
    }

    if(aux2 == false)
    {
        aux = false;
    }
    if(aux2)
    {
        aux = true;
    }
   
    cout << endl;
	
    }
	return 0;
}