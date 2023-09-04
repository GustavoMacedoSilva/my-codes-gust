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
	int p; //peso da aresta
	int nVertices = 4; //n de vertices do grafo
	int i; //contador
	int orientado; // 1:sim, 0:nao
	list<no>::iterator q;
	
	cin >> nVertices;
	cin >> orientado;
	
	cin >> u >> v >> p;
	while (u != -1 && v != -1 && p != -1)
	{
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}
	
	//mostrar a lista de adjacentes
	for(i = 0; i < nVertices; i++)
	{
		for(q = adj[i].begin(); q != adj[i].end(); q++)
		{
			cout << i << " " << q -> v << " " << q -> peso << endl;
		}
	}
	
	return 0;
}