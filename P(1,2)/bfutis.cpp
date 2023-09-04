#include <iostream>
#include <list>

using namespace std;

struct no
{
	int v; // vertice adjacente
	int peso; // peso da aresta
};


void bfs(list<no>adj[], int nVertices, int s)
{
	char state[10];
	int pai[10];
	list<int> Q;
	int u;
	list<no>::iterator p;
	int v;
	for (u = 0; u < nVertices; u++)
	{
		if(u != s)
		{
			state[u] = 'u';
			pai[u] = -1;
		}
	}

	state[s] = 'd';
	pai[s] = -1;
	Q.push_back(s);

	while (!Q.empty())
	{
		u = *Q.begin(); 
		Q.pop_front(); 
		cout << u << endl; 
		for (p = adj[u].begin(); p != adj[u].end(); p++) 
		{
			v = p-> v;
			cout << u << " " << v << endl; 
			if (state[v] == 'u')
			{
				state[v] = 'd'; 
				pai[v] = u ;
				Q.push_back(v);
			}
		} 
        state[u] = 'p';
    }
}


void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	no aux;
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
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
	int nVertices; //n de vertices do grafo
	list<no>::iterator q;
	int s;
	int orientado = 0;

	cin >> nVertices;
	cin >> s;

	cin >> u >> v >> p;
	while (u != -1 && v != -1 && p != -1)
	{
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}

	//mostrar a lista de adjacentes
	bfs(adj, nVertices, s);

	return 0;
}
