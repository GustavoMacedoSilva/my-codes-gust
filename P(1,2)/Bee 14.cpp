#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	float n1, n2, n3, n4, ne, mp, mp2;
	
//entrada	
	cout << fixed << setprecision(1);
	cin >> n1 >> n2 >> n3 >> n4;
	mp = (n1*2+n2*3+n3*4+n4*1)/10;
	
//saida	
	cout << "Media: " << mp << endl;
	
	if(mp>=7.0)
	cout << "Aluno aprovado." << endl;
	
	if(mp<5.0)
	cout << "Aluno reprovado." << endl;
	
	if (mp>=5.0 && mp<=6.9){
	
	cout << "Aluno em exame." << endl;
	cin >> ne;
	cout << "Nota do exame: " << ne << endl;
	mp2 = (mp+ne)/2;
	if(mp2>=5.0){
	
	cout << "Aluno aprovado." << endl;
	cout << "Media final: " << mp2 << endl;
}
	if(mp2<=4.9){
	
	cout << "Aluno reprovado." << endl;
	cout << "Media final: " << mp2 << endl;
}


return 0;

}
	
	
}