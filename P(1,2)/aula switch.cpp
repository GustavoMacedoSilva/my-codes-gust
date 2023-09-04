#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	float x, y, z;
	int m;
	
//entrada	
	cout << "Digite 3 numeros " << endl;
	cin >> x >> y >> z;
	cout << "Digite '1' para calcular a media ponderada e '2' para a media aritmetica" << endl;
	cin >> m;
	
//saida	
	switch(m){
	
	case(1):
		cout << "Media ponderada: " << (x*5+y*3+z*2)/10 << endl;
		break;
	
	case(2):
		cout << "Media aritmetica: " << (x+y+z)/3 << endl;
		break;
	
	default:
		cout << "opcao errada!" << endl;
		break;
	
	}
return 0;	
}