#include <iostream> // Entrada e sa�da
#include <climits> // INT_MAX

using namespace std;

int g; //galhos
int n; // quantidade de pacotes
int v[100], peso[1000]; // efeites e peso de cada pacote
int itens_pegos[1000];

int solve(int cap)
{
	int val = 0;

	for(int i = 0; i<n; i++)
	{
		if(cap < 0)
		{
			return val;
		}

		if(cap>=peso[i])
		{
			itens_pegos[i] = i;
			val += v[i];
			cap -= peso[i];
		}


	}
	return val;
}

int main()
{
	cin >> g;
    for(int aux_galho = 0; aux_galho < g; aux_galho++)
    {
	
    cin >> n;    
    
    int peso_max_galho;
	
    cin >> peso_max_galho;

	for(int i =0; i < n;i ++)
	{
		cin >> v[i] >> peso[i];
	}

	int auxV; // var aux para o valor
	int auxP; // var aux para o peso


   // ordernando do maior para menor
	for(int i = 0; i< n;i++)
	{
		for(int j = 0; j<n; j++)
		{
			if(v[j] < v[i])
			{
				auxV = v[i];
				v[i] = v[j]; // ordernando vetor de valor
				v[j] = auxV;

				auxP = peso[i];
				peso[i] = peso[j]; // ordernando vetor de peso
				peso[j] = auxP;
			}
		}
	}

	cout << "Galho: " << aux_galho + 1 << endl;
	cout << "Numero total de enfeites: " << solve(peso_max_galho) << endl;
    }	
	
	return 0;
}