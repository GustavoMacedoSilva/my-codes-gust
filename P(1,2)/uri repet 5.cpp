#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
//var	
	int x, i, maior, maiorp;
	maior=0;
//saida
	for(i=1; i<=100; i++){
	cin >> x;
	if(i == 1){
			maiorp = i;
			maior = x;
		}

		if(x > maior){
			maiorp = i;
			maior = x;
		}
			
	}
	cout << maior << endl;
	cout << maiorp << endl;
	return 0;
	
}