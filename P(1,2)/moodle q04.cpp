#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	int i, N, idade, tempo;
	
//entrada	
	cout << "Digite a quantidade de funcionarios testados: ";
	cin >> N;
	
//saida	
	for(i=1; i<=N; i++){
	cout << "Digite a idade: ";
	cin >> idade;
	cout << "Digite o tempo de servico: ";
	cin >> tempo;
	
	if(idade>=65 || tempo>=30 || idade>=60 && tempo>=25)
	cout << "O funcionario esta qualificado para aposentadoria..." << endl;
	
	else
	cout << "O funcionario ainda nao esta qualificado para aposentadoria..." << endl;
}
	return 0;
}