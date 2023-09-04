#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(){
struct inf
{
	char nome[51];
	char d[3];
	char m[3];
	char a[3];
	char g[2];
};
inf dados;

cout << "Digite seu nome: " << endl;
cin.getline(dados.nome, 51);
cout << "Digite a data de nascimento(dia, mes, ano (dois digitos) respectivamente):" << endl;
cin.getline(dados.d, 3);
cin.getline(dados.m, 3);
cin.getline(dados.a, 3);
cout << "Digite seu sexo(M ou F): " << endl;
cin.getline(dados.g, 2);

cout << dados.nome << endl;
cout << dados.d << "/" << dados.m << "/" << dados.a << endl;
cout << dados.g << endl;
return 0;	
	
	
}