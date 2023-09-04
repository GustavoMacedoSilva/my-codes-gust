#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int n, i;
	char mat[5][4];
	double n1[5];
	double n2[5];
	double md[5];
//
	cout << "Quantos alunos(1 a 5): ";
	do{
		cin >> n;
	}while(n>5 || n<1);
	for(i=0; i<n; i++){
		cout << "Aluno(" << i+1 << "): Matricula: ";
		cin.ignore();
		cin.getline(mat[i], 4);
		cout << "Nota NP1 (0-100): ";
		do{
			cin >> n1[i];
		}while(n1[i]>100 || n1[i]<1);
		cout << "Nota NP2 (0-100): ";
		do{
			cin >> n2[i];
		}while(n2[i]>100 || n2[i]<1);
		md[i] = (n1[i]+n2[i])/2;
	}
	cout << "Listagem dos alunos: " << endl;
    cout << "Matricula" << "\t" << "Media" << "\t" << "Situacao" << endl;
	for(i=0; i<n; i++){
		cout << mat[i] << "\t\t" << md[i] << "\t";
		if(md[i]>= 60){
			cout << "Aprovado" << endl;
		}
		if(md[i]<60){
			cout << "Reprovado" << endl;
		}
	}
	
	
	
	return 0;
}