#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
//var	
	float x, y;
	
//entrada	
	cout << fixed << setprecision(1);
	cin >> x >> y;
	
//saida	
	if(x>0 && y>0)
	cout << "Q1" << endl;
	
	if(x<0 && y>0)
	cout << "Q2" << endl;
	
	if(x<0 && y<0)
	cout << "Q3" << endl;
	
	if (x>0 && y<0)
	cout << "Q4" << endl;
	
	if(x==0 && y==0)
	cout << "Origem" << endl;
	
	if(x==0 && y!=0)
	cout << "Eixo y" << endl;
	
	if(y==0 && x!=0)
	cout << "Eixo x" << endl;
	
	return 0;
}