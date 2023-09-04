#include <iostream>

using namespace std;

int h1(int k, int m){
	int h1 = k % m;
	if(h1<0){
	h1 = h1+m;
	}
	return h1;
}

int h2(int k, int m){
	int h2 = 1 + (k % (m-1));
	if(h2<0){
		h2 = h2+m;
	}
	return h2;
}

int dhash(int k, int m, int i){
	int dh = (h1(k, m) + i*h2(k, m)) % m;
	return dh;
}

int main(){
	int k;
	int m;
	int i;
	
	cin >> k;
	cin >> m;
	
	for( i=0; i<m; i++){
		cout << dhash(k, m, i) << " ";
	}
	return 0;
}