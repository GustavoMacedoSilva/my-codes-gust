#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int i, cont1, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	cont1=0;
//entrada	
	cout << "Digite dez numeros: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;
	
//saida
    for(i=1; i<=10; i++){
	
    if (i>0)
      cont1++;
	  
    
}
cout << "POSITIVOS= " << cont1 << endl;
cout << fixed << setprecision(2) << "Media= " << (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10. << endl;	  
	  
return 0;	  
}