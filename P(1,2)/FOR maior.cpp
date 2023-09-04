#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var 	
	int n, i, cont1, cont2, e;
	cont1=0;
	cont2=0;
//entrada
	cout << "Quantas pessoas? ";
	cin >> n;
	for (i=1; i<=n; i++)
	{
	cout << "Voce concorda com oq o governo fez na pandemia?????? *(1 para SIM) (2 para NAO)*" << endl;
	cin >> e;
	if(e==1)
	cont1++;
	if(e==2)
	cont2++;
}
cout << "Contagem de pessoas q concordam: " << cont1 << cont1/n*100. <<"%" << endl;
cout << "Contagem de pessoas q estao certas: " << cont2 << cont2/n*100. << "%" << endl;

return 0;
}