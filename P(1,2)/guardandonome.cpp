#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct info
{
    char nome[100];
    int idade;
    float peso;
    float altura; 
};

struct dado
{
    info atleta; // nome, idade, peso e altura de cada atleta
    int k; // chave
    int status; // 0:vazio, 1:ocupado, 2:removido
};

int h1(int k, int m)
{
	int h1 = k % m;
	if(h1 < 0)
	{
		h1 = h1 + m;
	}
	return h1;
}

int h2(int k, int m)
{
	int h2 = 1 + (k % (m - 1));
	if(h2 < 0)
	{
		h2 = h2 + m;
	}
	return h2;
}

int dhash(int k, int m, int i)
{
	int dh = (h1(k, m) + i * h2(k, m)) % m;
	return dh;
}

int hash_insert(dado t[], int m, int k, info inf)
{
	int i = 0;
	int j;
	do
	{
		j = dhash(k, m, i);
		if (t[j].status != 1)
		{
			t[j].atleta = inf;
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

int hash_search(dado t[], int m, int k, char info[])
{
	int i = 0;
	int j;
	do
	{
		j = dhash(k, m, i);
		if(t[j].k == k && strcmp(t[j].atleta.nome, info) == 0)
		{
			return j;
		}
		i = i + 1;
	}
	while (t[j].status != 0 && i < m);
	return -1;
}

int hash_remove(dado t[], int m, int k, info inf)
{
	int j = hash_search(t, m, k, inf.nome);
	if(j != -1)
	{
		strcpy(t[j].atleta.nome, "vazio");
		t[j].status = 2;
		t[j].k = -1;
		return 0; // consegui remover
	}
	else
		return -1; // k nao esta na tabela
}


int main ()
{
	info inf;
	struct dado t[100];
	int m; //tamanho da tabela
	int k; //chave
	int aux; //escolha
	char p[50]; //palavra
	int tam; //tamanho da palavra
	int sc; //search

	cin >> m;

	for(int i = 0; i < m; i++)
	{
		t[i].k = -1;
		t[i].status = 0;
		strcpy(t[i].atleta.nome, "vazio");
	}
	cin >> aux;
	while(aux != 5)
	{

		if(aux == 1)
		{
			cin.ignore();
			cin.getline(inf.nome, 50); 
			cin >> inf.idade;
			cin >> inf.peso; 
			cin >> inf.altura;
			tam = strlen(inf.nome);
			k = 0;
			for(int i = 0; i < tam; i++)
			{
				k = k + (int)inf.nome[i];
			}
			hash_insert(t, m, k, inf);
		}

		if(aux == 2)
		{
			cin.ignore();
			cin.getline(inf.nome, 50);
			tam = strlen(inf.nome);
			k = 0;
			for(int i = 0; i < tam; i++)
			{
				k = k + (int)inf.nome[i];
			}
			sc = hash_search(t, m, k, inf.nome);
			if(sc == -1)
			cout << inf.nome << " nao encontrado" << endl;
			else
			{
		     	cout << "Nome: " << t[sc].atleta.nome << endl;
		     	cout << "Idade: " << t[sc].atleta.idade << endl;
		     	cout << "Peso: " << t[sc].atleta.peso << endl;
		     	cout << "Altura: " << t[sc].atleta.altura << endl;
            }
           cout << endl;
		}

		if(aux == 3)
		{
			cin.ignore();
			cin.getline(inf.nome, 50);
			tam = strlen(inf.nome);
			k = 0;
			for(int i = 0; i < tam; i++)
			{
				k = k + (int)inf.nome[i];
			}
			hash_remove(t, m, k, inf);
		}

		if(aux == 4)
		{
			for(int i = 0; i < m; i++)
			{
			    if(t[i].status == 1){
				cout << "Nome: " << t[i].atleta.nome << endl;
		     	cout << "Idade: " << t[i].atleta.idade << endl;
		     	cout << fixed << setprecision(1) << "Peso: " << t[i].atleta.peso << endl;
		     	cout << fixed << setprecision(2) << "Altura: " << t[i].atleta.altura << endl;
		     	if(i < 5)
		     	cout << endl;
			    }
			}
		}
		cin >> aux;
	}
	return 0;
}