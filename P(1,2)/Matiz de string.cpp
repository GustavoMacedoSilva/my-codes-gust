#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int i;
	char c[5][50];
//	
	cout << "Digite os nomes das cidades: " << endl;
	
	for(i=0; i<5; i++){
		cin.getline(c[i], 21);
	}
	cout << endl << "Nome das cidades: " << endl;
	for(i=0; i<5; i++){
			cout << c[i] << endl;
	}
	
	return 0;
}