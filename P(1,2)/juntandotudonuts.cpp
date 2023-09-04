#include <iostream>

using namespace std;

struct dado
{
	int k;
	int status; // 0-vazio, 1-ocupado, 2-removido
};

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

int h1(int k, int m){
	int h1 = k % m;
	if(h1<0){
	h1 = h1+m;
	}
	return h1;
}

int h2(int k, int m){
	int h2 = 1 + (k % (m-1));
	if(h2<0){
		h2 = h2+m;
	}
	return h2;
}

int dhash(int k, int m, int i){
	int dh = (h1(k, m) + i*h2(k, m)) % m;
	return dh;
}

int hash_insert(dado t[], int m, int k)
{
	int i = 0;
	int j;
	do
	{
		j = dhash(k, m, i);
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

int hash_remove(dado t[], int m, int k)
{
	int j = hash_search(t, m, k);
	if(j != -1)
	{
		t[j].status = 2;
		t[j].k = -1;
		return 0; // consegui remover
	}
	else
		return -1; // k nao esta na tabela
}


int main ()
{
	struct dado t[100];
	int m; //tamanho da tabela
	int k; //chave
	int aux; //escolha

	cin >> m;

	 for(int i = 0; i < m; i++)
	{
		t[i].k = -1;
		t[i].status = 0;
	}
	cin >> aux;
	while(aux != 5){
	
	if(aux == 1){
		cin >> k;
		hash_insert(t, m, k);
	}
	
	if(aux == 2){
		cin >> k;
		cout << hash_search(t, m, k) << endl;
	}
	
	if(aux == 3){
		cin >> k;
		hash_remove(t, m, k);
	}
	
	if(aux == 4){
		for(int i = 0; i<m; i++){
		cout << t[i].k << " ";
	}
	cout << endl;
	}
	cin >> aux;
	}
	return 0;
}
