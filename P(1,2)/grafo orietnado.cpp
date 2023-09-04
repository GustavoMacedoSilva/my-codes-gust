#include <iostream>
#include <list>
using namespace std;

struct no
{
	int v; //destino
	int p; //peso
};


int main ()
{
	list<no> adj[10]; //lista de adjacencias
	no aux; //var aux para inserir as arestas na lista de adjacencia
	int u, v; //origem e destino da aresta
	int p; //peso da aresta
	int nVertices = 4; //n de vertices do grafo
	int i; //contador
	list<no>::iterator q; //iterator para varrer a lista
	int orientado; // 1:orientado, 0:nao orientado

	//inserindo aresta
	u = 0;
	v = 1;
	p = 4;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//inserindo aresta de volta
	aux.v = u;
	adj[v].push_back(aux);

	//jeito de gente normal
	// cin >> u;
	// while(u != -1)
	// {
	// 	cin >> v;
	// 	cin >> p;
	// 	aux.v = v;
	// 	aux.p = p;
	// 	adj[u].push_back(aux);
	// 	aux.v = u;
	// 	adj[v].push_back(aux);
	// 	cin >> u;
	// }

	//inserindo aresta
	u = 0;
	v = 2;
	p = 2;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//inserindo aresta de volta
	if(orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
	//inserindo aresta
	u = 0;
	v = 3;
	p = 7;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//inserindo aresta de volta
	aux.v = u;
	adj[v].push_back(aux);

	//inserindo aresta
	u = 1;
	v = 2;
	p = 3;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//inserindo aresta de volta
	aux.v = u;
	adj[v].push_back(aux);

	//inserindo aresta
	u = 1;
	v = 3;
	p = 1;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//inserindo aresta de volta
	aux.v = u;
	adj[v].push_back(aux);


	//inserindo aresta
	u = 2;
	v = 3;
	p = 5;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//inserindo aresta de volta
	aux.v = u;
	adj[v].push_back(aux);


	//mostrar a lista de adjacentes
	for(i = 0; i < nVertices; i++)
	{
		for(q = adj[i].begin(); q != adj[i].end(); q++)
		{
			cout << i << " " << q -> v << " " << q -> p << endl;
		}
	}

	return 0;
}
