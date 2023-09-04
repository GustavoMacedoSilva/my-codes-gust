#include <iostream>
#include <cstring>

using namespace std;

int main()
{
//
	int x;
	char nome[50];
	int cont = 0;
//
cin >> x;
cin.ignore();
cin.getline(nome, 50);
for(int i=0; i<x; i++){
	if(isupper(nome[i]))
		cont++;
}
cout << cont << endl;
return 0;
}
