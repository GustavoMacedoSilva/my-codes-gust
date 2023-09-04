#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//	
 double A[3][3];	
 int i, j;
//	
cout << "nuemros da matriz: " << endl;	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cin >> A[i][j];
		}
	}
	cout << endl << "Matriz A: " << endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	
	
	return 0;
}