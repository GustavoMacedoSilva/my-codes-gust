#include <iostream>
#include <iomanip>

using namespace std;

int main() {
//var	
	int S;
	
//entrada	
	cout << "Digite um numero e veja o premio: ";
	cin >> S;
//saida	
	switch(S){
		
	case (1):	
	cout << "Uma bicicleta";
	break;
	
	case (2):
	cout << "Um carro";
	break;
	
	case (3):
	cout << "Uma casa";
	break;
	
	case (4):
	cout << "Barras de ouro";
	break;
	
	case (5):
	cout << "Uma coxinnha da cantina";
	break;
	
	default:
	cout << "Perdeu o sorteio bobao";
	break;
	}
	return 0;
}