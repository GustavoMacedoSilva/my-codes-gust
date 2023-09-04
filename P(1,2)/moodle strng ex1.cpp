#include <iostream>
#include <cstring>

using namespace std;

int main(){
//	
	char x[51];
	int i, contv = 0;
	int tamanho;
//	
	cin.getline(x, 51);
	tamanho = strlen(x);
//
	for(i=0; i<tamanho; i++){
	if(x[i] == 'a'){
		x[i] = 'A';
		contv++;
	}
		if(x[i] == 'e'){
		x[i] = 'E';
		contv++;
	}
		if(x[i] == 'i'){
		x[i] = 'I';
		contv++;
	}
		if(x[i] == 'o'){
		x[i] = 'O';
		contv++;
	}
		if(x[i] == 'u'){
		x[i] = 'U';
		contv++;
	}
	}
	cout << x << endl;
	cout << contv << endl;
	return 0;
}