#include <iostream>

using namespace std;

void soma(int a, int b, int *c){
	*c = a + b; //ele fala pro programa ir no endereço de s e colocar a+b
}


int main(){
	
	int x,y,s = 0;
	
	cin >> x >> y;
	soma(x,y, &s); //manda inves do valor de s, o endereço de s
	cout << "s = " << s << endl;
	
	return 0;
}