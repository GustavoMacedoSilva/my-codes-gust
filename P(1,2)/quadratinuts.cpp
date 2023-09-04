#include <iostream>
using namespace std;

struct dado
{
	int k; //chave
	int status; //0:vazio ; 1:ocupado
} ;

int hash_aux(int k, int m)
{
	int h = k % m;
	if(h < 0)
	{
		h = h + m;
	}
	return h;
}

int hash1(int k, int i, int m)
{
	int h1 = (hash_aux(k, m) + i) % m;

	return h1;
}

int hash_insert(dado t[], int m, int k)
{
	int i = 0;
	int j;
	do
	{
		j = hash1(k, i, m);
		if (t[j].status != 1)
		{
			t[j].k = k;
			t[j].status = 1;
			return j;
		}
		else
			i = i + 1;
	}
	while (i != m);
	return -1;
}

int hash_search(dado t[], int m, int k)
{
	int i = 0;
	int j;
	do
	{
		j = hash1(k, i, m);
		if (t[j].k == k)
			return j;
		i = i + 1;
	}
	while (t[j].status != 0 && i < m);
	return -1;
}

int hash2(int k, int i, int m, int c1, int c2){
	int h2 = (hash_aux(k, m) + c1*i + c2*i*i) % m;
	return h2;
}


int main()
{
	int m; //tamanho da tabela
	int k; //chave
    int c1;
    int c2;
	
	
	cin >> k;
	cin >> m;
	cin >> c1;
	cin >> c2;
	
	
	for(int i = 0; i<m; i++){
		cout << hash2(k, i, m, c1, c2) << " ";
	}
	
	return 0;
}