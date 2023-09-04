#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
//	
	int i, N, qntp=0, op;
	int codp; //codigo para achar o produto
	int rt; //qnt para retirar
	struct registro{
		char nome[21];
		int cod;
		int qnt;
	};
	registro dados[200];
//	
	cout << "Quantos produtos vamos cadastrar?" << endl;
	cin >> N;
	cout << "Cadastro de produto:" << endl;
	for(i=0; i<N; i++){
		qntp++;
		cout << qntp << "º" << " Produto" << endl;
		cout << "Nome: " << endl;
		cin.ignore();
		cin.getline(dados[i].nome, 21);
		cout << "Codigo:" << endl;
		cin >> dados[i].cod;
		cout << "Quantidade:" << endl;
		cin >> dados[i].qnt;
	}
	cout << "Fim do cadastro!" << endl;
	cout << "Deseja retirar algum produto? (1 p/ sim, 0 p/ nao)" << endl;
	cin >> op;
	
	switch (op) {
		case 1:
		cout << "Digite o codigo do produto" << endl;
		cin >> codp;
		for(i=0; i<N; i++){
		if(codp == dados[i].cod){
			cout << "Produto encontrado! Qual a quantidade que deseja retirar?" << endl;
			cin >> rt;
			dados[i].qnt = dados[i].qnt - rt;
			cout << "Cadastro atualizado!" << endl;
			break;
		}
		}
		case 0:
			break;
	}
	cout << "Mostrando o registro: " << endl;
	for(i=0; i<N; i++){
		cout << "Nome:" << "\t" << dados[i].nome << endl;
		cout << "Codigo:" << "\t" << dados[i].cod << endl;
		cout << "Quantidade:" << "\t" << dados[i].qnt << endl;
	}
	
	return 0;
	
}