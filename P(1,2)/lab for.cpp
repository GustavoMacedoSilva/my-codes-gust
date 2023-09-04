#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
//var	
	int i, N;
	
//entrada	 
    cout << "Digite a quantidade de numeros: ";
    cin >> N;
    
   //saida
   for(i=N; i>=1; i--){
   
   cout << pow(i, 2) << endl;
}
cout << "Terminou..." << endl;

return 0;
}