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


int main()
{
	struct dado t[100];
	int m; //tamanho da tabela
	int k; //chave
	int s; //aux para a procura

	cin >> m;

	for(int i = 0; i < m; i++)
	{
		t[i].k = -1;
		t[i].status = 0;
	}

	cin >> k;
	while(k != 0)
	{
		hash_insert(t, m, k);
		cin >> k;
	}
	
	
	cin >> k;
	
	s = hash_search(t, m, k);
	if(s != -1)
	{
		cout << "Chave " << k << " encontrada na posicao " << s << endl;
	}
	else
	{
		cout << "Chave " << k << " nao encontrada" << endl;
	}

	return 0;
}
