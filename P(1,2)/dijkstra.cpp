#include <iostream>
#include <list>
#include <limits.h>

using namespace std;

struct no{
    
    int v; // vertice adjacente
    int peso; // peso da aresta
	
};

struct galho{
	
	bool intree; //variavel que define se o vertice ja esta ou nao inserido na arvore
	int distance; //variavel para salvar a distancia deste vertice com seu ligado
	int parent; //variavel para salvar o ligado deste vertice da arvore
	
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado){

    no aux; //declarando auxiliar de struct

    //definindo destino e peso da aresta no auxiliar de struct
    aux.v = v; 
    aux.peso = p;

    adj[u].push_back(aux); //insere a aresta no grafo

    //caso o grafo nao seja orientado cria o caminho de volta no grafo
    if(orientado == 0){

        aux.v = u;
        adj[v].push_back(aux);

    }

}

void dijkstra(list<no>adj[], int nVertices, int start, int end){
	
	galho arvore[10]; //cria o vetor arvore
	int custo = 0; //custo total da arvore
	int destino, weight, v, dist; //variaveis auxiliares 
	
	//define todos os vertices da arvore como false, com distancia maxima e sem pais
	for(int u = 0;u < nVertices;u++){
		
		arvore[u].intree = false;
		arvore[u].distance = INT_MAX;
		arvore[u].parent = -1;
		
	}  	
	
	arvore[start].distance = 0; //define distancia do vertice inicial
	v = start; //define vertice inicial
	cout << "Menor caminho: ";
	//insere todos os vertices na arvore com menor custo possivel
	while(arvore[v].intree == false){
		
		arvore[v].intree = true; //define que o vertice foi inserido na arvore
		
		//encontra o menor caminho possivel do vertice para o seu destino
		for(list<no>::iterator p = adj[v].begin(); p != adj[v].end(); p++){
			
			destino = p->v;
			weight = p->peso;
			
			if(arvore[destino].distance > weight + arvore[destino].distance){
				
				arvore[destino].distance = weight + arvore[destino].distance;
				arvore[destino].parent = v;
			}
			cout << v << " ";
		}
		v = 0; //define vertice como 0
		dist = INT_MAX; //define a distancia maxima
		
		//encontra proximo vertice a ser inserido na arvore
		for(int u = 0;u < nVertices; u++)
			if(arvore[u].intree == false && dist > arvore[u].distance){
				
				dist = arvore[u].distance;
				v = u;
			}
	}
	cout << "Custo: " << endl;
}

int main(){
	
	list<no> adj[10]; //vetor de listas para os vertices do grafo
    int u, v, p; //variaveis de entrada para origem, destino das arestas a serem criadas
    int nVertice; //variavel de entrada para numero de vertices as serem usados
    int origem; //variavel para armazenar origem do grafo
    int orientado; //1:orientado 0:nao orientado
    int d; //destino
    
    cin >> nVertice >> orientado >> origem >> d; //le valor quantidade de vertices, se o grafo eh ou nao orientado e o vertice inicial
	
	cin >> u >> v >> p; //le aresta e seu peso
	
	//cria todas as arestas inseridas
    while(u != -1 && v != -1 && p != -1){

        cria_aresta(adj,u,v,p,orientado);
        cin >> u >> v >> p;

    }
    
    dijkstra(adj, nVertice, origem, d); //gera a arvore e mostra na tela suas arestas e seu peso
    
    
    //limpa memoria usada nas listas do grafo
    for(int i=0;i<nVertice;i++)
        while(!adj[i].empty())
            adj[i].pop_back();
	
	return 0;
}