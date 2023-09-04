 #include <iostream>
 #include <iomanip>
 #include <cmath>
 
 using namespace std;
 
 void pm(double x, double y, double a, double b, double &x3, double &y3){
	 x3 = (x+a)/2;
	 y3 = (y+b)/2;
	 
 }
 
 int main(){
	 double x1, x2, x3, y1, y2, y3;
	 cout << "Entre com as coordenadas(x, y) do ponto P1: ";
	 cin >> x1 >> y1;
	 cout << "Entre com as coordenadas (x, y) do ponto P2: ";
	 cin >> x2 >> y2;
	 pm(x1, y1, x2, y2, x3, y3);
	 cout << "Coordenadas do ponto medio: M(" << x3 << ", " << y3 << ")" << endl;
	 return 0;
 }