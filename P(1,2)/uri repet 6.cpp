#include <iostream>
#include <iomanip>

using namespace std;

int main(){
//var	
	int i, n;
	int q, contc, contr, conts, st;
	float sc, sr, ss;
	char a;
	sc=0;
	sr=0;
	ss=0;
	st=0;
	contc=0;
	conts=0;
	contr=0;
//entrada	
	cin >> n;
	for(i=1; i<=n; i++){
	cin >> q >> a;
	st=st+q;
	if(a=='C'){
	contc=q;
	sc=sc+contc;
	}
	if(a=='R'){
	contr=q;
	sr=sr+contr;
}
	if(a=='S'){
	conts=q;
	ss=ss+conts;
}
}
cout << "Total: " << st << " cobaias" << endl;
cout << "Total de coelhos: " << sc << endl;
cout << "Total de ratos: " << sr << endl;
cout << "Total de sapos: " << ss << endl;
cout << fixed << setprecision(2);
cout << "Percentual de coelhos: " << (sc/st)*100. << " %" << endl;
cout << "Percentual de ratos: " << (sr/st)*100. << " %" << endl;
cout << "Percentual de sapos: " << (ss/st)*100. << " %" << endl;

	return 0;
}