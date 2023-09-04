#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//variaveis	
	int senha; //senha neh pae
	
//entrada	
	do{
	
	cin >> senha;
	if(senha!=2002)
	cout << "Senha Invalida" << endl;
    if(senha==2002)
	cout << "Acesso Permitido" << endl;

}   while(senha!=2002);
	
		return 0;
}