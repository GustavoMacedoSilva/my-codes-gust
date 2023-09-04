#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
//var	
	float n, c, idade, f, contc, contc2, contn, contn2;
	int maior, menor;
	
	maior=0;
	menor=1000;
//entrada	
	cout << "Quantos alunos participaram do teste? " << endl;
	cin >> n;
	
//saida	
	for(int i=1; i<=n; i++){
	
	cout << "Cidade de origem (1 para Santa Rita, 2 para outra cidade): ";
	cin >> c;
	cout << "Nota para a feira (1 para Boa, 2 para Muito boa): ";
	cin >> f;
	cout << "Sua idade: ";
	cin >> idade;
	if(idade>maior)
	maior=idade;
	if(idade<menor)
	menor=idade;
	if(c==1)
	contc++;
	if(c==2)
	contc2++;
	if(f==1)
	contn++;
	if(f==2)
	contn2++;

}
cout << "Percentual de pessoas que sao de Santa Rita: " << (contc/n)*100. << " %" << endl;
cout << "Percentual de pessoas que nao sao de Santa Rita: " << (contc2/n)*100. << " %" << endl;
cout << "Percentual de pessaos que acharam Boa a feira: " << (contn/n)*100. << " %" << endl;
cout << "Percentual de pessoas que acharam Muito Boa a feira: " << (contn2/n)*100. << " %" << endl;
cout << "Maior idade eh: " << maior << endl;
cout << "Menor idade eh: " << menor << endl;

return 0;	
}