#include <iostream>

using namespace std;


int main(){
	int a;
	int *b; //ponteiro
	
	a = 2;
	b = &a;
	*b = 3;
	
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "b = " << (int)b << endl;
	cout << "*b = " << *b << endl; //operador de de-referencia
	
	return 0;
}