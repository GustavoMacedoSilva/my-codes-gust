#include <iostream>

using namespace std;

int main()
{
	int vetor[5];
	int *p;
	int i;
	
	for (i = 0; i< 5; i++){
		vetor[i] = i;
	}
	
	p = vetor;
	
	for(i = 0; i<5; i++){
	cout << *p << endl;
	p++;
	}
	
	return 0;
}
