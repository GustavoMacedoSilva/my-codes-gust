#include <iostream> // Entrada e sa�da
#include <climits> // INT_MAX
#include <algorithm> // next_permutation

using namespace std;

int main()
{
	int custo[11][11]; // 100 -> numero maximo de planetas
						 // custo[i][j] = custo de ir do planeta 'i' para o planeta 'j'
	int n; // numero de planetas
	int planeta_inicial;
	
	cin >> n;
	for(int i = 0;i < n;i++)
		for(int j = i+1;j < n;j++)
		{
			cin >> custo[i][j];
			custo[j][i] = custo[i][j];
		}
	cin >> planeta_inicial;
	
	
	int v[100]; // vetor com os planetas a serem permutados
	int p; // var. auxiliar
	int menor_custo; // menor custo da viagem
	int custo_caminho; // custo do caminho
	
	// colocando os planetas que serao permutadas no vetor (todas exceto o inicial)
	p = 0;
	for(int i = 0;i < n;i++)
		if(i != planeta_inicial)
		{
			v[p] = i;
			p++;
		}

	// forca bruta
	menor_custo = INT_MAX; // inicializo o custo com infinito
	do
	{
		custo_caminho = custo[planeta_inicial][v[0]]; // custo do planeta inicial -> v[0]
		
		for(int i = 0;i < n-2;i++) // somar custo de v[0]->v[1]->v[2]...v[n-3]->v[n-2]
			custo_caminho += custo[v[i]][v[i+1]];
		
		custo_caminho += custo[v[n-2]][planeta_inicial]; // custo v[n-2] -> planeta inicial
		
		menor_custo = min(menor_custo,custo_caminho);
	}while(next_permutation(v,v+(n-1))); // n-1 = numero de planetas a serem permutados
	// obs.: para fazer todas as permutacoes, o vetor deve estar ordenado no comeco
	
	cout << menor_custo << endl;
	return 0;
}