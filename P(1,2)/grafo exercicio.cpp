#include <iostream>
#include <list>
using namespace std;

struct no
{
    int v; // vertice adjacente
    int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	no aux;
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
	//inserindo aresta de volta
	if(orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}

int main ()
{
	list<no> adj[10]; //lista de adjacencias
	int u, v; //origem e destino da aresta
	int p = 1; //peso da aresta
	int nVertices = 4; //n de vertices do grafo
	int i; //contador
	int orientado; // 1:sim, 0:nao
	list<no>::iterator q; //ponteiro da lista
	int o1, d1; //origem e destino que a empresa quer
	bool teste; //teste para checar se tem oq a empresa necessita
	
	cin >> nVertices; //cidades
	orientado = 0; //nao eh orientado
	
	cin >> o1 >> d1; //origem e destino desejados sao lidos
	
	cin >> u >> v;
	while (u != -1 && v != -1)//adiciona valores a lista
	{
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v;
	}
	
	for(i = 0; i < nVertices; i++) //varre a lista
	{
		for(q = adj[i].begin(); q != adj[i].end(); q++)
		{
			if(i == o1 && q -> v == d1) //se a origem desejada e o destino desejado estiverem na lista teste eh true
			{
				teste = true;
			}
		}
	}
	
	if(teste) //se teste eh true entao
	{
		cout << "Ferrovia" << endl;
	}
	
	else //se nao entao
	{
		cout << "Rodovia" << endl;
	}
	
	return 0;
}